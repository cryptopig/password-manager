// setup
#include <bits/stdc++.h>
using namespace std;

const string letters = "abcdefghijklmnopqrstuvwxyz";
const int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
const string characters = "~`!@#$%^&*()_-+={[}]|:<>?,./";

// main
int main() {
    cout << "main";
}

// generate random password of specified length
string generate_password(int length) {
    srand(time(0));
    string password = "t"*length;
    for (int i = 0; i < length; i++) {
        
    }
    return password;
}
