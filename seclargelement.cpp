#include <bits/stdc++.h>
using namespace std;
int seclarg(vector<int> &arr){
    int n = arr.size();
    int largest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    int secondlarg = -1;
    for(int i=0;i<n;i++){
        if(secondlarg<arr[i] && arr[i]<largest){
            secondlarg = arr[i];
        }
    }
    return secondlarg;
}

int main(){
    int n; 
    cout<<"Enter the value of size of array "<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a = seclarg(arr);
    cout<<"Second largest element in an array is "<<a<<endl;
    return 0;

}