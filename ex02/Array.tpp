

#include "Array.hpp"
#include <stdexcept>

template <class T>
Array<T>::Array() : _array(new T[0]()), _size(0) {
}

template <class T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n){
}

template <class T>
Array<T>::~Array() {
	delete[] _array;
}

template <class T>
Array<T>::Array(Array const &src) : _array(new T[src._size]()), _size(src._size){
	for (unsigned int i = 0; i < _size; i++) {
		_array[i] = src._array[i];
	}
}

template <class T> 
Array<T>& Array<T>::operator=(Array const &rhs) {
	if (this != &rhs) {
		if (_array)
			delete[] _array;
		_size = rhs._size;
		if (rhs._array) {
			_array = new T[rhs._size]();
			for (unsigned int i = 0; i < _size; i++) {
				_array[i] = rhs._array[i];
			}
		}
	}
	return *this;
}

template <class T>
T& Array<T>::operator[](unsigned int n) {
	if (n >= _size)
		throw std::out_of_range("Invalid index.");
	return this->_array[n];
}

template <class T>
unsigned int Array<T>::size() const {
	return _size;
}