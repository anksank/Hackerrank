#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int num;
    long sumLeft = 0, sumRight = 0;
    for(int i = 0; i < n; i++){
        cin>>num;
        if (i < n/2){
            sumLeft += num;
        }
        else sumRight += num;
    }
    cout<<abs(sumLeft - sumRight);
    return 0;
}
