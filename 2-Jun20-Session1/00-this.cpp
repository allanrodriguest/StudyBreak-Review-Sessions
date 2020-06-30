#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Car {
   char makeModel[41];
   int year;

public:
   Car(int year, const char* makeModel) {
      setYear(year);
      setMM(makeModel);
   }
   const Car& display()const {
      cout << makeModel << " " << year << endl;
      return *this;
   }
   Car& setYear(int year) {
      this->year = year;
      return *this;
   }
   Car& setMM(const char* mm) {
      strcpy(makeModel, mm);
      return *this;
   }
};


int main() {
   Car C(2019, "Tesla Model 3");
   C.display();
   C.setYear(2020).display();

   return 0;
}