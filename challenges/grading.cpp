/*
Problem URL - https://www.hackerrank.com/challenges/grading
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
    int grade;
    while(n--){
        cin>>grade;
        if(grade < 38){
            cout<<grade;
        }
        else if(grade%5 > 2)
            cout<<grade+(5 - grade%5);
        else cout<<grade;
        cout<<"\n";
    }

    return 0;
}
