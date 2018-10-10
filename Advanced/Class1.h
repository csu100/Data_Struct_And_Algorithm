#ifndef CLASS1_H_INCLUDED
#define CLASS1_H_INCLUDED

#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>


using namespace std;

//  KMP Sundy  manacher

class KMP  // 字符串 匹配
{
public:
    int getIndexOf(string str,string match);
    int maxRepat(string str); // 求解字符串中最长的重复子串
    string answer(string str); //给定字符串S，输出含有连续两个s作为子串的最短字符串
private:
    vector<int> getNextArray(string match);
    int getRepatIndex(string str,int index);
    int getNextanser(string str);
};

class Sundy // 字符串 匹配
{
public:
    int getIndexOf(string str,string match);
};

class SameStr  // 输入一个由0和1组成的字符串，输出该字符串中最长的相同子串
{
public:
    string get_MAX_SameStr(string str);
};

class Manacher
{
public:
    int maxLcpsLength(string str); // 求最长回文字符串长度
    string shortestEnd(string str); // 将给定的字符串补偿一定的字符，使其变成一个回文字符串；

private:
    string  ManacherString(string str);
};









#endif // CLASS1_H_INCLUDED
