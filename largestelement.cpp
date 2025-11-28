#include <bits/stdc++.h>
using namespace std;
int  largest(vector<int> &nums){
    int n = nums.size();
    int larg  = nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>larg){
                larg = nums[i];
            }
        }
     return larg;
    
}


int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    

    int a = largest(nums);
    cout<<"largest element in nums is "<< a;
    return 0;
}