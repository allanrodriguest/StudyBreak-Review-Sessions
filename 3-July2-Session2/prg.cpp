#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "IntArray.h"
using namespace std;
void PrnIntArray(IntArray X) {
   for (unsigned int i = 0; i < X.size(); i++) {
  //    cout << X.getElem(i) << endl;
      cout << X[i] << endl;
   }
}

int main() {
   IntArray A(5);
   IntArray B(3);
   unsigned int i;
   int val = 0;
   for (i = 0; i < 4; i++) {
//      A.getElem(i) = (val += 10);
      A[i] = (val += 10);
   }
   PrnIntArray(A);
   B = A;
   for (i = 0; i < B.size(); i++) {
//      cout << B.getElem(i) << endl;
      cout << B[i]<< endl;
   }
   return 0;
}