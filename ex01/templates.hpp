/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:56:42 by mmarinel          #+#    #+#             */
/*   Updated: 2022/10/08 12:57:14 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_H
#define TEMPLATES_H

# include <unistd.h>

template <typename T, typename F>
void	iter( T* array, size_t len, F map ) {
	for ( size_t i = 0; i < len; i++ ) {
		map(array[i]);
	}
}

template <typename T>
void	elDouble( T& el ) {
	el += el;
}

template <typename T>
int	elDouble( T& el ) {
	el += el;
	return (el);
}

#endif /* TEMPLATES_H */
