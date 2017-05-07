/*
Problem URL - https://www.hackerrank.com/challenges/between-two-sets
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* TODO: This is brute force. There is definitely a better way to achieve this,
by getting the next multiple of setA, instead of going over all the numbers from
setA's last element to setB's first element. */
int main() {
    int m, n;
    cin>>n>>m;
    vector<int> setA(n);
    vector<int> setB(m);
    for(int i = 0; i < n; i++){
        cin>>setA[i];
    }
    for(int i = 0; i < m; i++){
        cin>>setB[i];
    }
    int count = 0;
    sort(setA.begin(), setA.end());
    sort(setB.begin(), setB.end());
    for(int i = setA[setA.size() - 1]; i <= setB[0]; i++){
        int temp = n;
        int j = 0;
        bool check = true;
        while(temp--){
            if(i%setA[j] != 0){
                check = false;
            }
            j++;
        }
        temp = m;
        j = 0;
        while(temp--){
            if(setB[j]%i != 0){
                check = false;
            }
            j++;
        }
        if(check) count++;
    }
    cout<<count<<"\n";
    return 0;
}
