/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 12:53:11 by datienza          #+#    #+#             */
/*   Updated: 2026/03/29 13:44:15 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array {
private:
	T* _elements;
	unsigned int    _size;

public:
	//Constructors, Destructor & Opertor overloads
	Array();
	Array(Array const & other);
	~Array();
	Array & operator=(Array const & rhs);

 	//Functions
	Array(unsigned int n);
	T & operator[](unsigned int index);
	T const & operator[](unsigned int index) const; 
	unsigned int size() const;

	//Exception class
	class OutOfBoundsException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

# include "Array.tpp"

#endif
