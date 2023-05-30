// we take same example for left SMALLER
// Next smaller element to left
// given array is arr[] = {1, 3, 2, 4};

//#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    vector <int> v;
    stack <int> s;
    int n;
    int arr[4];

    for(int i=0; i<n; i++){
        if(s.empty()){
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()<arr[i]){
            v.push_back(s.top());
        } else if(!s.empty() && s.top()>=arr[i]){
            while(!s.empty() && s.top()>=arr[i]){
                s.pop();
            }
        }
        if(s.empty()){
            v.push_back(-1);
        } else {
            v.push_back(s.top());
        }

        s.push(arr[i]);
    }
}

//-----------------------------------------------------------------------------------------------------

// we take same example for RIGHT SMALLER
// Next smaller element to Right
// given array is arr[] = {1, 3, 2, 4};

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    stack <int> s;
    int n;
    int arr[4];

    for(int i=n-1; i>n; i--){
        if(s.empty()){
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()<arr[i]){
            v.push_back(s.top());
        } else if(!s.empty() && s.top()>=arr[i]){
            while(!s.empty() && s.top()>=arr[i]){
                s.pop();
            }
        }
        if(s.empty()){
            v.push_back(-1);
        } else {
            v.push_back(s.top());
        }

        s.push(arr[i]);
    }
    //v.reserve(v.begin(), v.end());
}