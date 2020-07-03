#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "IntArray.h"
using namespace std;
int main() {
   IntArray I(5);
   int i;
   int val = 0;
   for (i = 0; i < 12; i++) {
      I.getElem(i) = (val += 10);
   }
   for (i = 0; i < I.size(); i++) {
      cout << I.getElem(i) << endl;
   }
   cout << I.getElem(123451234);
   return 0;
}