#include <bits/stdc++.h>
using namespace std;

bool haszero(int x){
    while(x>0){
        if(x%10==0){
            return true;
        }
        x=x/10;
    }
    return false;
}
vector<int> getNoZeroIntegers(int n)
{
    vector <int>ans;
    for(int a=1;a<n;a++){
        int b=n-a;
        if(!haszero(a)&&!haszero(b)){
            ans.push_back(a);
            ans.push_back(b);
            break;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    vector<int>v;
    v=getNoZeroIntegers(n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}