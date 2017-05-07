#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<vector <char> > grid(n, vector<char>(n));
    string output;
    int x, y;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>grid[i][j];
            if(grid[i][j] == 'X'){
                x = i;
                y = j;
            }
        }
    }
    cout<<x<<","<<y;
    return 0;
}
