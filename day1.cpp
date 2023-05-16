#include<iostream>
#include<stack>
using namespace std;

void printElementofStack(stack <int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main(){
    stack <int> s;
    s.push(5);
    s.push(4);
    s.push(8);
    s.push(2);
    
    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;

    printElementofStack(s);
    
}