#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void accessCharacters(string s){
            for (int i = 0; i < s.length(); i++){
                cout << s[i] << endl;
            }
        }
};

int main(){
    Solution obj;
    string h = "Help Me! I don't want to do this anymore";
    obj.accessCharacters(h);
}