#include <bits/stdc++.h>
using namespace std;
int SmallestElement(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[0];
}
int main(){
    vector<int>arr1={2,5,1,6,8};
    cout<<"smalllest element "<<SmallestElement(arr1);
    return 0;
}