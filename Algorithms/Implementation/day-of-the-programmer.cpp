/*
Problem URL - https://www.hackerrank.com/challenges/day-of-the-programmer
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isLeap(int year){
    if(year > 1918){
        if((year % 4 == 0) && (year % 100 != 0)) return true;
        else if(year % 400 == 0) return true;

        return false;
    }
    else if(year < 1918){
        if(year % 4 == 0) return true;
    }
    return false;
}

int getNoOfDaysTillFeb(int year) {
    if(isLeap(year)){
       return 31 + 29;
    }
    else if(year == 1918) return 31 + 15;
    else return 31 + 28;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int year;
    cin>>year;
    vector<int> daysInMonth(12);
    int tillFeb = getNoOfDaysTillFeb(year);
    int tillAug = tillFeb + 31 + 30 + 31 + 30 + 31 + 31;
    int remaining = 256 - tillAug;
    cout<<remaining<<".09."<<year;
    return 0;
}
