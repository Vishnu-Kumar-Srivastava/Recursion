//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
int factt(int n)
{
    if(n==0)
    return 1;
    return n*factt(n-1);

}
int main()
{
    cout<<factt(6);
}
