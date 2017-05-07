#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int a, burntOut;
    vector<int> burntList(n);
    vector<int> supervisor(n);
    vector<set<int> > subordinates(n);
    for(int i = 1; i < n; i++){
        cin>>a>>burntOut;
        supervisor[i] = a;
        subordinates[a].insert(i);

        if(burntOut == 0) burntList[i] = 0;
        else burntList[i] = 1;
    }
    int minCount = 99999;
    int currentSupervisor = supervisor[n-1];
    int count = 0;
    bool checkFlag;

    for(int i = subordinates.size() - 1; i >= 0; i--){

            // loop over all subordinates
            checkFlag = false;
            for(set<int> :: iterator it = subordinates[i].begin(); it != subordinates[i].end(); ++it) {
                // check if there is a burnt out subordinate
                //cout<<"subordinate of "<<i<<" is "<<*it<<"\n";
                if (burntList[*it] == 0){
                    // if yes, make this green and all subordinates and superior green
                    checkFlag = true;
                    //cout<<i<<" is sent for conference\n";
                    burntList[i] = 1;
                    burntList[*it] = 1;
                    burntList[supervisor[i]] = 1;
                }
            }
            if(checkFlag) count++;
    }
    cout<<count;
    return 0;
}
