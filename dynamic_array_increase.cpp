#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int *b = new int[7];
    for(int i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    b[5]=60;
    b[6]=70;
    for(int i=0;i<7;i++)
    {
        cout<<b[i]<<" ";
    }
    // delete a array
    delete[] a; // delete is a keyword that delete array from heap memory. [] indicitace delete full array. absent [] delete only first element
    return 0;
}