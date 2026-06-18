#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 5;
    int y = 2*x;
    for (int i = 1; i <= 2*x; i++){
        int z = abs(x-i);
        int a = 2*x - z;
        for (int j = 1; j < 2*x; j++){
            if(j > z && j < a){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
         if (i == x) {
            for (int j = 1; j < 2 * x; j++) {
                if (j > z && j < a)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
}