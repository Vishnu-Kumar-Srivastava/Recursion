//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;

// void solve(string ip,string op)
// {
//     if(ip.length()==0)
//     {
//         cout<<op<<endl;
//         return;
//     }
//     string op1 =op;
//     string op2 =op;
//     op2.push_back(ip[0]);
//     ip.erase(ip.begin()+0);
//     solve(ip,op1);
//     solve(ip,op2);
// }
void solve(vector<int>& ip,vector<int>& op)
{
    if(ip.size()==0)
    {
        for(auto elm: op)
        {
            cout<<elm<<" ";
        }
        cout<<endl;
        return;
    }
    vector<int> op1 =op;
    vector<int> op2 =op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
}



int main()
{
    vector<int> ip ={1,2,3};
    vector<int> op ={};
    solve(ip,op);

}