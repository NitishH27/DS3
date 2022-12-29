#include <iostream>
using namespace std  ;

const int SIZE = 7; 

int modulo(int number) {
  return number % SIZE;
}

void insert(int arr[], int number) {
  int j = modulo(number);
  if (arr[j] == 0) {
    arr[j] = number;
  }
  else {
    for (int h = 0; h < SIZE; h++) {
      if (arr[h] == 0) {
        arr[h] = number;
        return;
      }
    }
  }
  
}

int collision(int arr[], int j) {
  for (int h = j + 1; h < SIZE; h++) {
    if (arr[h] == 0) {
      return h;
    }
  }
  return -1;
}
void search(int arr[], int number) {
  int j = number % SIZE;
  if (arr[j] == number) {
       cout << "Element found at index " << j <<    endl;
    return;
  }
  else {
    for (int h = 0; h < SIZE; h++) {
      if (arr[h] == number) {
           cout << "Element found at index " << h <<    endl;
        return;
      }
    }
  }
     cout << "Error: Element not found." <<    endl;
}
void display(int arr[]) {
     cout << "Array: ";
  for (int i = 0; i < SIZE; i++) {
       cout << arr[i] << " ";
  }
     cout <<    endl;
}

int main() {
  int arr[SIZE] = {0}; 
  int choice; 
  int number; 

  cout<<"Size of array is 7 so maximum elements to beentered is 7 \n";
  do {
    
       cout << "(1) Insert element\n(2) Search for elementn\n(3) Display array\n(4) Exit" <<    endl;
       cout << "Enter your choice: ";
       cin >> choice;

    switch (choice) {
      case 1: 
           cout << "Enter the number to be inserted: ";
           cin >> number;
        insert(arr, number);
        break;
      case 2: 
           cout << "Enter the number to search for: ";
           cin >> number;
        search(arr, number);
        break;
      case 3: 
        display(arr);
        break;
      case 4: 
        break;
      default: 
           cout << "Error: Invalid choice." <<    endl;
        break;
    }
  } while (choice != 4);

  return 0;
}
