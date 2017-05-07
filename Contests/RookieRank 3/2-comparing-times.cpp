#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    string input1;
    string input2;
    while(n--){
        cin>>input1;
        cin>>input2;
        if(stoi(input1.substr(0, 2)) == 12){
            input1 = "00" + input1.substr(2, 5);
        }
        if(stoi(input2.substr(0, 2)) == 12){
            input2 = "00" + input2.substr(2, 5);
        }
        if(input1.at(5) > input2.at(5)){
            cout<<"Second";
        }
        else if(input1.at(5) < input2.at(5)) {
            cout<<"First";
        }
        else if(stoi(input1.substr(0, 2)) > stoi(input2.substr(0,2))){
            cout<<"Second";
        }
        else if(stoi(input1.substr(0, 2)) < stoi(input2.substr(0,2))){
            cout<<"First";
        }
        else if(stoi(input1.substr(3, 2)) > stoi(input2.substr(3,2))){
            cout<<"Second";
        }
        else {
            cout<<"First";
        }
        cout<<"\n";
    }
    return 0;
}
