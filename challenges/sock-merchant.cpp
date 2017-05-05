/*
Problem URL - https://www.hackerrank.com/challenges/sock-merchant
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
    int sock;
    int count = 0;
    vector<int> socks(100);
    for(int i = 0; i < n; i++){
        cin>>sock;
        socks[sock]++;
        if(socks[sock] % 2 == 0) count++;
    }
    cout<<count;
    return 0;
}
