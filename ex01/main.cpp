/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:11:11 by estruckm             #+#    #+#             */
/*   Updated: 2023/09/13 11:11:11 by estruckm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.h"
#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define RED_TEXT(text) "\x1b[31m" << text << "\x1b[0m"
#define GREEN_TEXT(text) "\x1b[32m" << text << "\x1b[0m"
#define YELLOW_TEXT(text) "\x1b[33m" << text << "\x1b[0m"
#define BLUE_TEXT(text) "\x1b[34m" << text << "\x1b[0m"
#define MAGENTA_TEXT(text) "\x1b[35m" << text << "\x1b[0m"

int main(){

	int number = 10;
	Cat cat_array[number / 2];
	Dog dog_array[number / 2];

	for(int i = 0;i < number;i++){
		if (i < number / 2){
			cat_array[i] = Cat("cat");
			cat_array[i].setIdeas(i, "ultimate cat smartness");
			std::cout << RED << "brain_attribute cat: " << cat_array[i].getIdeas(i) << RESET << std::endl;
		}
		if (i >= number / 2){
			dog_array[i - number / 2] = Dog("dog");
			dog_array[i - number / 2].setIdeas(i, "ultimate dog smartness");
			std::cout << GREEN << "brain_attribute dog: " << dog_array[i - number / 2].getIdeas(i) << RESET << std::endl;
		}
	}
	return 0;
}
