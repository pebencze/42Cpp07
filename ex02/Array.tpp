#include "Array.hpp"

template <class T>
Array<T>::Array() {
	_array = new T[0];
	std::memset(_array, 0, 1);
	_size = 0;
}
template <class T>
Array<T>::Array(unsigned int n) {
	_array = new(n) T;
	_size = n;
}

template <class T>
Array<T>::~Array() {
	delete [] _array;
}

template <class T>
Array<T>::Array(Array const &src) {
	*this = src;
}

template <class T>
Array const & Array<T>::operator=(Array const &rhs) {
	if (this != &src) {
		if (_array)
			delete [] _array;
		_array = new (rhs.size()) T;
		_size = rhs.size();
		for (unsigned int i = 0; i < _size; i++) {
			this[i] = rhs[i];
		}
	}

}
Array const &operator[](int n);

template <class T>
unsigned int Array<T>::size() const ;