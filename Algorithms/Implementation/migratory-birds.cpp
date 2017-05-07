/*
Problem URL - https://www.hackerrank.com/challenges/migratory-birds
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> types(n);
    vector<int> typeCount(6);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
       typeCount[types[types_i]]++;
    }
    int max = 0, ans; 
    for(int i = 1; i < 6; i++){
        if(max < typeCount[i]){
            max = typeCount[i];
            ans = i;
        }
    }
    cout<<ans;
    return 0;
}
