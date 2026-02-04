#include<bits/stdc++.h>
using namespace std;
class solution {
public:
void rearrange(vector<int>&arr){
    sort(arr.begin(),arr.end());
    int n =sizeof(arr);
    reverse(arr.begin()+n/2,arr.end());

}

};
int main(){
    vector<int> arr={5,2,9,1,6,3};
    
    solution sol;
    sol.rearrange(arr);
    for(int x: arr)
    cout<<x<<"";
    return 0;

}