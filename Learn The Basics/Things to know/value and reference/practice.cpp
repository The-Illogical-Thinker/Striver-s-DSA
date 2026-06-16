#include <bits/stdc++.h>

using namespace std;

int addOneValue(int x){
    x++;
    return x;
}

int addOneRef(int &x){
    x++;
    return x;
}

int main(){
    int a = 10;
    int b = 15;
    cout << addOneValue(a) << "   " << a << endl;
    cout << addOneRef(b) << "   " << b << endl;
}