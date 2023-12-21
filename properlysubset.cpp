//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
vector<vector<vector<int>>> t;
// int solve(vector<int> arr,vector<int> op,int l,int r)
// {
//     if(arr.size()==0)
//     {
//         int prod=1;
//         res.push_back(op);
//         if(op.size()==0)
//         return INT_MIN;
//         for(auto elm: op)
//         {
//             prod=prod*elm;
//         }
//         // cout<<"product si: "<<prod<<endl;
//         return prod;
//     }
//     vector<int>op1=op;
//     vector<int>op2=op;
//     op2.push_back(arr[0]);
//     arr.erase(arr.begin()+0);
//     if(r==1)
//     {
//         int temp = 1;
//         res.push_back(op);
//         for(auto elm: op)
//         {
//             temp=temp*elm;
//         }
//         int y= solve(arr,op2,l,1);
//         return max(y,temp);
//     }
    
//     int x=solve(arr,op1,1,r);
//     int y=solve(arr,op2,l,1);
//     // cout<<"x and y are: "<<x<<" "<<y<<endl;
//     return max(x,y);

// }
int solve(vector<int> arr,vector<int> op,int l,int r)
{
    
    int n= arr.size();
    if(arr.size()==0)
    {
        int prod=1;
        res.push_back(op);
        if(op.size()==0)
        return INT_MIN;
        for(auto elm: op)
        {
            prod=prod*elm;
        }
        // cout<<"product si: "<<prod<<endl;
        return prod;
    }
    if(t[arr.size()][l][r]!=-1)
    {
        cout<<"ye kabhi run hua??"<<endl;
        return t[arr.size()][l][r];
    }

    vector<int>op1=op;
    vector<int>op2=op;
    op2.push_back(arr[0]);
    arr.erase(arr.begin()+0);
    if(r==1)
    {
        int temp = 1;
        res.push_back(op);
        for(auto elm: op)
        {
            temp=temp*elm;
        }
        int y= solve(arr,op2,l,1);
        return t[n][l][r]= max(y,temp);
    }
    
    int x=solve(arr,op1,1,r);
    int y=solve(arr,op2,l,1);
    // cout<<"x and y are: "<<x<<" "<<y<<endl;
    return t[n][l][r]=max(x,y);

}
int main()
{
    vector<int>arr={2,-5,-2,-4,3};
    t.resize(arr.size()+1,vector<vector<int>>(3,vector<int>(3, -1)));
    cout<<solve(arr,{},0,0)<<endl;
    // for(auto elm: res)
    // {
    //     for(auto val : elm)
    //     {
    //         cout<<val<<" ";
    //     }
    //     cout<<endl;
    // }
    
}










//leetcode maximum product subarray
//recursive approach: 
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        return solve(nums,{},0,0);
    }
vector<vector<int>> res;
int solve(vector<int> arr,vector<int> op,int l,int r)
{
    if(arr.size()==0)
    {
        int prod=1;
        res.push_back(op);
        if(op.size()==0)
        return INT_MIN;
        for(auto elm: op)
        {
            prod=prod*elm;
        }
        // cout<<"product si: "<<prod<<endl;
        return prod;
    }
    vector<int>op1=op;
    vector<int>op2=op;
    op2.push_back(arr[0]);
    arr.erase(arr.begin()+0);
    if(r==1)
    {
        int temp = 1;
        res.push_back(op);
        for(auto elm: op)
        {
            temp=temp*elm;
        }
        int y= solve(arr,op2,l,1);
        return max(y,temp);
    }
    
    int x=solve(arr,op1,1,r);
    int y=solve(arr,op2,l,1);
    // cout<<"x and y are: "<<x<<" "<<y<<endl;
    return max(x,y);

}

};



//Memoization