#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findClosest(int x, int y, int z) {
    if(abs(x-z)<abs(y-z)){
        return 1;
    }
    else if(abs(x-z)>abs(y-z)){
        return 2;
    }
    else{
        return 0;
    }
        
}





int main()
{
cout<<findClosest(1,5,3);
return 0;
}