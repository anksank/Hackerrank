/*
Problem URL - https://www.hackerrank.com/challenges/counting-valleys
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int n;
    cin>>n;
    string input;
    cin>>input;
    int valleyCount = 0;
    int currentStep = 0;
    int previousStep = 0;
    for(int i = 0; i < n; i++){
        if(input[i] == 'U') currentStep++;
        else currentStep--;
        if(previousStep == -1 && currentStep == 0) valleyCount++;
        previousStep = currentStep;
    }
    cout<<valleyCount;
    return 0;
}
