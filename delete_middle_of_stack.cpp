//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;

void deletee(stack<int>&stk,int i)
{
    cout<<stk.size()<<" "<<i<<endl;
    
    if(i==1)
    {
        stk.pop();
        return;
    }
    cout<<"i is "<<i<<endl;
    int val=stk.top();
    stk.pop();
    deletee(stk,i-1);
    stk.push(val);
}
int main()
{
    stack<int>stk;
    for(int i=0;i<5;i++)
    {
        stk.push(i);
    }
    deletee(stk,3);
    int n= stk.size();
    for(int i=0;i<n;i++)
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
}