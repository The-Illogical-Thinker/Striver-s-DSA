#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 5;
    for (int i = x; i >= 1; i--){
        for (int j = 2*x; j >= 1; j--){
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