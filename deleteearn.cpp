//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;

// int deleteAndEarn(vector<int>& nums) {
//         return solve(nums,0);

// }
int solve(vector<int> arr, int i)
{
    //base condition 
    if(i>=arr.size()|| arr.size()==0)
    {
        return 0;
    }
    vector<int> arr1= arr;
    
            cout<<"i is: "<<i<<endl;
    for(int j=0;j<arr1.size();j++)
    {
        if(arr1[j]+1==arr[i] || arr1[j]-1 == arr[i])
        {
            cout<<"The value of j is: "<<j<<endl;
            cout<<"arr[i is "<<arr[i]<<"  The array: "<<" ";
            for(auto elm: arr1)
            {
                cout<<elm<<" ";
            }
            cout<<endl;
            arr1.erase(arr1.begin()+j);
            j--;
        }
    }
    arr.erase(arr.begin()+i);
    int x = solve(arr,i+1);
    int y = solve(arr1,i);
    return max(x,arr[i]+y);

}


int main()
{
    vector<int> nums={3,4,2};
    cout<<solve(nums,0);
}