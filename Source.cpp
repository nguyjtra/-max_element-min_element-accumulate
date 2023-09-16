#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric> 
using namespace std;


int main() {
    int n; cin >> n;
    vector<int>v;
    int k;
    while (cin >> k) v.push_back(k);
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << *max_element(v.begin(), v.end()) << endl;
    cout << accumulate(v.begin(), v.end(), 0);
    return 0;
}
