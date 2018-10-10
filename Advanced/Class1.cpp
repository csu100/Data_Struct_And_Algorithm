#include "Class1.h"


/***************************************************
*  �������ܣ��ַ��� ƥ��
*  ����˵��
*       ���������  string str  = "abcabcababaccc";
                    string match = "ababa";
*       ���������6
*  �����Է�����ʱ�临�Ӷȣ�O(N)���ռ临�Ӷȣ�O(N)
*  ��Ŀ��Դ  ��
*  ���ߣ�guoliang zheng
*  ���ڣ�2018-08-17-14.45
***************************************************/
int KMP::getIndexOf(string str,string match)
{
    if(str.size()<1 || match.size()<1 || str.size()<match.size()) return -1;
    int lenstr=str.size();
    int lenmat=match.size();
    vector<int> next=getNextArray(match);
    int si=0;
    int mi=0;
    while(si<str.size() && mi<match.size())
    {
        if(str[si]==match[mi])
        {
            si++;
            mi++;
        }else if(next[mi]==-1)
        {
            si++;
        }else
        {
            mi=next[mi];
        }
    }
    return mi==match.size()?si-mi:-1;
}

vector<int> KMP::getNextArray(string match)
{
    if(match.size()==1)
    {
        vector<int> Next(1,-1);
        return Next;
    }
    int len=match.size();
    vector<int> Next(len,0);
    Next[0]=-1;
    Next[1]=0;
    int cn=0;
    int pos=2;
    while(pos<len)
    {
        if(match[pos-1]==match[cn])
        {
            Next[pos++]=++cn;
        }else if(cn>0)
        {
            cn=Next[cn];
        }else
        {
            Next[pos++]=0;
        }
    }
    return Next;
}
/***************************************************
*  �������ܣ�����һ���ַ���������ַ�������ظ��Ӵ�
*  ����˵��
*       ���������abcdefadef
*       ���������def���±�3
*  �����Է�����ʱ�临�Ӷȣ�O(N^2)���ռ临�Ӷȣ�O(N)
*  ��Ŀ��Դ  ��
*  ���ߣ�guoliang zheng
*  ���ڣ�2018-08-17-16.05
***************************************************/
int KMP::maxRepat(string str)
{
    if(str.size()<2) return 0;
    int MaxIndex=0;
    int index=0;
    for(int i=0;i<str.size();i++)
    {
        int temp=getRepatIndex(str,i);
        if(MaxIndex<temp)
        {
            MaxIndex=temp;
            index=i;
        }
    }
    for(int i=0;i<MaxIndex;i++)
    {
        cout<<str[i+index];
    }
    cout<<endl;
    return index;
}
int KMP::getRepatIndex(string str,int index)
{
    if(str.size()==1)
    {
        return -1;
    }
    int len=str.size()+1-index;
    vector<int> Next(len,0);
    Next[0]=-1;
    Next[1]=0;
    int pos=2;
    int cnt=0;
    int MAX=0;

    while(pos<len)
    {
        if(str[pos-1+index]==str[cnt+index])
        {
            Next[pos++]=++cnt;
        }else if(cnt>0)
        {
            cnt=Next[cnt];
        }else
        {
            Next[pos++]=0;
        }
        MAX=max(MAX,Next[pos-1]);

    }
    return MAX;
}

/***************************************************
*  �������ܣ�//�����ַ���S�����������������s��Ϊ�Ӵ�������ַ���
*  ����˵��
*       ��������� abracadabra
*       ��������� abracadabracadabra
*  �����Է�����ʱ�临�Ӷȣ�O(N)���ռ临�Ӷȣ�O(1)
*  ��Ŀ��Դ  ��
*  ���ߣ�guoliang zheng
*  ���ڣ�2018-08-17-17.00
***************************************************/
string KMP::answer(string str)
{
    if(str.size()<1) return str;
    if(str.size()==1) return str+str;
    if(str.size()==2)
    {
        if(str[0]==str[1])
        {
            return str+str[0];
        }else
        {
            return str+str;
        }
    }
    int Next=getNextanser(str);
    string result=str;
    for(int i=Next;i<str.size();i++)
    {
        result+=str[i];
    }
    return result;
}

int KMP::getNextanser(string str)
{
    if(str.size()==1) return -1;
    int len=str.size()+1;
    vector<int> Next(len,0);
    Next[0]=-1;
    Next[1]=0;
    int pos=2;
    int cnt=0;
    while(pos<len)
    {
        if(str[pos-1]==str[cnt])
        {
            Next[pos++]=++cnt;
        }else if(cnt>0)
        {
            cnt=Next[cnt];
        }else
        {
            Next[pos++]=0;
        }
    }
    return Next[pos-1];
}


