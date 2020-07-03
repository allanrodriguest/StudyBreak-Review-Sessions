#include "IntArray.h"
IntArray::IntArray(unsigned int size) : m_size(size) {
   if (m_size == 0) m_size = 1;
   m_array = new int[m_size];
}
void IntArray::resize(unsigned int newsize) {
   int* temp = new int[newsize];
   unsigned int i;
   for (i = 0; i < m_size && i < newsize; i++) {
      temp[i] = m_array[i];
   }
   delete[] m_array;
   m_size = newsize;
   m_array = temp;
}
IntArray::IntArray(const IntArray& I) {
   operator=(I);
}
IntArray& IntArray::operator=(const IntArray& I) {
   delete[] m_array;
   m_array = new int[m_size = I.size()];
   for (unsigned int i = 0; i < m_size; i++) {
      m_array[i] = I.m_array[i];
   }
   return *this;
}
int& IntArray::operator[](unsigned int index) {
   return getElem(index);
}
int& IntArray::getElem(unsigned int index) {
   if (index >= m_size) {
      resize(m_size + 5);
   }
   return m_array[index];
}
unsigned int IntArray::size()const {
   return m_size;
}
IntArray::~IntArray() {
   delete[] m_array;
}