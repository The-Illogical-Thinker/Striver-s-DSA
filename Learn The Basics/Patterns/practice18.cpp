#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        void Pattern(int x){
            int y = 2 * x;
            for (int i = 1; i <= y; i++){
                for (int j = 1; j <= y; j++){
                    if (j > abs(x - i + 1) && j <= (y - abs(x - i +1))){
                        cout << " ";
                    }
                    else{
                        cout << "*";
                    }
                }
                cout << endl;
            }
        }
};

int main(){
    int x = 5;
    Solution pat;
    pat.Pattern(x);
}