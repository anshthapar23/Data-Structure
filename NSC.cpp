#include <iostream>
#include <string>
using namespace std;
int main() {
    string text;
    int shift;
    cout << "Enter paragraph: "<<endl;
    getline(cin, text);
    cout << "Enter shift: "<<endl;;
    cin >> shift;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = (text[i] - 'A' + shift) % 26 + 'A';
        }
        else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (text[i] - 'a' + shift) % 26 + 'a';
        }
        // number ,numnerical values special charachter 
    }
    cout << "Encrypted paragraph: " << text;
    return 0;
}