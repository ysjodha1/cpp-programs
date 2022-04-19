#include <iostream>
using namespace std;
 
string remove_char(string line, char c) {
    string final = "";
    for(int i=0; i <= line.length(); i++) {
        if(line[i] == c) {
            continue;
        } else {
            final += line[i];
        }
    }
 
    return final;
}
 
string remove_string(string line, string word) {
    int pos = line.find(word);
 
    // removes all occurrences from the string
    while ((pos  = line.find(word)) != std::string::npos)
    {
        line.erase(pos, word.length());
    }
 
    return line;
}
 
int main() {
 
    string line;
 
    cout << "Enter a string: ";
    getline(cin, line);
 
    cout << "1. Remove single char";
    cout << endl << "2. Remove a string" << endl;
    int option;
    cin >> option;
 
    if (option == 1) {
        char w;
        cout << "\nEnter char to remove: ";
        cin >> w;
        cout << "Result (case sensitive): " << remove_char(line, w);
    } else if (option == 2) {
        string word_to_remove;
        cout << "\nEnter String to remove: ";
        cin >> word_to_remove;
        cout << "Result (all occur): " << remove_string(line, word_to_remove);
    } else {
        cout << "\n\nInvalid option!";
    }
    return 0;
}
