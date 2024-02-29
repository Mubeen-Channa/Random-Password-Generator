#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string generatePassword(int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyz@#$%^&*ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    string password;
    password.reserve(length);

    for (int i = 0; i < length; ++i) {
        password += charset[rand() % (sizeof(charset) - 1)];
    }

    return password;
}

int main() {
    srand(time(0));
    x:

    int again;
    int passwordLength;

    cout << "Enter the length of the password: ";
    cin >> passwordLength;

    string password = generatePassword(passwordLength);

    cout << "Generated Password: " << password << endl;

    cout<<"\n\nEnter y for Again Generate New Random Password & n for no : ";     cin >> again;
    
    if(again=='y' || again=='Y'){
        cout<<"\n\n";
        goto x;
    }
    return 0;
}
