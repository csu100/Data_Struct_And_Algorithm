#include "For_Test.h"




vector<vector<int> > RandomMatrix::generateRandomMatrix(int row,int colum)
{
    vector<vector<int> > temp;
    if(row<0 || colum<0) return temp;
    vector<vector<int> > result(row,vector<int>(colum,0));
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            result[i][j]=rand()%100;
            printf("%3d ",result[i][j]);
        }
        printf("\n");
    }
    return result;
}

vector<int> RandomMatrix::generateRandomArray(int length)
{
    vector<int> temp;
    if(length<1) return temp;
    vector<int> result(length,0);
    for(int i=0;i<length;i++)
    {
        result[i]=rand()%100;
        printf("%3d ",result[i]);
    }
    printf("\n");
    return result;
}

vector<int> RandomMatrix::arr_to_vec(int arr[],int len)
{
    vector<int> result;
    if(arr==NULL || len<1) return result;
    for(int i=0;i<len;i++)
    {
        result.push_back(arr[i]);
    }
    return result;
}


