#ifndef ARRAY_HPP
# define ARRAY_HPP

template<class T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(Array const &src);

		Array const & operator=(Array const &rhs);
		Array const & operator[](int n);

		unsigned int size() const ;

	private:
		unsigned int	_size;
		T				*_array;

};

#endif