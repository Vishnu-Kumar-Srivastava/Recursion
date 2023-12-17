//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
void printt(int n)
{
    if(n==0)
    return ;
    printt(n-1);
    cout<<n<<" ";

}
int main()
{
    printt(5);
}
