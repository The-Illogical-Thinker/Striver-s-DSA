#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 5;
    int y = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j <= i; j++){
            y++;
            cout << y << " ";
        }
        cout << endl;
    }
}