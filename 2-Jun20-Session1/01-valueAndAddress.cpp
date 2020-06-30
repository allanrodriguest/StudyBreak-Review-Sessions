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


Car setYear(Car theCar) {
   int theYear;
   cout << "Please enter the year of the car: ";
   cin >> theYear;
   theCar.setYear(theYear);
   return theCar;
}

void setYear(Car* carPtr) {
   int theYear;
   cout << "Please enter the year of the car: ";
   cin >> theYear;
   carPtr->setYear(theYear);
}


int main() {
   Car C(2019, "Tesla Model 3");
   
   C = setYear(C);

   C.display();

   setYear(&C);

   C.display();

   return 0;
}