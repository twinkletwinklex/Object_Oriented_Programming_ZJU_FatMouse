# OOP7
Given the declaration of class template Vetor below, write the bodies of the functions, and a main() to test all the facilities Vector provides.

## template 
	class Vector {
	public:
		Vector();		// create an empty vector
		Vector(int size);	// create a vector of size elements
		Vector(const Vector& r);	// copy ctor
		virtual ~Vector();
		T& operator[](int index) : throw(IndexOutofBounds);
			// return the specified element, throws exception when index <0 or >=m_nSize
		int size();		// return the size of the vector
		int inflate(int addSize);	// expand the storage to m_nSize+addSize, return the new size
	private:
		T *m_pElements;
		int m_nSize;
	};
