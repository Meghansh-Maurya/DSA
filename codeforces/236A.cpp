#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    cin >> s;

    unordered_map<char, int> freq;

    for(int i = 0; i<s.size(); i++){
        freq[s[i]]++;
    }

    if(freq.size() % 2) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

    return 0;
}