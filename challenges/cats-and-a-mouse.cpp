/*
Problem URL - https://www.hackerrank.com/challenges/cats-and-a-mouse
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
    int a, b, c;
    while(n--){
        cin>>a>>b>>c;
        if(abs(a-c) == abs(b-c)) cout<<"Mouse C";
        else if(abs(a-c) > abs(b-c)) cout<<"Cat B";
        else cout<<"Cat A";
        cout<<"\n";
    }

    return 0;
}
