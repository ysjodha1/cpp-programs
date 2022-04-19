#include <iostream>
using namespace std;
 
class Room {
  private:
    double length;
    double width;
    double height;
 
  public:
    Room() {
      length = width = height = 0;
    }
 
    Room(double l, double w, double h) {
      length = l;
      width = w;
      height = h;
    }
 
    double calculate_area() {
      return this->length * this->width;
    }
 
    double calculate_volume() {
      return this->length * this->width * this-> height;
    }
};
 
 
int main() {
  double l, w, h;
 
  cout << "Enter Room 1 Dimensions: ";
  cin >> l;
  cin >> w;
  cin >> h;
 
  Room R1(l, w, h);
 
  cout << "\nEnter Room 2 Dimensions: ";
  cin >> l;
  cin >> w;
  cin >> h;
 
  Room R2(l, w, h);  
 
  cout << "\tRoom 1 Area: " << R1.calculate_area() << " sq units" << endl;
  cout << "\tRoom 1 Volume: " << R1.calculate_volume() <<" cube units" << endl;
 
  cout << "\n";
 
  cout << "\tRoom 2 Area: " << R1.calculate_area() << " sq units" << endl;
  cout << "\tRoom 2 Volume: " << R1.calculate_volume() << " cube units" << endl;
 
 
}
