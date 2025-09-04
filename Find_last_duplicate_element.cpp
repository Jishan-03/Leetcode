// //given an array consisting of integers . return the last value that is repeating in this array. If no value is repeated then return -1.


//Using extra space 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int repeat(vector<int>&arr){
//     sort(arr.begin(),arr.end());
//     vector<int>ans;
//     for(int i=0;i<arr.size()-1;i++){
//         if(arr[i]==arr[i+1]){
//             ans.push_back(arr[i]);
//         }
//     }
//     if(ans.size()!=0){
//         return ans[ans.size()-1];
//     }
//     else{
//         return -1;
//     }
// }

// // vector<int> repeat(vector<int>&arr){
// //     sort(arr.begin(),arr.end());
// //     vector<int>ans;
// //     for(int i=0;i<arr.size()-1;i++){
// //         if(arr[i]==arr[i+1]){
// //             ans.push_back(arr[i]);
// //         }
// //     }
// //     return ans;
// // }

// int main()
// {
//     vector<int>arr={1,5,3,4,6,3,4};
//     // vector<int>v=repeat(arr);

//     // for(int i=0;i<v.size();i++){
//     //     cout<<v[i]<<" ";
//     // }

//     cout<<repeat(arr);
    

// return 0;
// }


// Using hashing

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int repeat(vector<int>& arr) {
    unordered_map<int,int> freq;
    
    // Count frequencies
    for(int num : arr) {
        freq[num]++;
    }

    // Traverse from end to find the last repeating element
    for(int i = arr.size()-1; i >= 0; i--) {
        if(freq[arr[i]] > 1) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 5, 3, 4, 6, 3, 4};
    cout << repeat(arr);
    return 0;
}
