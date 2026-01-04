#include <iostream>
#include <string>
using namespace std;
bool isFinal(char state) {
    return (state == 'B' || state == 'D' || state == 'F' || state == 'G');
}
char transitionTable(char state, char input) {
    switch (state) {
        case 'A':
            return (input == 'a') ? 'B' : 'C';

        case 'B':
            return (input == 'a') ? 'D' : 'X';

        case 'C':
            return (input == 'a') ? 'B' : 'C';

        case 'D':
            return (input == 'a') ? 'D' : 'E';

        case 'E':
            return (input == 'a') ? 'F' : 'G';

        case 'F':
            return (input == 'a') ? 'D' : 'X';

        case 'G':
            return (input == 'a') ? 'D' : 'X';

        case 'X':
            return 'X';

        default:
            return 'X';
    }
}

int main() {
    string input;
    char currentState = 'A';

    cout << "Enter input string (a & b only): ";
    cin >> input;

    for (char c : input) {
        if (c != 'a' && c != 'b') {
            cout << "Invalid input symbol!" << endl;
            return 0;
        }
        currentState = transitionTable(currentState, c);
    }

    if (isFinal(currentState)) {
        cout <<" ACCEPTED" << endl;
    } else {
        cout <<" REJECTED" << endl;
    }
}
