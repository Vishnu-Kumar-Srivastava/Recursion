//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>&stk,int elm)
{
    if(stk.empty()|| stk.top()>elm)
    {
        stk.push(elm);
        return;
    }

    int val= stk.top();
    stk.pop();
    insert(stk,elm);
    insert(stk,val);

}
void sortt(stack<int>&stk)
{
    if(stk.size()==1)
    return;
    int elm = stk.top();
    stk.pop();
    sortt(stk);
    insert(stk,elm);
}
int main()
{
    stack<int>stk;
    for(int i=0;i<5;i++)
    {
        stk.push(i);
    }
    sortt(stk);
    for(int i=0;i<5;i++)
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
}