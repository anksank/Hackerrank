#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n;
    cin>>n;
    vector<long> input(n);
    vector<long> ranks(n);
    cin>>input[0];
    long myRank = 1;
    ranks[0] = myRank;
    for(long i = 1; i < n; i++){
        cin>>input[i];
        if(input[i] == input[i-1]){
            ranks[i] = myRank;
        }
        else {
            myRank++;
            ranks[i] = myRank;
        }
    }
    long m;
    cin>>m;
    vector<long> scores(m);
    
    for(long i = 0; i < m; i++){
        cin>>scores[i];
    }
    long j = 0;
    long i = n - 1;
    for(; i >= 0 && j < m; i--){
        if(scores[j] < input[i]){
            cout<<ranks[i] + 1<<"\n";
            j++;
            // maybe the next score is better than the next input, 
            // so check the previous input with next score - (i++)
            i++;
        }
        else if(scores[j] == input[i]){
            cout<<ranks[i]<<"\n";
            j++;
            i++;
        }
        else ;
    }
    while(j < m){
        cout<<"1\n";
        j++;
    }
    
    return 0;
}
