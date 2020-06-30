#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

void print(int a) {  
   cout << "Integer: " << a << endl;
}

void print(long l) {  
   cout << "Long: " << l << endl;
}

void print(double d) {
   cout << "Double: " << d << endl;
}




int main() {
   print(123);
   print(123L);
   return 0;
}