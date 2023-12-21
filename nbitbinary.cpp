//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
set<string>Set;

void solve(int one,int zero, int n,string ip)
{
    if(n==0)
    {
        cout<<one<<" "<<zero<<" ye tha mamla aur ip hai: "<<ip<<endl;
        Set.insert(ip);
        return;
    }
    string op1 =ip;
    op1.push_back('1');
    solve(one+1,zero,n-1,op1);
    string op2=ip;
    if(one>zero)
    {
        op2.push_back('0');
        solve(one,zero+1,n-1,op2);
    }
}
int main()
{
    solve(0,0,3,"");
    for(auto elm: Set)
    {
        cout<<elm<<endl;
    }
}