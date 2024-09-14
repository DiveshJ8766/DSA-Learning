#include <iostream>
#include <vector>
#include <climits>
using namespace std;

//* from 0 to 5
int minimumElement(vector<int>& coins,int& target,int sum){

    //* base case (target reached)
    if(sum == target){
        return 0;
    }

    //* base case (negative target)
    if(sum > target){
        return INT_MAX;
    }

    //* Mini Element
    int mini = INT_MAX;

    //* check for every element
    for(int i =0;i < coins.size();i++){
        int ans = minimumElement(coins,target,sum+coins[i]);
        if(ans != INT_MAX)
            mini = min(mini,ans+1);
    }

    return mini;
}

//* from 5 to 0
int minimumElementTarget(vector<int>& coins,int target){

    //* base case (target reached)
    if(target == 0){
        return 0;
    }

    //* base case (negative target)
    if(target < 0){
        return INT_MAX;
    }

    //* Mini Element
    int mini = INT_MAX;

    //* check for every element
    for(int i =0;i < coins.size();i++){
        int ans = minimumElementTarget(coins,target-coins[i]);
        if(ans != INT_MAX)
            mini = min(mini,ans+1);
    }

    return mini;
}

int  main(){

    vector<int> coins = {1,2,3};

    int target  = 7;

    int ans = minimumElementTarget(coins,target);
    cout<<"Minimum Elements : "<<ans<<endl;

    int sum = 0;

    ans = minimumElement(coins,target, sum);
    cout<<"Minimum Elements : "<<ans<<endl;

    return 0;
}