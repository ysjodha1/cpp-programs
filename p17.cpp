#include <iostream>
 
using namespace std;
 
string reverse_word(string word) {
    string reversed = "";
    for (int i=word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }
 
    return reversed;
}
int main() {
    string line;
    cout << "Enter string to reverse: ";
    getline(cin, line);
   
    int j = 0, i;
    string final_str = "";
    string temp = "";
    for ( i=0; i < line.length(); i++) {
        if (line[i] == ' ') {
            final_str = temp + " " + final_str;
            temp = "";
            continue;
        } else {
            temp += line[i];
        }
    }
   final_str = temp + " " + final_str;
 
    cout << "\nReveresed word by word: ";
    cout << final_str;
    return 0;
}
