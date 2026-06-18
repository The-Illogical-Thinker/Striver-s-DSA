#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 5;
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j < 2*x; j++){
            if(j > (x-i) && j < (x+i) ){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}