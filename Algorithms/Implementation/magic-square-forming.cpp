/*
Problem URL - https://www.hackerrank.com/challenges/magic-square-forming
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* there is only 1 magic square, however, due to symmetry, there can be 8 such distinct squares
    consider this to be a magic square
    we compare the input with these numbers in different orders,
    and find the case when the difference between the squares is minimal */
    vector <vector<int> > magicSquare({{8,1,6}, {3,5,7}, {4,9,2}});
    vector <vector<int> > input(3, vector<int>(3));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>input[i][j];
        }
    }
    vector<int> count(8);
    int n = 3;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            count[0] = count[0] + abs(magicSquare[i][j] - input[i][j]);
            count[1] = count[1] + abs(magicSquare[i][n - 1 - j] - input[i][j]);
            // 0,0, 1,0, 2,0 - Sequence of 8, 1, 6 in the magic square
            count[2] = count[2] + abs(magicSquare[j][i] - input[i][j]);
            // 2,0, 1,0, 0,0
            count[3] = count[3] + abs(magicSquare[n - 1 - j][i] - input[i][j]);
            // 2,0, 2,1, 2,3
            count[4] = count[4] + abs(magicSquare[n - 1 - i][j] - input[i][j]);
            // 2,2, 2,1, 2,0
            count[5] = count[5] + abs(magicSquare[n - 1 - i][n - 1 - j] - input[i][j]);
            // 0,2, 1,2, 2,2
            count[6] = count[6] + abs(magicSquare[j][n - 1 - i] - input[i][j]);
            // 2,2, 1,2, 0,2
            count[7] = count[7] + abs(magicSquare[n - 1 - j][n - 1 - i] - input[i][j]);
        }
    }
    int minCount = 99;
    for(int i = 0; i < 8; i++){
        if(minCount > count[i]){
            minCount = count[i];
        }
    }
    cout<<minCount;
    return 0;
}
