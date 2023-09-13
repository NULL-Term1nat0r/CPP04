/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:04:54 by estruckm             #+#    #+#             */
/*   Updated: 2023/09/13 11:04:54 by estruckm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.h"
#include "Dog.hpp"

// Implement class methods here

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->brain_attribute = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog constructor with type called" << std::endl;
	this->brain_attribute = new Brain();
}

Dog::Dog(const Dog &other)
{
	*this = other;
	this->brain_attribute = NULL;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain_attribute;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this == &other)
		return *this;
	if(this->brain_attribute != NULL)
		delete this->brain_attribute;
	this->_type = other.getType();
	this->brain_attribute = new Brain(*other.brain_attribute);
	std::cout << "Dog copy assignment constructor called" << std::endl;
	return *this;
}


void Dog::makeSound() const {
	std::cout << "dog makes wau wau...\n";
}

void Dog::setIdeas(int index, std::string idea) {
	this->brain_attribute->setIdeas(index, idea);
}

std::string Dog::getIdeas(int index) {
	return this->brain_attribute->getIdeas(index);
}
