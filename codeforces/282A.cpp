// https://codeforces.com/problemset/problem/282/A

#include<iostream>
using namespace std;

int main(){
    int lines;

    cin >> lines;

    int answer = 0;

    for(int i = 0; i < lines; i++){
        string line;
        cin >> line;

        if(line == "++X" || line == "X++") answer++;
        else if(line == "--X" || line == "X--") answer--;

    }

    cout << answer;

    return 0;
}