// https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;

int main(){
    int tc;

    cin >> tc;

    int answers = 0;

    for(int i = 0; i < tc; i++){
        int flag = 0;
        int a, b, c;

        cin >> a >> b >> c;

        if(a == 1) flag++;
        if(b == 1) flag++;
        if(c == 1) flag++;

        if(flag >= 2) answers++;
    }

    cout << answers;

    return 0;
}