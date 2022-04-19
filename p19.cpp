#include <iostream>
#include <fstream>
 
using namespace std;
 
int main() {
    fstream f;
    f.open("sample_text.txt", ios::in);
 
    string line, longest_line = "";
    int max_length = 0;
 
    while (f) {
        getline(f, line);
        if(line.length() > max_length) {
            longest_line = line;
            max_length = line.length();
        }
    }
 
    cout << "The longest line: " << longest_line << endl;
    cout << "Length: " << max_length;
}
