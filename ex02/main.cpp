/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:41:54 by mmarinel          #+#    #+#             */
/*   Updated: 2022/10/08 17:16:44 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

# include <iostream>
# include <string>
# include <stdlib.h>
# include <time.h>

# define ARRAY_MAX_SIZE 10
# define SONS_OF_FEANOR 7

int main( void )
{
	srand(time(NULL));
	{//*............................. std::string ................CASE
		Array<std::string>		first_array = Array<std::string>();
		Array<std::string>		second_array = Array<std::string>(ARRAY_MAX_SIZE);
		const char*				feanor_sons[SONS_OF_FEANOR] = {"Maedhros", "Maglor", "Celegorm", "Caranthir", "Curufin", "Amrod", "Amras"};
		
		try
		{
			std::cout << "first el of first_array is: " << first_array[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << RED << "first_array is empty" << RESET << std::endl;
			std::cout << "size: " << first_array.size() << std::endl;
		}
		
		//* FILLING second_array
		for ( size_t i = 0; i < ARRAY_MAX_SIZE; i++ ) {
			second_array[i] = feanor_sons[rand() % SONS_OF_FEANOR];
		}
		//* ............................
		
		std::cout << BOLDGREEN << "\nCopying second_array in first_array" << RESET << std::endl;
		first_array = second_array;
	
		std::cout << std::endl << YELLOW << "Printing first_array" << RESET << std::endl;
		std::cout << first_array << std::endl;
		std::cout << std::endl << YELLOW << "Printing second_array" << RESET << std::endl;
		std::cout << second_array << std::endl;
		
	
		std::cout << std::endl << BOLDGREEN << "Modifying first el of first_array" << RESET << std::endl;
		first_array[0] = "42";
		std::cout << std::endl << YELLOW << "Printing first_array" << RESET << std::endl;
		std::cout << first_array << std::endl;
		std::cout << std::endl << YELLOW << "Printing second_array" << RESET << std::endl;
		std::cout << second_array << std::endl;
		
		std::cout << std::endl << BOLDGREEN << "Modifying last el of second_array" << RESET << std::endl;
		second_array[ARRAY_MAX_SIZE - 1] = "0";
		std::cout << std::endl << YELLOW << "Printing first_array" << RESET << std::endl;
		std::cout << first_array << std::endl;
		std::cout << std::endl << YELLOW << "Printing second_array" << RESET << std::endl;
		std::cout << second_array << std::endl;
	}
	{//*............................. std::string ................CASE
		Array<int>		first_array = Array<int>();
		Array<int>		second_array = Array<int>(ARRAY_MAX_SIZE);
		int				dec_radix[ARRAY_MAX_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		
		try
		{
			std::cout << "first el of first_array is: " << first_array[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << RED << "first_array is empty" << RESET << std::endl;
			std::cout << "size: " << first_array.size() << std::endl;
		}
		
		//* FILLING second_array
		for ( size_t i = 0; i < ARRAY_MAX_SIZE; i++ ) {
			second_array[i] = dec_radix[i];
		}
		//* ............................
		
		std::cout << BOLDGREEN << "\nCopying second_array in first_array" << RESET << std::endl;
		first_array = second_array;
	
		std::cout << std::endl << YELLOW << "Printing first_array" << RESET << std::endl;
		std::cout << first_array << std::endl;
		std::cout << std::endl << YELLOW << "Printing second_array" << RESET << std::endl;
		std::cout << second_array << std::endl;
		
	
		std::cout << std::endl << BOLDGREEN << "Modifying first el of first_array" << RESET << std::endl;
		first_array[0] = 42;
		std::cout << std::endl << YELLOW << "Printing first_array" << RESET << std::endl;
		std::cout << first_array << std::endl;
		std::cout << std::endl << YELLOW << "Printing second_array" << RESET << std::endl;
		std::cout << second_array << std::endl;
		
		std::cout << std::endl << BOLDGREEN << "Modifying last el of second_array" << RESET << std::endl;
		second_array[ARRAY_MAX_SIZE - 1] = 0;
		std::cout << std::endl << YELLOW << "Printing first_array" << RESET << std::endl;
		std::cout << first_array << std::endl;
		std::cout << std::endl << YELLOW << "Printing second_array" << RESET << std::endl;
		std::cout << second_array << std::endl;
	}
	
	std::cout << std::endl;
	return 0;
}
