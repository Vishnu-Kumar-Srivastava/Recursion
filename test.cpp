//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;

// void printsb(int st,vector<int> arr)
// {
//     if(st==arr.size()-1)
//     {
//         cout<<arr[st-1];
//         return;
//     }
//     string sb= "";
//     for(int i=st;i<arr.size();i++)
//     {
//         sb=sb+to_string(arr[i]);
//         cout<<sb<<endl;
//         printsb(st+1,arr);
//     }
// }
int main()
{
    vector<int> arr1={3,4,2};

    for(int j=0;j<arr1.size();j++)
    {
        if(arr1[j]+1==2 || arr1[j]-1 == 2)
        {
            cout<<"The value of j is: "<<j<<endl;
            cout<<"arr[i is "<<2<<"  The array: "<<" ";
            for(auto elm: arr1)
            {
                cout<<elm<<" ";
            }
            cout<<endl;
            arr1.erase(arr1.begin()+j);
            j--;
        }
    }
}