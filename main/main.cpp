#include <iostream>
#include <string>

using namespace std;

int balance;

int main() {
    string option;

    cout << "Welcome back! Choose one of the options:\n"
         << "/balance - show your balance.\n"
         << "/bonus - gives you free bonus.\n"
         << "/start - start new game.\n"
         << "/out - leave the program";
    cin >> option;

    if (option == "/balance") {
        cout << "You selected balance." << endl;
    }
    else if (option == "/bonus") {
        if (balance >= 500) {
            cerr << "You can't get the bonus if you have more than 500$";
        }
        else if (balance < 500) {
            balance = balance + 500;
            cout << "You get the free bonus: 500$\nNow your balance is:" << balance;
        }
        else {
            cerr << "Error: something isn't work...";
        }
    }
    else if (option == "/start") {
        cout << "You selected start game." << endl;
    }
    else if (option == "/out") {
        
    }
    else {
        cout << "Invalid option selected. Please try again" << endl;
    }

    return 0;
}
