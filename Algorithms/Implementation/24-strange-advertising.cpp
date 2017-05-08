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
    int total = 0;
    int converted = 5;
    for(int i = 0; i < n; i++){
        if(i != 0){
            converted = converted*3;
        }
        converted = converted/2;
        total += converted;
    }
    cout<<total;
    return 0;
}
