#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
    fstream f, f_cp;
    string filename = "cpp_program_1.cpp";
    f.open(filename, ios::in);
    if (!f)
    {
        cout << "Error in opening file!";
        return 0;
    }
    f_cp.open("files/" + filename, ios::out);
 
    string line;
    while (f) {
        getline(f, line);
       
        if (line.find("#include") != string::npos) {
            continue;
        }
 
        f_cp << line << endl;
    }
 
    cout << "Successfully copied file without '#include' lines";
    return 0;
}
