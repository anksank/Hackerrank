#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int lps(vector<int> input)
{
    int n = input.size();
    int i, j, cl;

    vector<vector<int> > L(n, vector<int>(n));
    for (i = 0; i < n; i++) {
        L[i][i] = 1;
    }

    for (cl = 2; cl <= n; cl++) {
        for (i = 0; i < n - cl + 1; i++) {
            j = i + cl - 1;
            if (input[i] == input[j])
                L[i][j] = L[i + 1][j - 1] + 2;
            else
                L[i][j] = max(L[i][j - 1], L[i + 1][j]);
        }
    }

    return L[0][n - 1];
}

//finding root of an element.
int root(int Arr[ ],int i)
{
    while(Arr[ i ] != i)           //chase parent of current element until it reaches root.
    {
     i = Arr[ i ];
    }
    return i;
}

void joinNodes(int size[], int Arr[] ,int A ,int B)
{
    int root_A = root(Arr, A);
    int root_B = root(Arr, B);
    if (size[root_A] > size[root_B]) {
        size[root_A] += size[root_B];
        Arr[ root_B ] = root_A ;       //setting parent of root(A) as root(B).
    }
    else {
        Arr[ root_A] = root_B;
        size[root_B] += size[root_A];
    }
}

int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    //int a, b;
    //vector<int> transform(n + 1);
    int transform[n + 1];
    int size[n + 1];
    for (int i = 1; i <= n; i++) {
        transform[i] = i;
        size[i] = 1;
    }
    int a[k];
    int b[k];
    int i = 0;
    int temp = k;
    int x, y;
    while (k--) {
        cin >> a[i] >> b[i];

        joinNodes(size, transform, a[i], b[i]);

        i++;
    }

    vector<int> input(m);
    for (int i = 0; i < m; i++) {
        cin >> x;
        //cout<<transform[x]<<" ";
        input[i] = root(transform, transform[x]);
    }
    //cout<<"\n";
    cout << lps(input);
    return 0;
}