/***************************************************
*  �������ܣ� �ַ��� ƥ��
*  ����˵��
*       ���������  string str  = "abcabcababaccc";
                    string match = "ababa";
*       ���������6
*  �����Է�����ʱ�临�Ӷȣ�O(N)���ռ临�Ӷȣ�O(1)
*  ��Ŀ��Դ  ��
*  ���ߣ�guoliang zheng
*  ���ڣ�2018-08-17-14.45
***************************************************/
int Sundy::getIndexOf(string str,string match)
{
    if(str.size()<1 || match.size()<1 || str.size()<match.size()) return -1;
    int R=match.size();
    int pos=0;
    for(int i=0;i<str.size();)
    {
        if(str[i]!=match[pos])
        {
            int k=match.size()-1;
            while(k>0 && match[k]!=str[R])
            {
                k--;
            }
            i=R-k;
            pos=0;
            R=i+match.size();
        }else
        {
            if(pos==match.size()-1)
            {
                return i-pos;
            }
            pos++;
            i++;
        }
    }
    return -1;
}

/***************************************************
*  �������ܣ�����һ����0��1��ɵ��ַ�����������ַ����������ͬ�Ӵ������Ȿ��Ҳ���Խ����0��1��ɵ��ַ���
*  ����˵��
*       ���������"01110010000101"
*       ���������"0000"
*  �����Է�����ʱ�临�Ӷȣ�O(N)���ռ临�Ӷȣ�O(1)
*  ��Ŀ��Դ  ��
*  ���ߣ�guoliang zheng
*  ���ڣ�2018-08-17-16.20
***************************************************/
string SameStr::get_MAX_SameStr(string str)
{
    if(str.size()<2) return str;
    int pos=0;
    int maxR=1;
    int curr=1;
    for(int i=1;i<str.size();i++)
    {
        if(str[i]==str[i-1])
        {
            curr++;
        }else
        {
            if(curr>maxR)
            {
                maxR=curr;
                pos=i-1;
            }
            curr=1;
        }
    }
    if(curr>maxR)
    {
        maxR=curr;
        pos=str.size()-1;
    }
    string result="";
    for(int i=0;i<maxR;i++)
    {
        result+=str[pos];
    }
    return result;
}



/***************************************************
*  �������ܣ�// ��������ַ�������
*  ����˵��
*       ���������str = "abc1234321ab";
*       ���������7
*  �����Է�����ʱ�临�Ӷȣ�O(N)���ռ临�Ӷȣ�O(N)
*  ��Ŀ��Դ  ��
*  ���ߣ�guoliang zheng
*  ���ڣ�2018-08-17-20.03
***************************************************/
int Manacher::maxLcpsLength(string str)
{
    if(str.size()<2) return 0;
    string new_str=ManacherString(str);
    int len=new_str.size();
    vector<int> pA(len,0);
    int pR=-1;
    int index=-1;
    int MAX=-2;
    int pos=0;
    for(int i=0;i<len;i++)
    {
         pA[i]=pR>i?min(pA[2*index-i],pR-i):1;
         while((i+pA[i] < len) && (i-pA[i] > -1))
         {
             if(new_str[i+pA[i]]==new_str[i-pA[i]])
             {
                 pA[i]++;
             }else
             {
                 break;
             }
         }
         if(i+pA[i] > pR)
         {
             pR=pA[i]+i;
             index=i;
         }
         if(pA[i]>MAX)
         {
             MAX=pA[i];
             pos=i;
         }

    }
    cout<<"pos "<<(int)pos/2<<endl;
    return MAX-1;
}

string Manacher::ManacherString(string  str)
{
    string result="";
    for(int i=0;i<str.size();i++)
    {
        result+='#';
        result+=str[i];
    }
    result+='#';
    return result;
}

/***************************************************
*  �������ܣ����������ַ�������һ�����ַ���ʹ����һ�������ַ�����
*  ����˵��
*       ���������str  = "abcd123321";
*       ���������        dcba
*  �����Է�����ʱ�临�Ӷȣ�O(N)���ռ临�Ӷȣ�O(N)
*  ��Ŀ��Դ  ��
*  ���ߣ�guoliang zheng
*  ���ڣ�2018-08-17-19.57
***************************************************/
string Manacher::shortestEnd(string str)
{
    if(str.size()<2) return str;
    string new_str=ManacherString(str);
    int len=new_str.size();
    vector<int> pA(len+1,0);
    pA[0]=-1;
    pA[1]=0;
    int pR=-1;
    int index=-1;
    int POS=0;
    for(int i=2;i<len;i++)
    {
        pA[i]=pR>i?min(pA[2*index-i],pR-i):1;
        while(i+pA[i]<len && i-pA[i]>-1)
        {
            if(new_str[i+pA[i]]!=new_str[i-pA[i]])
            {
                break;
            }
            pA[i]++;
        }
        if(i+pA[i]>pR)
        {
            pR=i+pA[i];
            index=i;
        }
        if(pR==len)
        {
            POS=i;
            break;
        }
    }
    string result="";
    for(int i=2*POS-len;i>0;i-=2)
    {
        result+=new_str[i];
    }
    return result;
}
