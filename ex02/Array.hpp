#ifndef ARRAY_HPP
# define ARRAY_HPP

template<class T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(Array const &src);

		Array & operator=(Array const &rhs);
		T& operator[](unsigned int n);

		unsigned int size() const ;

	private:
		T				*_array;
		unsigned int	_size;

};

# include "Array.tpp"

#endif