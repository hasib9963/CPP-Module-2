#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p = new int[5]; // declaration  of heap or dynamic array in dymanic memory
    // p is variable name int is type of data
    // dynamic or heap array initialize kora jay na. orthat sathe valu dewa jay na
    // value input nite hoi
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}