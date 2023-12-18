//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
void insertt(vector<int>&arr,int elm)
{
    //base condition
    if(arr.size()==0|| arr[arr.size()-1]<=elm)
    {
        arr.push_back(elm);
        return;

    }
    int val;
    if(arr[arr.size()-1>elm])
    {
        val= arr[arr.size()-1];
        arr.pop_back();
        insertt(arr,elm);
        insertt(arr,val);
    }
}

void recursionn(vector<int>&arr)
{
    //base condition
    if(arr.size()==1)
    return;

    //hypothesis
    int elm= arr[arr.size()-1];
    arr.pop_back();
    recursionn(arr);
    insertt(arr,elm);
}
int main()
{
    vector<int> arr={1,2,4,9,5,-1};
    recursionn(arr);
    for(auto elm: arr)
    {
        cout<<elm<<" ";
    }
}