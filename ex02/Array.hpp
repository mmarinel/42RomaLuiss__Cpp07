/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:13:03 by mmarinel          #+#    #+#             */
/*   Updated: 2022/10/08 15:59:48 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include "../colors.hpp"

# include <iostream>
# include <string>

template <typename T>
class Array
{
	public:
		// Constructors
		Array() {
			std::cout << GREEN << "Array Default Constructor called" << RESET << std::endl;
			
			this->__array = nullptr;
			this->__size = 0;
		}
		Array( size_t _size ) {
			std::cout << GREEN << "Array fields Constructor called" << RESET << std::endl;

			this->__array = new T[_size];
			this->__size = _size;
		}
		Array(const Array &copy) : __array(nullptr) {
			std::cout << GREEN << "Array Copy Constructor called" << RESET << std::endl;

			*this = copy;
		}
		
		// Destructor
		~Array() {
			std::cout << RED << "<<Array Destroyed>>" << std::endl;
		}
		
		// Operators
		const Array&	operator=(const Array &assign) {
			delete[] this->__array;
			this->__array = new T[copy.__size];
			this->__size = copy.__size;

			for (size_t i = 0; i < this->__size; i++)
				this->__array[i] = copy.__array[i];//* T has overload the '=' for real-deepcopy to happen!
		}
		T&			operator[]( int index ) {
			if ( index < 0 || index >= this->__size)
				throw (std::exception());
			else
				return (this->__array[index]);
		}
		
		// Getters / Setters
		size_t size() const {
			return (this->__size);
		}
		
	private:
		size_t	__size;
		T*		__array;
		
};

template <typename T>
std::ostream&	operator<<(std::ostream& stream, const Array<T>& array) {
	for (size_t i = 0; i < array.size(); i++) {
		std::cout << "array[" << i << "] = " << array[i] << std::endl;
	}
	return (stream);
}

#endif