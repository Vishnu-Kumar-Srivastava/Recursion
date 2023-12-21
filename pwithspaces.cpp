//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
set<vector<char>>Set;
void solve(vector<char> ip,int i)
{
    if(i>=ip.size())
    {
        Set.insert(ip);
        return;
    }
    vector<char> op=ip;
    op.insert(op.begin()+i,'_');
    solve(ip,i+1);
    solve(op,i+2);

}
int main()
{
    vector<char> ip ={'A','B','C','D'};
    solve(ip,1);
    for(auto elm : Set)
    {
        for(auto val : elm)
        {
            cout<<val;
        }
        cout<<endl;
    }
}