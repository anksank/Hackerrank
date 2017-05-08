#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int getReverse(int num){
    int revNum = 0;
    while(num){
        int temp = num % 10;
        revNum = revNum * 10 + temp;
        num = num/10;
    }
    return revNum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i, j, k;
    cin>>i>>j>>k;
    int it;
    int count = 0;
    for(it = i; it <= j; it++){
        int temp = abs(it - getReverse(it)) % k;
        if(temp == 0){
            count++;
        }
    }
    cout<<count;
    return 0;
}
