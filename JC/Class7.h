#ifndef CLASS7_H_INCLUDED
#define CLASS7_H_INCLUDED


#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;


// 1-3
struct TrieNode
{
    int path;
    int ends;
    TrieNode* next[26];
    TrieNode()
    {
        path=0;
        ends=0;
        for(int i=0;i<26;i++)
        {
            next[i]=0;
        }
    }
};

class TrieTree  // 前缀树的一系列问题 // 1-3;
{
public:

    TrieTree()
    {}
    ~TrieTree()
    {
        for(int i=0;i<_vec_nod.size();i++)
        {
            delete _vec_nod[i];
        }
    }
    void Insert(string word);
    int Search(string word);
    int preFixNumber(string word);
    void Delete(string word);
    vector<string> get_ALL_word(void);

private:
    vector<TrieNode*> _vec_nod;
    TrieNode _root;
    TrieNode* new_node()
    {
        TrieNode* node=new TrieNode();
        _vec_nod.push_back(node);
        return node;
    }
    void get_ALL_word(vector<string>& result,string& word,TrieNode* root);
};


// 4
class Less_Money  // 金条切割问题 // 4
{
public:
   int get_Less_Money(vector<int>& nums);

};

// 5
class Cost_Profit  // 获得的最大钱数 //5
{
public:
    int get_Most_Money(vector<int>& costs,vector<int>& profits,int k,int W);

};

// 6
class MadianQuick  // 一个数据流中，随时可以取得中位数 // 6
{
public:
    void Insert(int value);
    double get_Media();
private:
    priority_queue<int,vector<int>,less<int> > MAX_Q; //存放小数;
    priority_queue<int,vector<int>,greater<int> > MIN_Q; // 存放大数；
};

// 7
class LowestLexigrahy  // 最小字典序 // 7
{
public:
    string LowestString(vector<string> str);
};

// 8
class BestArrage  // 最多宣讲场数 // 8
{
public:
    int get_BestArrage(vector<int> times,int starts);
};


























#endif // CLASS7_H_INCLUDED
