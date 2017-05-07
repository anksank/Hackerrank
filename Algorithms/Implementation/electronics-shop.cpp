#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int money, n, m;
    cin>>money>>n>>m;
    vector<int> keyboards(n);
    vector<int> USBs(m);
    for(int i = 0; i < n; i++){
        cin>>keyboards[i];
    }
    sort(keyboards.begin(), keyboards.end());
    for(int i = 0; i < m; i++){
        cin>>USBs[i];
    }
    sort(USBs.begin(), USBs.end());
    vector<int> possibilities;
    int max = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int current = keyboards[i] + USBs[j];
            possibilities.push_back(keyboards[i] + USBs[j]);
            if(max < current && current <= money){
                max = current;
            }
        }
    }
    
    if(max == 0) cout<<-1;
    else cout<<max;
    return 0;
}
