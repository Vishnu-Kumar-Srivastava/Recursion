//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
set<string>Set;

void solve(string ip, string op)
{
    if(ip.length()==0)
    {
        Set.insert(op);
        return;
    }
    string op1=op;
    string op2=op;
    op1.push_back(ip[0]);
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);

}
int main()
{
    string ip= "a";
    solve(ip,"");
    for(auto elm: Set)
    {
        cout<<elm<<endl;
    }
}