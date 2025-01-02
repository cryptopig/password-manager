// setup
#include <iostream>
#include <random>
using namespace std;

const string letters = "abcdefghijklmnopqrstuvwxyz";
const int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
const string characters = "~`!@#$%^&*()_-+={[}]|:<>?,./";

// generate random password of specified length
string generate_password(int length) {
    random_device rd;
    mt19937 gen(rd());

    // index for password
    srand(time(0));
    string password(length, 'a');
    for (int i = 0; i < length; i++) {
        
        uniform_int_distribution<> distrib(0, length);
        int passIndex = distrib(gen);
        password[passIndex] = 'b';

    }
    return password;
}

// main
int main() {
    cout << "main" << endl;
    cout << generate_password(8);

}
