#ifndef CLASS1_H_INCLUDED
#define CLASS1_H_INCLUDED

#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>


using namespace std;

//  KMP Sundy  manacher

class KMP  // �ַ��� ƥ��
{
public:
    int getIndexOf(string str,string match);
    int maxRepat(string str); // ����ַ���������ظ��Ӵ�
    string answer(string str); //�����ַ���S�����������������s��Ϊ�Ӵ�������ַ���
private:
    vector<int> getNextArray(string match);
    int getRepatIndex(string str,int index);
    int getNextanser(string str);
};

class Sundy // �ַ��� ƥ��
{
public:
    int getIndexOf(string str,string match);
};

class SameStr  // ����һ����0��1��ɵ��ַ�����������ַ����������ͬ�Ӵ�
{
public:
    string get_MAX_SameStr(string str);
};

class Manacher
{
public:
    int maxLcpsLength(string str); // ��������ַ�������
    string shortestEnd(string str); // ���������ַ�������һ�����ַ���ʹ����һ�������ַ�����

private:
    string  ManacherString(string str);
};









#endif // CLASS1_H_INCLUDED
