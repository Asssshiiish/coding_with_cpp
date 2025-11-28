#include <bits/stdc++.h>
using namespace std;
int  linear(vector<int> &nums,int target){
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}


int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;

    int a = linear(nums,target);
    cout<<a;
    return 0;
}