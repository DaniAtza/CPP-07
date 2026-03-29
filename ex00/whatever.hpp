/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 12:40:46 by datienza          #+#    #+#             */
/*   Updated: 2026/03/29 12:40:48 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>

void swap(T & a, T & b){

	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const & max(T const & a, T const & b){

	if (b >= a)
		return b;
	else
		return a;
}

template <typename T>
T const & min(T const & a, T const & b){

	if (b <= a)
		return b;
	else
		return a;
}

#endif
