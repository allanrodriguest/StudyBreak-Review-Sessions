#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
class IntArray {
   int* m_array = nullptr;
   unsigned int m_size;
public:
   IntArray(unsigned int size = 0);
   IntArray(const IntArray& I);
   IntArray& operator=(const IntArray& I);
   unsigned int size()const;
   void resize(unsigned int newsize);
   ~IntArray();
   int& operator[](unsigned int index);
   int& getElem(unsigned int index);
};


#endif