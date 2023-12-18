//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;

void insertbot(stack<int>&stk,int val)
{
    //base case
    if(stk.empty())
    {
        stk.push(val);
        return;
    }
    int elm=stk.top();
    stk.pop();
    insertbot(stk,val);
    stk.push(elm);
    return;
}
void stkrev(stack<int>&stk)
{
    //base case
    if(stk.size()==1)
    return;


    //hypothesis
    int temp=stk.top();
    stk.pop();
    stkrev(stk);
    insertbot(stk,temp);
    return;


}

int main()
{
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);

    
    int n= stk.size();
    stkrev(stk);
    for(int i=0;i<n;i++)
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }


    
}