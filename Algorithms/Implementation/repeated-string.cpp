/*
Problem URL - https://www.hackerrank.com/challenges/repeated-string
*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    long n;
    cin >> n;
    vector<int> letterCount(26);
    for(int i = 0; i < s.length(); i++){
        letterCount[s.at(i) - 97]++;
    }
    long int count = 0;
    count = n/s.length();
    count = count * letterCount[0];
    long int remaining = n % s.length();
    vector<int> remainingCount(26);
    for(int i = 0; i < remaining; i++){
        remainingCount[s.at(i) - 97]++;
    }
    count = count + remainingCount[0];
    cout<<count;
    return 0;
}
