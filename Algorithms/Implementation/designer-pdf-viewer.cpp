/*
Problem URL - https://www.hackerrank.com/challenges/designer-pdf-viewer
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> heights(26);
    for(int i = 0; i < 26; i++){
        cin>>heights[i];
    }
    string input;
    cin>>input;
    int max = 0;
    for(int i = 0; i < input.length(); i++){
        if(max < heights[input.at(i) - 97]) {
            max = heights[input.at(i) - 97];
        }
    }
    cout<<max*input.length();
    return 0;
}
