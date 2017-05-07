/*
Problem URL - https://www.hackerrank.com/challenges/mini-max-sum
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<long int> input(5);
    for(int i = 0; i < 5; i++){
        cin>>input[i];
    }
    sort(input.begin(), input.end());
    long int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += input[i];
    }
    cout<<sum - input[4];
    cout<<" "<<sum - input[0];
    return 0;
}
