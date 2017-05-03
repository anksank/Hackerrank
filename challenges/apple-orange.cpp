/*
Problem URL - https://www.hackerrank.com/challenges/apple-and-orange
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    vector<int> appleDist(m);
    vector<int> orrangeDist(n);
    for(int i = 0; i < m; i++){
        cin>>appleDist[i];
    }
    for(int i = 0; i < n; i++){
        cin>>orrangeDist[i];
    }
    int appleCount = 0;
    int orangeCount = 0;
    for(int i = 0; i < m; i++){
        if((a + appleDist[i] >= s) && (a + appleDist[i] <= t)){
            appleCount++;
        }
    }
    for(int i = 0; i < n; i++){
        if((b + orrangeDist[i] >= s) && (b + orrangeDist[i] <= t)){
            orangeCount++;
        }
    }
    cout<<appleCount<<"\n"<<orangeCount;
    return 0;
}
