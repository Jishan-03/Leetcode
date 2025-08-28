#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int singleNumber(vector<int> &nums)
{   int store=0;
    for(int i=0;i<nums.size();i++){
        store= nums[i]^store;
    }

    return store;
}
int main()
{
    vector<int> nums{2, 2, 1};
    cout<<singleNumber(nums);
    return 0;
}