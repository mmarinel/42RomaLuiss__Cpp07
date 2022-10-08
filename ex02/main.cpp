/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:41:54 by mmarinel          #+#    #+#             */
/*   Updated: 2022/10/08 16:05:55 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

# include <iostream>
# include <string>

# define ARRAY_MAX_SIZE 10

int main( void )
{
	Array	first_array = Array<std::string>();
	Array	second_array = Array<std::string>(ARRAY_MAX_SIZE);
	
	try
	{
		std::cout << "first el of first_array is: " << first_array[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "first_array is empty" << RESET << std::endl;
		std::cout << "size: " << first_array.size() << std::endl;
	}
	for (size_t i = 0; i < ARRAY_MAX_SIZE; i++) {
		
	}
	std::cout << YELLOW << "Copying second_array in first_array" << RESET << std::endl;
	first_array = second_array;

	std::cout << std::endl << YELLOW << "Printing first_array" << RESET << std::endl;
	std::cout << first_array << std::endl;
	std::cout << std::endl << YELLOW << "Printing second_array" << RESET << std::endl;
	std::cout << second_array << std::endl;
	

	std::cout << std::endl << YELLOW << "Modifying first el of first_array" << RESET << std::endl;
	first_array[0] = "42";
	std::cout << std::endl << YELLOW << "Printing first_array" << RESET << std::endl;
	std::cout << first_array << std::endl;
	std::cout << std::endl << YELLOW << "Printing second_array" << RESET << std::endl;
	std::cout << second_array << std::endl;
	
	std::cout << std::endl << YELLOW << "Modifying last el of second_array" << RESET << std::endl;
	first_array[ARRAY_MAX_SIZE - 1] = "0";
	std::cout << std::endl << YELLOW << "Printing first_array" << RESET << std::endl;
	std::cout << first_array << std::endl;
	std::cout << std::endl << YELLOW << "Printing second_array" << RESET << std::endl;
	std::cout << second_array << std::endl;
	
	std::cout << second_array << std::endl;
	return 0;
}
