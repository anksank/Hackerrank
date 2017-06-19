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
    while(n--) {
        string input;
        cin>>input;
        int count = 0;
        bool flag1 = false, flag2 = false, flag3 = false;
        for (int i = 0; i < input.length(); i++) {

            if (input.at(i) == '1') {
                flag1 = true;
                //cout<<"char = "<<input.at(i)<<"\n";
            }
            else if (input.at(i) == '0' && flag1) {
                
                while ((i < input.length()) && input.at(i) == '0' && flag1) {
                    //cout<<"char = "<<input.at(i)<<"\n";
                    i++;
                    flag2 = true;
                }
                i--;

            }
            else {
                flag1 = false;
                flag2 = false;
                //cout<<"char = "<<input.at(i)<<"\n";
            }
            if ((i + 1) < input.length() && input.at(i + 1) == '1') {
                if (flag1 && flag2) {
                    count++;
                }

                flag2 = false;
            }

        }
        cout<<count<<"\n";
    }
    return 0;
}
