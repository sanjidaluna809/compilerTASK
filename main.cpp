#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

// KEYWORD
bool isKeyword(string s) {
    string keywords[] = {
        "int","float","double","char","bool","void","if","else","for","while","do","return","break","continue",
        "using","namespace","include","main","long","short","signed","unsigned","cout","cin"
    };
    int n_keywords = sizeof(keywords) / sizeof(keywords[0]);

    for (int i = 0; i < n_keywords; i++)
        if (s == keywords[i]) return true;
    return false;
}

// IDENTIFIER
bool isIdentifier(string s) {
    if (s.empty())
        return false;
    // Must start with a letter or underscore
    if (!((s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= 'a' && s[0] <= 'z') || s[0] == '_'))
        return false;
    // Subsequent characters must be letters, digits, or underscore
    for (int i = 1; i < s.size(); i++) {
        char c = s[i];
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '_'))
            return false;
    }
    return true;
}

// CONSTANT (Only handles integer constants)
bool isConstant(string s) {
    if (s.empty())
        return false;
    for (char c : s)
        if (!(c >= '0' && c <= '9'))
            return false;

    return true;
}

// OPERATOR
bool isOperator(string s) {
    string ops[] = {"+","-","*","/","%","=","==","!=","<",">","<=",">=","<<",">>"};
    int n = sizeof(ops) / sizeof(ops[0]);
    for (int i = 0; i < n; i++)
        if (s == ops[i]) return true;
    return false;
}

// PUNCTUATION
bool isPunctuation(char c) {
    return (c=='(' || c==')' || c=='{' || c=='}' || c==';' || c==',' || c=='[' || c==']');
}

int main() {
    ifstream file("sample1.txt");

    if (!file) {
        cout << "Cannot open sample1.txt!" << endl;
        return 1; // Return non-zero for error
    }

    string token;

    while (file >> token) {
        // Punctuation (Check for single-character punctuation first)
        if (token.size() == 1 && isPunctuation(token[0])) {
            cout << token << " -Punctuation\n";
            continue;
        }

        // Operator
        if (isOperator(token)) {
            cout << token << " -Operator\n";
            continue;
        }

        // Keyword
        if (isKeyword(token)) {
            cout << token << " -Keyword\n";
            continue;
        }

        // Constant
        if (isConstant(token)) {
            cout << token << " -Constant\n";
            continue;
        }

        // Identifier
        if (isIdentifier(token)) {
            cout << token << " -Identifier\n";
            continue;
        }

        // Unclassified (Final Fallback for unrecognized tokens)
        cout << token << " -Unclassified\n";
    }

    // This return 0 is now correctly outside the while loop,
    // ensuring all tokens are processed.
    return 0;
}
