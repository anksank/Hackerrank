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
    int cycles;
    int startH = 1;
    while(n--){
        cin>>cycles;
        int newH = startH;
        for(int i = 0; i < cycles; i++){
            if(i%2 == 0){
                newH = 2*newH;
            }
            else newH += 1;
        }
        cout<<newH<<"\n";
    }
    return 0;
}
