#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n; // Initialize n with the appropriate value
    // ...

    cin >> n; // Read the value of n from input

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read the elements of arr from input
    }

    vector<int> v;
    stack<pair<int, int>> s;

    for (int i = 0; i < n; i++) {
        if (s.empty()) {
            v.push_back(-1);
        } else if (!s.empty() && s.top().first > arr[i]) {
            v.push_back(s.top().second);
        } else if (!s.empty() && s.top().first <= arr[i]) {
            while (!s.empty() && s.top().first <= arr[i]) {
                s.pop();
            }
            if (s.empty()) {
                v.push_back(-1);
            } else {
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }

    for (int i = 0; i < v.size(); i++) {
        v[i] = i - v[i];
    }

    // Print the elements of v
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
