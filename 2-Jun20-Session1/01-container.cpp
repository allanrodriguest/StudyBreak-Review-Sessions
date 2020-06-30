#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Container {
   double m_capacity;
   char m_unit[21];
   double m_value = 0.0;
public:
   Container(double capacity, const char* unit = "liters") :m_capacity(capacity) {
      strncpy(m_unit, unit, 20);
      m_unit[20] = 0; // make sure it is null terminated if theUnit is longer than 20 chars
   }
   void fill(double value) {
      if (value > m_capacity) 
         m_value = m_capacity;
      else
         m_value = value;
   }
   void add(double value) {
      if (value + m_value > m_capacity) {
         m_value = m_capacity;
      }
      else {
         m_value += value;
      }
   }
   ostream& display(ostream& ostr = std::cout)const {
      return ostr << m_value << "/" << m_capacity << " " << m_unit << endl;
   }
   istream& read(istream& istr = std::cin) {
      double value;
      cout << "value to fill: ";
      istr >> value;
      fill(value);
      cout << "Unit: ";
      istr >> m_unit;
      return istr;
   }
};

/*
  int i = 12;  // initializtion
   int j;
   j = 12;     // setting
*/


int main() {
   Container C(2.5);
   C.display();
   C.fill(1.2);
   C.display();
   C.add(0.5);
   C.display();
   return 0;
}