// setup
#include <iostream>
#include <random>
using namespace std;

const string letters = "abcdefghijklmnopqrstuvwxyz";
const string numbers = "1234567890";
const string characters = "~`!@#$%^&*()_-+={[}]|:<>?,./";

// generate random password of specified length
string generate_password(int length) {
    random_device rd;
    mt19937 gen(rd());

    // index for password
    srand(time(0));
    string password(length, 'a');
    for (int i = 0; i < length/2; i++) {
        
        uniform_int_distribution<> distrib(0, length);
        int passIndex = distrib(gen);

        uniform_int_distribution<> distrib_1(0, letters.length());
        int lettersIndex = distrib_1(gen);

        password[passIndex] = letters[lettersIndex];

    }

    for (int i = 0; i < length / 3; i++) {
        uniform_int_distribution<> distrib(0, length);
        int passIndex = distrib(gen);

        uniform_int_distribution<> distrib_1(0, characters.length());
        int charactersIndex = distrib_1(gen);

        password[passIndex] = characters[charactersIndex];
    }

    for (int i = 0; i < length / 3; i++) {
        uniform_int_distribution<> distrib(0, length);
        int passIndex = distrib(gen);

        uniform_int_distribution<> distrib_1(0, numbers.length());
        int numbersIndex = distrib_1(gen);

        password[passIndex] = numbers[numbersIndex];
    }
    return password;
}

// main
int main() {
    cout << "password: ";
    cout << generate_password(8);
}
