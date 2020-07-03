#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Container {
   double m_capacity;
   char m_unit[21];
   double m_value = 0.0;
public:
   ~Container() {
    //  display() << " is dead" << endl;
   }
   void setCapacity(double cap) {
      if (cap < 0) {
         m_capacity = 0.0;
      }
      else {
         m_capacity = cap;
      }
   }
   bool isEmpty()const {
      return m_value < 0.000001;
   }
   bool safeEmptyState()const {
      return m_capacity < 0.000001;
   }
   Container(double capacity = 0.0, const char* unit = "liters")  {
      setCapacity(capacity);
      strncpy(m_unit, unit, 20);
      m_unit[20] = 0; // make sure it is null terminated if theUnit is longer than 20 chars
   }
   bool operator!()const {
      return safeEmptyState();
   }
   Container& operator++() {
      return operator+=(1.0);
   }
   Container& operator--() {
      if (m_value - 1.0 < 0.0) {
         m_value = 0.0;
      }
      else {
         m_value -= 1.0;
      }
      return *this;
   }
   Container& operator=(double value) {
      if (value > m_capacity)
         m_value = m_capacity;
      else
         m_value = value;
      return *this;
   }

   Container& operator+=(double value) {
      if (value + m_value > m_capacity) {
         m_value = m_capacity;
      }
      else {
         m_value += value;
      }
      return *this;
   }

   ostream& display(ostream& ostr = std::cout)const {
      if (safeEmptyState()) {
         ostr << "Invalid Container";
      }
      else if (isEmpty()) {
         cout << "Empty Contianer";
      }
      else {
         ostr << m_value << "/" << m_capacity << " " << m_unit;
      }
      return ostr;
   }

   istream& read(istream& istr = std::cin) {
      double value;
      cout << "value to fill: ";
      istr >> value;
      operator=(value);
      cout << "Unit: ";
      istr >> m_unit;
      return istr;
   }
};


int main() {
   Container  D;
   if (!D) {
      cout << "Can't work with invalid containers";
   }
   else {
      D.display() << endl;
   }
   D.setCapacity(3);
   D.display() << endl;
   D = 1.2;
   D.display() << endl;
   ++D;
   D.display() << endl;
   ++D;
   D.display() << endl;
   --D;
   D.display() << endl;
   return 0;
}