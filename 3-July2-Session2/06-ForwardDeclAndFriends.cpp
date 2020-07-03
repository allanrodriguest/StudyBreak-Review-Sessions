#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Array;  // forward declaration

class Element {

   Element(int value = 0);

   friend Array;
};

class Array {
   Element* E;
public:
   Array(int size) {
      E = new Element[size];
   }

};



int main() {
   Array A(10);
   
   return 0;
}