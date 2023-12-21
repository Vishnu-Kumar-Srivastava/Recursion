//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>Set;

void solve(vector<int> ip,vector<int> op)
{
    if(ip.size()==0)
    {
        Set.push_back(op);
        return;
    }
    vector<int> op1= op;
    vector<int> op2= op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
}
int main()
{
    vector<int> ip= {1,2,3};
    vector<int> op;
    solve(ip,op);
    cout<<"hello";
    for(auto elm: Set)
    {
        for(auto val : elm)
        {
            cout<<val;
        }
        cout<<" ";
    }
}