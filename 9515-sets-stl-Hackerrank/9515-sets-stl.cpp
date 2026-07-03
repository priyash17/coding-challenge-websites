#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    set<int> s;
    int q,a,b;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>a;
        if(a==1){
            cin>>b;
            s.insert(b);
        }
        if(a==2){
            cin>>b;
            s.erase(b);
        }
        if(a==3){
            cin>>b;
            auto it=s.find(b);
            if(it!=s.end()){
                cout<<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
        }
    } 
    return 0;
}





// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna