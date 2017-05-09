#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> p(n+1);
    vector<int> reverseP(n+1);
    for(int i = 1; i <= n; i++){
        cin>>p[i];
        reverseP[p[i]] = i;
    }
    
    for(int i = 1; i <= n; i++){
        cout<<reverseP[reverseP[i]]<<"\n";
    }
    
    return 0;
}
