//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;

void printsb(int st,vector<int> arr)
{
    if(st==arr.size()-1)
    {
        cout<<arr[st-1];
        return;
    }
    string sb= "";
    for(int i=st;i<arr.size();i++)
    {
        sb=sb+to_string(arr[i]);
        cout<<sb<<endl;
        printsb(st+1,arr);
    }
}
int main()
{
    vector<int> arr= {1,2,3};
    printsb(0,arr);
}