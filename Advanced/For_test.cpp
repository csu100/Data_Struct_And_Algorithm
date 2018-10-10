#include "For_test.h"


vector<int> Random::get_ARRY(int A[],int len)
{
    if(A==NULL || len<1)
    {
        vector<int> res;
        return res;
    }
    vector<int> res(len,0);
    for(int i=0;i<len;i++)
    {
        res[i]=A[i];
    }
    return res;
}
vector<int> Random::get_Random_ARRY(int len)
{
    if(len<1)
    {
        vector<int> res;
        return res;
    }
    vector<int> res(len,0);
    for(int i=0;i<len;i++)
    {
        res[i]=rand()%100;
    }
    return res;
}


