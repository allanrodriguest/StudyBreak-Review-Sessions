#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Car {
   char makeModel[41];
   int year;
   double fuel = 0;
   double weight;
public:
   Car(int year, const char* makeModel,double theWeight ) {
      setYear(year);
      setMM(makeModel);
      weight = theWeight;
   }
   const Car& display()const {
      cout << makeModel << " " << year << endl;
      return *this;
   }
   Car& setYear(int year) {
      this->year = year;
      return *this;
   }
   void fillTank(double value) {
      fuel += value;
   }
   Car& setMM(const char* mm) {
      strcpy(makeModel, mm);
      return *this;
   }
   double totalWeight()const {
      return fuel + weight;
   }
};


void setYear(Car& theCar) {
   int theYear;
   cout << "Please enter the year of the car: ";
   cin >> theYear;
   theCar.setYear(theYear);
}

void enterGasStation(Car& thecar) {

}

void setYear(Car* carPtr) {
   int theYear;
   cout << "Please enter the year of the car: ";
   cin >> theYear;
   carPtr->setYear(theYear);
}

void displayCar(const Car& theCar) {
   cout << "The car make mode and year: " << endl;
   theCar.display();
}

int main() {
   Car C(2019, "Honda Accord", 23.45);
   
   setYear(C);

   C.display();

   setYear(&C);

   C.display();

   return 0;
}