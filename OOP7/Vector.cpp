#include "Vector.h"
#include <iostream>
using namespace std;

template <class T>
Vector<T>::Vector()
{
	m_nSize = 1;
	m_pElements = new T[m_nSize];
}

template <class T>
Vector<T>::Vector(int size)
{
	m_nSize = size;
	m_pElements = new T[m_nSize];
}

template <class T>
Vector<T>::Vector(const Vector &r)
{
	m_nSize = r.m_nSize;
	m_pElements = new T[m_nSize];

	memcpy(m_pElements, r.m_pElements, sizeof(T) * m_nSize);
}

template <class T>
Vector<T>::~Vector()
{
	delete [] m_pElements;
	m_nSize = 0;
}

template <class T>
int Vector<T>::size()
{
	return m_nSize;
}

template <class T>
int Vector<T>::inflate(int addSize)
{
	T* temp = m_pElements;
	m_pElements = new T[m_nSize + addSize];
	memcpy(m_pElements, temp, sizeof(T) * m_nSize);
	delete [] temp;
	m_nSize += addSize;
}

template <class T>
T& Vector<T> :: operator[] (int index) throw(out_of_range)
{
	if (index < 0 || index >= m_nSize)
		throw out_of_range("Vector[] out of range");
	return m_pElements[index];
}

int main()
{
	return 0;
}
