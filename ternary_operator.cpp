#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ternary operator use as alternative of simple if else
    // for example even odd;
    int x;
    cin>>x;
    // if(x%2==0)
    // cout<<"Even";
    // else
    // cout<<"Odd"; this is simple if else

    x%2==0? cout<<"even" : cout<<"Odd"; // this is ternary opeartor
    return 0;
}