//logic 1
/*
#include <bits/stdc++.h>
using namespace std;
void revrseArray(vector<int>& arr) {
    reverse(arr.begin(), arr.end());
}
int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    // reverse the array
    revrseArray(arr1);
    // print the reversed array
    for (int x : arr1) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
    

*/

//logic 2
#include<bits/stdc++.h>
using namespace std;
void revrseArray(vector<int>& arr){
    int p1 = 0;
    int p2 = arr.size()-1;
    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }
}
int main(){
vector<int> arr1 = {1, 2, 3, 4, 5, 7};
revrseArray(arr1);
for (int x : arr1) {
        cout << x << " ";
    }
    cout << endl;
    return 0;

}
//logic 3
#include<bits/stdc++.h>
using namespace std;


int main(){

}