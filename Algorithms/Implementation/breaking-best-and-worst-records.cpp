/*
Problem URL - https://www.hackerrank.com/challenges/breaking-best-and-worst-records
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
    cin>>n;
    vector<int> scores(n);
    int maxCount = 0, minCount = 0;
    cin>>scores[0];
    int max = scores[0];
    int min = scores[0];
    for(int i = 1; i < n; i++){
        cin>>scores[i];
        if(max < scores[i]){
            max = scores[i];
            maxCount++;
        }
        if(min > scores[i]){
            min = scores[i];
            minCount++;
        }
    }
    cout<<maxCount<<" "<<minCount;
    return 0;
}
