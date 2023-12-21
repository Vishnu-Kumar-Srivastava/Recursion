//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>arr,int k,int i)
{
    if(arr.size()==1)
    {
        cout<<arr[0];
        return;
    }
    
    // cout<<"i+k % arr.size:  "<<(i+k-1)%arr.size()<<endl;
    int er = (i+k-1)%arr.size();
    // cout<<"erased: "<<*arr.begin()+(i+k-1)%arr.size()<<endl;
    arr.erase(arr.begin()+er);

    solve(arr,k,er);
}
int main()
{

    int n=40;
    int k=7;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        arr.push_back(i+1);
    }
    solve(arr,k,0);

}