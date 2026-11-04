#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size = 5;

    vector<vector<int>> mat(5, vector<int>(5));

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin >> mat[i][j];
            if(mat[i][j]){
                cout << abs(i-2)+abs(j-2);
                return 0;
            }
        }
    }

    return 0;
}