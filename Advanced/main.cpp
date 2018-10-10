#include <iostream>
#include <string>
#include <vector>
#include "Class1.h"
#include "Class2.h"
#include "For_test.h"
#include "Class3.h"
#include <map>
#include "Class4.h"
#include <cstdio>


using namespace std;



int main()
{
//    SameStr ss;
//    string str="0000000000000000000";
//    cout<<ss.get_MAX_SameStr(str)<<endl;;
//    string str1="01110010000101";
//    cout<<ss.get_MAX_SameStr(str1)<<endl;;
    //string str="";
    //getline(cin,str);
//    char str[100];
//    gets(str);
//    cout<<str<<endl;

    //char str[100];
//    string str="";
//    scanf("%[^\n]",&str);// ¿Õ¸ñÄÜ¹»¶ÁÈ¡
//    printf("%s\n",str);

    char strings[100];
    scanf( "%[1234567890] ",strings);
    printf( "%s ",strings);



    ExpressionCompute ss;
    string exp=" (1 + 1 )";
    cout<<"str="<<exp<<endl;
    cout<<ss.getValue(exp)<<endl;

    return 0;
}


//int main()
//{
//    TreeNode a(1);
//    TreeNode b1(2);
//    TreeNode b2(3);
//    TreeNode c1(4);
//    TreeNode c2(5);
//    TreeNode c3(6);
//    TreeNode c4(7);
//    a.left=&b1;
//    a.right=&b2;
//    b1.left=&c1;
//    b1.right=&c2;
//    b2.left=&c3;
//    b2.right=&c4;
//
//    vector<int> res1;
//    vector<int> res2;
//
//    Morris mm;
//
//    res1=mm.MorrisPre(&a);
//    res2=mm.MorrisIn(&a);
//    for(int i=0;i<res1.size();i++)
//    {
//        cout<<res1[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<res2.size();i++)
//    {
//        cout<<res2[i]<<" ";
//    }
//    cout<<endl;
//
//
//    return 0;
//}


//int main()
//{
//    vector<vector<int> > Map;
//    int A[][4]={{1,0,1,1},{1,1,1,1},{1,1,1,0}};
//    int len=sizeof(A)/sizeof(*A);
//    for(int i=0;i<len;i++)
//    {
//        Map.push_back(vector<int>());
//        for(int j=0;j<4;j++)
//        {
//            Map[i].push_back(A[i][j]);
//        }
//    }
//    MaxRec mm;
//    cout<<mm.get_maxRecSize(Map);
//
//    return 0;
//}


//int main()
//{
//    vector<int> num;
//    vector<int> Random rr;
//
//    int A[]={4,3,5,4,3,3,6,7};
//    int len=sizeof(A)/sizeof(*A);
//    int w=3;
//    num=rr.get_ARRY(A,len);
//    vector<int> result;
//    MAX_WINDOW ss;
//    result=ss.get_MAX_Window(num,w);
//    for(int i=0;i<result.size();i++)
//    {
//        cout<<result[i]<<" ";
//    }
//    cout<<endl;
//
//
//    return 0;
//}





//int main()
//{
//    KMP kk;
//    string str = "abcabcababaccc";
//	string match = "ababa";
//
//    cout<<kk.getIndexOf(str,match)<<endl;
//    Sundy ss;
//    cout<<ss.getIndexOf(str,match)<<endl;
//
//    string stt="abcdefadef";
//    cout<<kk.maxRepat(stt)<<endl;
//
//    SameStr ssa;
//    string srr="aaaaaaaaabbbbcccaaassscvvv";
//    cout<<ssa.get_MAX_SameStr(srr)<<endl;
//
//    string test1="a";
//    cout<<kk.answer(test1)<<endl;
//    string test2="aa";
//    cout<<kk.answer(test2)<<endl;
//    string test3="ab";
//    cout<<kk.answer(test3)<<endl;
//    string test4="abcdabcd";
//    cout<<kk.answer(test4)<<endl;
//    string test5="abracadabra";
//    cout<<kk.answer(test5)<<endl;
//
//    Manacher mm;
//    string strm = "abc1234321ab";
//    cout<<mm.maxLcpsLength(strm)<<endl;
//
//    string strm1="abcd123321";
//    cout<<mm.shortestEnd(strm1)<<endl;
//    cout << "Hello world!" << endl;
//    return 0;
//}
