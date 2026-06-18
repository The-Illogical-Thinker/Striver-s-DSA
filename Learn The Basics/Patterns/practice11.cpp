#include <bits/stdc++.h>

using namespace std;

int main(){
    int x= 5;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j <= i; j++){
            if((i+j) % 2){
                cout << 0;
            }
            else {
                cout << 1;
            }
        }
        cout << endl;
    }
}