// https://codeforces.com/contest/978/problem/A

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    unordered_map<int, int> position;

    for(int i = 0; i<n; i++){
        cin >> arr[i];
        if(position.find(arr[i]) != position.end()){
            arr[position[arr[i]]] = 0;
        }
        position[arr[i]] = i;
    }

    cout << position.size() << endl;

    for(int i = 0; i<n; i++){
        if(arr[i]) cout << arr[i] << " ";
    }
    

    return 0;
}