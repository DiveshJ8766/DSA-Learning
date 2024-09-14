#include <iostream>
#include <climits>
using namespace std;

//* with making negative call
int cutIntoSegments1(int n,int x,int y,int z){
    //* base case
    if(n == 0)
        return 0;

    //* base case
    if(n < 0){
        return INT_MIN;
    }

    int ans1 = cutIntoSegments1(n-x,x,y,z)+1;
    int ans2 = cutIntoSegments1(n-y,x,y,z)+1;
    int ans3 = cutIntoSegments1(n-z,x,y,z)+1;

    //* return max of all
    return max(ans1,max(ans2,ans3));

}

//* without making negative call
int cutIntoSegments(int n,int x,int y,int z){
    //* base case
    if(n == 0)
        return 0;

    //* dont make negative call
    int a = INT_MIN;
    if(n-x >= 0){
        a = 1 + cutIntoSegments(n-x,x,y,z);
    }

    int b = INT_MIN;
    if(n-y >= 0){
        b = 1 + cutIntoSegments(n-y,x,y,z);
    }

    int c = INT_MIN;
    if(n-z >= 0){
        c = 1 + cutIntoSegments(n-z,x,y,z);
    }

//* return max of all
    return max(a,max(b,c));
}

int main(){

    int n = 7;

    int x=5,y=2,z=2;

    // int ans = cutIntoSegments(n,x,y,z);
    int ans = cutIntoSegments1(n,x,y,z);


    if(ans < 0)
        ans = 0;
    cout << ans << endl;

    return 0;
}