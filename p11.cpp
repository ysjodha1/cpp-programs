// WAP to find the average of the array elements
#include <iostream>
using namespace std;
 
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}
 
void compressArray(int array[], int size, int evenCount) {
  int temp, k = 0;
 
  // To shift the even numbers on the left size
  for (int i = 0; i < size; i++) {
    if (array[i] % 2 == 0) {
      temp = array[i];
      array[i] = array[k];
      array[k] = temp;
      k++;
    }
  }
 
  // To set the remaining odd elements in the array to 0
  for (int i = evenCount; i < size; i++) {
    array[i] = 0;
  }
}
 
int transferEvenNumbers(int array[], int size, int evens[]) {
 
  int k = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] % 2 == 0) {
      evens[k] = array[i];
      k++;
    }
  }
  return k;
}
int main() {
  int size;
 
  cout << "Enter size of the array: ";
  cin >> size;
 
  int array[size], sum = 0;
 
  cout << "Enter Array elements: " << endl;
  for (int i = 0; i < size; i++) {
    cin >> array[i];
    sum += array[i];
  }
 
  cout << "\nEntered Array: ";
  printArray(array, size);
  // Average of the array
  cout << "\nAverage: " << (double(sum) / size) << endl;
 
 
  // Even
  int evens[size];
  int k = transferEvenNumbers(array, size, evens);
  cout << "Even Numbers: ";
  printArray(evens, k);
 
  // compress array
  int evenCount = 0;
  int n = size;
  for (int i = 0; i < n; i++) {
    if (array[i] % 2 == 0) evenCount++;
  }
 
  compressArray(array, size, evenCount);
  cout << "\nCompressed Array: ";
  printArray(array, size);
 
  return 0;
}
