/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:04:38 by estruckm             #+#    #+#             */
/*   Updated: 2023/09/13 11:04:38 by estruckm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
  private:
	  std::string _ideas[100];

  public:
	  Brain();
	  Brain(const Brain &other);
	  ~Brain();
	  Brain &operator=(const Brain &other);

	  void setIdeas(int index, std::string idea);
	  std::string getIdeas(int index);
};

#endif
