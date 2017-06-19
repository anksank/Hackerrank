#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int> A(n);
    vector<int> B(n);
    int minA = 100001, minB = 100001;
    int indexA = -1, indexB = -1;
    for(int i = 0; i < n; i++) {
        cin>>A[i];
        if (A[i] < minA) {
            minA = A[i];
            indexA = i;
        }
    }
    for(int i = 0; i < n; i++) {
        cin>>B[i];
        if (B[i] < minB) {
            minB = B[i];
            indexB = i;
        }
    }
    int minSum = minA + minB;
    int minSum1, minSum2;
    if (indexA == indexB) {
        int temp = A[indexA];
        A[indexA] = 100001;
        vector<int> tempA(n);
        tempA = A;
        sort(tempA.begin(), tempA.end());
        minSum1 = tempA[0] + B[indexB];

        A[indexA] = temp;
        B[indexB] = 100001;
        sort(B.begin(), B.end());
        minSum2 = A[indexA] + B[0];

        if(minSum1 < minSum2) {
            minSum = minSum1;
        }
        else minSum = minSum2;
    }
    cout<<minSum;
    return 0;
}
