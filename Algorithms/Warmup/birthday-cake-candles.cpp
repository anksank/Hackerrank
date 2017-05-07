/*
Problem URL - https://www.hackerrank.com/challenges/birthday-cake-candles
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int count = 1;
    int currentHeight;
    vector<int> candleHeights(n);
    int i = 0;
    while(n--){
        cin>>candleHeights[i];
        i++;
    }
    sort(candleHeights.begin(), candleHeights.end());

    for(int j = i - 1; j > 0; j--){
        if(candleHeights[j] == candleHeights[j-1]){
            count++;
        }
        else break;
    }
    cout<<count;
    return 0;
}
