#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;


vector<int> plusOne(vector<int> &digits)
{
    

    for(int i=digits.size()-1;i>=0;i--){
        if(digits[i]!=9){
            digits[i]++;
            return digits;
        }
        else{
            digits[i]=0;
        }

    }

    if(digits[0]==0){
        vector<int>ans(digits.size()+1,0);
        ans[0]=1;
        return ans;
    }
    

}

int main()
{
    vector<int> digits{9,9};
    vector<int> ans;

     ans= plusOne(digits);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> plusOne(vector<int> &digits)
// {
//     for(int i = digits.size()-1; i >= 0; i--) {
//         if(digits[i] != 9) {
//             digits[i]++;
//             return digits;   // directly return after update
//         } else {
//             digits[i] = 0;
//         }
//     }

//     // If all were 9
//     vector<int> ans(digits.size()+1, 0);
//     ans[0] = 1;
//     return ans;
// }

// int main()
// {
//     vector<int> digits{9,9};
//     vector<int> ans = plusOne(digits);

//     // print without spaces (as a number)
//     for(int i = 0; i < ans.size(); i++) {
//         cout << ans[i];
//     }
//     cout << endl;

//     return 0;
// }
