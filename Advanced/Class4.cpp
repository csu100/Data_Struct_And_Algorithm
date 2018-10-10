#include "Class4.h"



/***************************************************
*  函数功能： 公式的计算
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(N)，空间复杂度：O(N)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-28-21.53
***************************************************/
int ExpressionCompute::getValue(string str)
{
    if(str.size()<1) return 0;
    vector<int> res=getValue(str,0);
    return res[0];
}

vector<int> ExpressionCompute::getValue(string str,int i)
{
    deque<string>  data;
    vector<int> bra(2,0);
    string number="";
    while(i<str.size() && str[i]!=')')
    {
        if(str[i]==' ')
        {
            i++;continue;
        }
        if(str[i]>='0' && str[i]<='9')
        {
             number+=str[i++];
        }else if(str[i]!='(')
        {
             addNum(data,number);
             string temp="";
             switch(str[i++])
             {
                 case '+':temp="+";break;
                 case '-':temp="-";break;
                 case '*':temp="*";break;
                 case '/':temp="/";break;
             }
             data.push_back(temp);
             number="";
        }else
        {
            bra=getValue(str,i+1);
            number=to_string(bra[0]);
            i=bra[1]+1;
        }
    }
    addNum(data,number);
    vector<int> res(2,0);
    res[0]=getNum(data);
    res[1]=i;
    return res;
}

void ExpressionCompute::addNum(deque<string>&  data,string num)
{
    int number=string_to_int(num);
    if(!data.empty())
    {
        int cur=0;
        string top=data.back();
        data.pop_back();
        if(top=="+" || top=="-")
        {
            data.push_back(top);
        }else
        {
            cur=string_to_int(data.back());
            data.pop_back();
            number= (top=="*"?(cur * number):(cur / number));
        }
    }
    data.push_back(to_string(number));
}

int ExpressionCompute::string_to_int(string str)
{
    int number=0;
    int i=0;
    bool flag=true;
    if(str[i]=='-')
    {
       i++;
       flag=false;
    }
    for(;i<str.size();i++)
    {
        number=number*10+str[i]-'0';
    }
    return flag?number:0-number;
}

int  ExpressionCompute::getNum(deque<string>& data)
{
    int res=0;
    bool add=true;
    int num=0;
    string cur="";
    while(!data.empty())
    {
        cur=data.front();
        data.pop_front();
        if(cur=="+")
        {
            add=true;
        }else if(cur=="-")
        {
            add=false;
        }else
        {
            num=string_to_int(cur);
            res+=add?num:(-num);
        }
    }
    return res;
}




