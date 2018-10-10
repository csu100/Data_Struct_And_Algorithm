#ifndef CLASS5_H_INCLUDED
#define CLASS5_H_INCLUDED

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

// 2
class RandomPool   // 设计RandomPool 结构，等概率随机返回结构中的一个数 // 2
{
public:
    RandomPool()
    {
        str_map.clear();
        int_map.clear();
        size=0;
    }
    ~RandomPool()
    {
        str_map.clear();
        int_map.clear();
        size=0;
    }
    void Insert(string key);
    void Delete(string key);
    string GetRandom();
    void Print_Random();
private:
    map<string,int> str_map;
    map<int,string> int_map;
    int size;
};

// 5
class IsLands  // 求岛屿数量 //5
{
public:
    int LandsNumber(vector<vector<int> >& land);
private:
    void LandsNumber(vector<vector<int> >& land,int x,int y);
};


class Class5_N6
{
private:
    vector<int> _size;
    vector<int> _id;
    int _count;
public:
    Class5_N6(int x)
    {
        _count=x;
        for(int i=0;i<x;i++)
        {
            _size.push_back(1);
            _id.push_back(i);
        }
    }
    int find_(int p);
    void union_(int p,int q);
    void print_set();
};

















#endif // CLASS5_H_INCLUDED
