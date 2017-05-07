/*
Problem URL - https://www.hackerrank.com/challenges/bon-appetit
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
    vector<int> items(n);
    vector<int> itemsActual(n);
    int sumA = 0;
    int charged = 0;
    for(int i = 0; i < n; i++){
        cin>>items[i];
        if(i != k) itemsActual[i] = items[i];
        sumA += itemsActual[i];
    }
    cin>>charged;
    int sumC = 2*charged;
    if(charged == (sumA/2)) cout<<"Bon Appetit";
    else cout<<charged - sumA/2;
    return 0;
}
