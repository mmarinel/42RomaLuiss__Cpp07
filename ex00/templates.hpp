/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:59:42 by mmarinel          #+#    #+#             */
/*   Updated: 2022/10/07 11:09:41 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_H
#define TEMPLATES_H

template <typename T>
void swap( T& val_1, T& val_2) {
	T temp;

	temp = val_1;
	val_1 = val_2;
	val_2 = temp;
}

template <typename T>
T min( T val_1, T val_2) {
	return (val_1 < val_2 ? val_1 : val_2 );
}

template <typename T>
T max( T val_1, T val_2) {
	return (val_1 > val_2 ? val_1 : val_2 );
}

#endif /* TEMPLATES_H */
