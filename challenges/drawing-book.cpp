/*
Problem URL - https://www.hackerrank.com/challenges/drawing-book
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    string START = "START";
    string END = "END";
    string countFlag;
    cin>>n>>k;
    int pageDiff;
    int mid = (n+2)/2;
    if(k < mid) {
        pageDiff = k;
        countFlag = START;
    }
    else {
        pageDiff = n - k;
        countFlag = END;
    }
    
    /* if number of pages are even, the last page will 
    only show the end of the book which will be nth page. 
    Hence, below condition when counting from last page */
    
    if(n % 2 == 0 && countFlag == END) cout<<(pageDiff + 1)/2;
    else cout<<pageDiff/2;
    return 0;
}
