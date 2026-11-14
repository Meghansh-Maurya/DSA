// https://codeforces.com/problemset/problem/4/A

#include<iostream>
using namespace std;

string even_weight(int weight){
    if(weight > 2 && weight % 2 == 0) return "YES";
    return "NO";
}

int main(){
    int weight;

    cin >> weight;
    cout << even_weight(weight);
}
