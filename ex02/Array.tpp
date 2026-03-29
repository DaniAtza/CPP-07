/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 12:53:11 by datienza          #+#    #+#             */
/*   Updated: 2026/03/29 13:44:15 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>
Array<T>::Array() : _elements(new T[0]()), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(Array const & src) : _elements(NULL), _size(0) {
	
	*this = src;
}

template <typename T>
Array<T>::~Array() {
	delete[] _elements;
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & rhs) {
	if (this != &rhs) {

		delete[] _elements;
		
		this->_size = rhs._size;
		this->_elements = new T[_size]();
		
		for (unsigned int i = 0; i < _size; i++) {
			this->_elements[i] = rhs._elements[i];
		}
	}
	return *this;
}

template <typename T>
T & Array<T>::operator[](unsigned int index) {

	if (index >= this->_size) {
		throw OutOfBoundsException();
	}
	return _elements[index];
}

template <typename T>
T const & Array<T>::operator[](unsigned int index) const {
	if (index >= this->_size) {
		throw OutOfBoundsException();
	}
	return this->_elements[index];
}

template <typename T>
unsigned int Array<T>::size() const {

	return this->_size;
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
	return "Error: Index is out of bounds";
}

#endif
