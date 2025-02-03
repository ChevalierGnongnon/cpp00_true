/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:51:06 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/03 17:11:11 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	print_up(char *str)
{
	char 	conv;
	int		j;
	
	j = 0;
	for(j; str[j]; j++)
	{
		if (!std::isalpha(str[j]))
			std::cout << str[j];
		else
		{
			conv = std::toupper(str[j]);
			std::cout << conv;
		}
	}
}

int main(int argc, char *argv[])
{
	int i = 1;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else if (argc > 1) {
		for (i; argv[i]; i++) {
			print_up(argv[i]);
			if (argv[i + 1] != NULL)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}