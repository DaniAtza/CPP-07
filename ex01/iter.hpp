/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 12:41:20 by datienza          #+#    #+#             */
/*   Updated: 2026/03/29 12:41:27 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename Func>

void iter(T *arr, const size_t len, Func f){
	for (size_t i = 0; i < len; i++){
		f(arr[i]);
	}
}

#endif
