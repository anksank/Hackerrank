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
    vector<int> input(n);
    for(int i = 0; i < n; i++){
        cin>>input[i];
    }
    sort(input.begin(), input.end());
    
    vector<int> count(101);
    for(int i = 0; i < n; i++){
        count[input[i]]++;
    }
    int max = 0;
    int sum = 0;
    for(int i = 0; i < count.size(); i++){
        sum = count[i] + count[i+1];
        if(max < sum){
            max = sum;
        }
    }
    cout<<max;
    return 0;
}
