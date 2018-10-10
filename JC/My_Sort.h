#ifndef MY_SORT_H_INCLUDED
#define MY_SORT_H_INCLUDED

#include <vector>
using namespace std;

class MY_SORT
{
public:
    void MaoPao_sort(vector<int>& nums);
    void Insert_sort(vector<int>& nums);
    void Select_sort(vector<int>& nums);

    void Guibing_sort(vector<int>& nums);
    void Quick_sort(vector<int>& nums);
    void Heap_sort(vector<int>& nums);


private:
    void Guibing_sort(vector<int>& nums,int L,int R);
    void Merge_sort(vector<int>& nums,int L,int mid,int R);

    void Quick_sort(vector<int>& nums,int L,int R);
    vector<int> Partiton(vector<int>& nums,int L,int R);

    void Heap_Insert(vector<int>& nums,int index);
    void HeapFiy(vector<int>& nums,int index,int HeadSize);


};

#endif // MY_SORT_H_INCLUDED
