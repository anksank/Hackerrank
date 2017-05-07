/*
Solution for the problem  - https://www.hackerrank.com/challenges/palindrome-index
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkPalindrome(string input){
    for(long int j = 0; j < input.length()/2; j++){
            if(input.at(j) != input.at(input.length() - j - 1)){
                return false;
            }
        }
    return true;
}

int main() {
    int n;
    cin>>n;
    while(n--){
        long int ans = 0;
        string input;
        string newStr;
        cin>>input;
        bool check = true;
        bool convertedToPalin = false;
        for(long int i = 0; i < input.length()/2; i++){
            if(input.at(i) != input.at(input.length() - i - 1)){
                check = false;
                ans = i;
                newStr = input;
                newStr.erase(i, 1);
                if(checkPalindrome(newStr));
                else ans = input.length() - i - 1;
                break;
            }
        }
        if(check) ans = -1;
        cout<<ans;
        cout<<"\n";
    }
    return 0;
}
