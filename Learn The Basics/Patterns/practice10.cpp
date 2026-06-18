#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 5;
    for (int i = 0; i < 2*x; i++){
        int z = x - abs(x-i);
        for (int j = 0; j < z; j++){
            cout << "*";
        }
        cout << endl;
    }
}