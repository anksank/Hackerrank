#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    cin>>n>>k;
    vector<int> clouds(n);
    int total = 100;
    for(int i = 0; i < n; i++){
        cin>>clouds[i];
        if(i%k == 0){
            if(clouds[i] == 1){
                total -= 2;
            }
            total--;
        }
    }
    cout<<total;
    return 0;
}
