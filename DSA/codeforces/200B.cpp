// https://codeforces.com/problemset/problem/200/B

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a;
    double sum = 0;

    for(int i = 0; i<n; i++){
        cin >> a;
        sum += a;
    }

    cout << sum/n;

    return 0;
}