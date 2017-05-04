/*
Problem URL - https://www.hackerrank.com/challenges/the-birthday-bar
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
    vector<int> choco(n);
    for(int i = 0; i < n; i++){
        cin>>choco[i];
    }
    int d, m;
    cin>>d>>m;
    int temp;
    int sum, j, count = 0;
    for(int i = 0; i < n; i++){
        temp = m;
        sum = 0;
        j = i;
        while(temp--){
            sum += choco[j];
            j++;
        }
        if(sum == d){
            count++;
        }
    }
    cout<<count;
    return 0;
}
