//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;

void solve(int s,int h,int d,int n)
{
    if(n==1)
    {
        cout<<"moving plate "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    solve(s,d,h,n-1);
    cout<<"moving plate "<<n<<" from "<<s<<" to "<<d<<endl;
    solve(h,s,d,n-1);


}
int main()
{
    int n;
    cin>>n;
    int s=1;
    int h=2;
    int d=3;
    solve(s,h,d,n);

}