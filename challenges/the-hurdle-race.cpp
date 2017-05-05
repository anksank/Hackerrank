/*
Problem URL - https://www.hackerrank.com/challenges/the-hurdle-race
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    cin>>n>>k;
    vector<int> hurdles(n);
    int max = 0;
    for(int i = 0; i < n; i++){
        cin>>hurdles[i];
        if(hurdles[i] > max){
            max = hurdles[i];
        }
    }
    if(max - k > 0) cout<<max-k;
    else cout<<"0";

    return 0;
}
