#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;



int main() {
   char str[20] = "abcdefghijklmnlop";
   str[5] = 65;
   str[6] = 0;
   cout << str << endl;
   cout << &str[7] << endl;
   str[10] = '\0';
   cout << &str[7] << endl;
   return 0;
}