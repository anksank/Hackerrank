#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin>>n>>m;
    vector<int> routes(n + 1);
    vector<int> size(n+1);
    int max = 0;

    for(int i = 1; i <= n; i++){
        routes[i] = i;
        size[i] = 1;
    }
    int aTimes, bTimes;
    int a, b;
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        if(routes[a] == a && routes[b] == b){
            routes[a] = routes[b];
        }
        else {
            aTimes = 0, bTimes = 0;
            while(routes[a] != a){
                a = routes[a];
                aTimes++;
            }
            while(routes[b] != b){
                b = routes[b];
                bTimes++;
            }
            if(aTimes < bTimes)
                routes[a] = routes[b];
            else routes[b] = routes[a];
        }

    }
    vector<int> mainRoot(n+1);

    for(int i = 1; i <= n; i++){
        int j = i;
        while(routes[j] != j){
            j = routes[j];
        }
        mainRoot[i] = j;
    }
    vector<int> count(n+1);
    for(int i = 1; i <= n; i++){
       count[mainRoot[i]]++;
       if(count[mainRoot[i]] > max){
           max = count[mainRoot[i]];
       }
    }
    cout<<max;
    return 0;
}
