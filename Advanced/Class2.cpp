#include "Class2.h"


/***************************************************
*  �������ܣ����ɴ������ֵ����
*  ����˵��
*       ���������num=4,3,5,4,3,3,6,7��w=3;
*       ���������5,5,5,4,6,7
*  �����Է�����ʱ�临�Ӷȣ�O(N)���ռ临�Ӷȣ�O(N)
*  ��Ŀ��Դ  ��
*  ���ߣ�guoliang zheng
*  ���ڣ�2018-08-17-20.18
***************************************************/
vector<int> MAX_WINDOW::get_MAX_Window(vector<int> num,int w)
{
    if(num.size()<1 || num.size()<w)
    {
        vector<int> res;
        return res;
    }
    vector<int> res;
    deque<int> Q;
    for(int i=0;i<num.size();i++)
    {
        while(!Q.empty() && num[Q.back()]<=num[i])
        {
            Q.pop_back();
        }
        Q.push_back(i);
        if(i-Q.front()>=w)
        {
            Q.pop_front();
        }
        if(i>=w-1)
        {
            res.push_back(num[Q.front()]);
        }
    }
    return res;
}

/***************************************************
*  �������ܣ����ֵ��ȥ��СֵС�ڻ����num������������
*  ����˵��
*       ���������
*       ���������
*  �����Է�����ʱ�临�Ӷȣ�O(N)���ռ临�Ӷȣ�O(N)
*  ��Ŀ��Դ  ��
*  ���ߣ�guoliang zheng
*  ���ڣ�2018-08-17-20.18
***************************************************/
int SubNum::get_SubNum(vector<int> num,int aim)   // ���ֵ��ȥ��СֵС�ڻ����num������������
{
    if(num.size()<1) return 0;
    deque<int> Qmin;
    deque<int> Qmax;
    int start=0;
    int ends=0;
    int res=0;
    while(start<num.size())
    {
        while(ends<num.size())
        {
            while(!Qmin.empty() && num[Qmin.back()]>=num[ends])
            {
                Qmin.pop_back();
            }
            Qmin.push_back(ends);
            while(!Qmax.empty() && num[Qmax.back()]<=num[ends])
            {
                Qmax.pop_back();
            }
            Qmax.push_back(ends);
            if(num[Qmax.front()]-num[Qmin.front()]>aim)
            {
                break;
            }
            ends++;
        }
        if(Qmin.front()==start)
        {
            Qmin.pop_front();
        }
        if(Qmax.front()==start)
        {
            Qmax.pop_front();
        }
        res+=ends-start;
        start++;
    }
    return res;
}



int MaxRec::get_maxRecSize(vector<vector<int>  > Map)
{
    if(Map.size()<1) return 0;
    int colum=Map[0].size();
    vector<int> height(colum,0);
    int maxRec=0;
    for(int i=0;i<Map.size();i++)
    {
        for(int j=0;j<Map[i].size();j++)
        {
            height[j]=Map[i][j]>0?height[j]+1:0;
        }
        maxRec=max(maxRec,maxRecFromBottom(height));
    }
    return maxRec;
}

int MaxRec::maxRecFromBottom(vector<int> height)
{
    if(height.size()<1) return 0;
    stack<int> S;
    int maxRec=0;

    for(int i=0;i<height.size();i++)
    {
        while(!S.empty() && height[S.top()]>=height[i])
        {
            int j=S.top();
            S.pop();
            int k=S.empty()?-1:S.top();
            maxRec=max(maxRec,(i-k-1)*height[j]);
        }
        S.push(i);
    }
    cout<<"maxRec1 "<<maxRec<<" ";
    while(!S.empty())
    {
        int j=S.top();
        S.pop();
        int k=S.empty()?-1:S.top();
        int currA=(height.size()-k-1)*height[j];
        maxRec=max(maxRec,currA);
    }
    cout<<"maxRec "<<maxRec<<endl;
    return maxRec;
}



