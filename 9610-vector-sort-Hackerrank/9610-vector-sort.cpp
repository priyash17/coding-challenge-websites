#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int>p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        p.push_back(m);
    }
    sort(p.begin(),p.end());
    for(int i:p){
        cout<<i<<" ";
    }   
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna