#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void solve(vector<int>& arr,int index,int sum,int& maxi){

//* base case
    if(index >= arr.size()){
        maxi = max(maxi,sum);
        return;
    }

    //* Include
    solve(arr,index+2,sum+arr[index],maxi);

    //* exlcude
    solve(arr,index+1,sum,maxi);
}

int main(){

    vector<int> arr = {6,5,5,7,4};
    int index = 0;
    int sum = 0;
    int max = INT_MIN;

    solve(arr,index,sum,max);
    
    cout<<"Maximum : "<<max<<endl;

    return 0;
}