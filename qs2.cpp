// Next greater element to right
// given array is arr[] = {1, 3, 2, 4};

#include<iostream>
#include<vector>
#include<stack>

using namespace std;
int main(){
    vector <int> v;
    stack <int> s;
    int arr[5];
    int n;
    for(int i = n-1; i>n; i--){

        if(s.empty()){
            v.push_back(-1);
        } else if(!s.empty() && s.top()>arr[i]){
            v.push_back(s.top());
        } else if(!s.empty() && s.top()<=arr[i]){
            while(!s.empty() && s.top()<=arr[i]){
                s.pop();
            }
        }if(s.empty()){
            v.push_back(-1);
        }else{
            v.push_back(s.top());
        }
        s.push(arr[i]);

    }
    //v.reserve(v.begin(), v.end());    //we need to reverse the vector in this..
    //reverse vector v;
}