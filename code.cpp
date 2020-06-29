#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k;
    vector<int>A,B,C;
    for(i=0;i<26;i++)
    {
        cin>>j;
        A.push_back(j);
    }
    string S;
    cin>>S;
    for(i=0;i<S.length();i++)
    {
        k=(int)(S[i]-97);
        B.push_back(k);
     C.push_back(A[B[i]]);
   }
cout<<*max_element(C.begin(),C.end())*C.size();
    return 0;
}
