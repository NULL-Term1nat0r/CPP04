/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:04:56 by estruckm             #+#    #+#             */
/*   Updated: 2023/09/13 11:04:56 by estruckm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.h"
#include "Cat.hpp"
#include "../../ex00/Cat.hpp"

// Implement class methods here

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->brain_attribute = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat constructor with type called" << std::endl;
	this->brain_attribute = new Brain();
}

Cat::Cat(const Cat &other)
{
	*this = other;
	this->brain_attribute = NULL;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain_attribute;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this == &other)
		return *this;
	if(this->brain_attribute != NULL)
		delete this->brain_attribute;
	this->_type = other.getType();
	this->brain_attribute = new Brain(*other.brain_attribute);
	std::cout << "Cat copy assignment constructor called" << std::endl;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "cat makes meeeooooow...\n";
}

void Cat::setIdeas(int index, std::string idea) {
	this->brain_attribute->setIdeas(index, idea);
}

std::string Cat::getIdeas(int index) {
	return this->brain_attribute->getIdeas(index);
}
