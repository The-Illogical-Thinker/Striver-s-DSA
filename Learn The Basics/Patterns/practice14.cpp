#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 5;
    for (int i = 0; i < 5; i++){
        char y = 'A';
        for (int j = 0; j <= i; j++){
            cout << y << " ";
            y++;
        }
        cout << endl;
    }
}