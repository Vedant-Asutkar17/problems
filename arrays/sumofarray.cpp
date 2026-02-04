
//logic 1

/*#include<bits/stdc++.h>
using namespace std;
int SumArray(vector<int>&arr){
    int sum =0;
    for(int i=0;i<arr.size();i++){
        sum +=arr[i];
    }
    cout<< sum;
}
int main(){
    vector<int> arr1={1,2,3,4,5,6};
    SumArray(arr1);
    return 0;
    
}*/
//logic 2
#include<bits/stdc++.h>
using namespace std;
int SumArray(vector<int>&arr){
    return accumulate(arr.begin(),arr.end(),0);
}
int main(){
    vector<int> arr1={1,2,3,4,5,6};
    cout<<SumArray(arr1);
    
}