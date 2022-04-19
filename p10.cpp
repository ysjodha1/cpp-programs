// Complex number class
 
#include <iostream>
using namespace std;
 
class Complex {
    int re, im;
    public:
      Complex(int r, int i) {
        re = r;
        im = i;
      }
 
      // Getters and Setters
      int get_real() { return re; }
      int get_img() { return im; }
      void set_real(int r) {re = r; }
      void set_im(int i) { im = i; }
 
      Complex add(Complex c_number) {
        int re_sum = re + c_number.get_real();
        int im_sum = im + c_number.get_img();
 
        return Complex(re_sum, im_sum);
      }
      void exchange(Complex& c_number) {
        Complex temp = Complex(re, im);
 
        re = c_number.get_real();
        im = c_number.get_img();
 
        c_number.set_real(temp.get_real());
        c_number.set_im(temp.get_img());
      }
 
      void display() {
        cout << re << " + " << im << "i" << endl;
      }
};
 
int main()
{
    int fi_re, fi_im, se_re, se_im;
    cout << "Enter 1st complex number: " << endl;
    cout << "\tReal part: ";
    cin >> fi_re;
    cout << "\tImg part: ";
    cin >> fi_im;
    Complex first(fi_re, fi_im);
 
    cout << endl << endl;
   
    cout << "Enter 2nd complex number: " << endl;
    cout << "\tReal part: ";
    cin >> se_re;
    cout << "\tImg part: ";
    cin >> se_im;
    Complex second(se_re, se_im);
 
    cout << "1. Add these two" << endl;
    cout << "2. Exchange these two" << endl;
    int option;
    cin >> option;
    if (option == 1) {
      Complex add = first.add(second);
      cout << "\nRESULT: ";
       first.display();
       cout << " + ";
      second.display();
      cout << " = ";
      add.display();
    } else if(option == 2) {
      cout << "First one: ";
      first.display();
      cout << "\nSecond: ";
      second.display();
      first.exchange(second);
      cout << "\nAfter Exchange\n";
      cout << "First one: ";
      first.display();
      cout << "\nSecond: ";
      second.display();
    } else {
      cout << "Invalid option!";
    }
    return 0;
}
