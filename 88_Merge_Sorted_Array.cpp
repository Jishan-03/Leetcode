#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        }
        else{
            ans.push_back(nums2[j]);
            j++;
        }
    }

    while (i<m)
    {
        ans.push_back(nums1[i]);
        i++;
    }
    while (j<n)
    {
        ans.push_back(nums2[j]);
        j++;
    }
    
    for(int x:ans){
        cout<<x<<" ";
    }
    

    
        
    }
int main()
{
    vector<int> nums1={1,2,3};
    vector<int> nums2={2,5,6};
    int m=nums1.size(),n=nums2.size();    
    merge(nums1, m, nums2,  n);
    

return 0;
}   