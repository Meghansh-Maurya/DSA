// https://codeforces.com/problemset/problem/71/A

#include <iostream>
using namespace std;

string return_shortform(string longform){
    int len = longform.size();
    if(len > 10) return string(1, longform[0]) + to_string(len-2) + longform[len-1];

    return longform;
}

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        string longform;
        cin >> longform;

        cout << return_shortform(longform) << endl;
    }

    return 0;
}