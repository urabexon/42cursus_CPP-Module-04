/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:30:44 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 22:30:18 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// コンストラクタ
Cat::Cat() : AAnimal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	_brain = new Brain();
}

// コピーコンストラクタ
Cat::Cat(const Cat &copy) : AAnimal(copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

// 代入演算子のオーバーロード
Cat& Cat::operator=(const Cat &copy) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy) {
		AAnimal::operator=(copy);
		delete _brain;
		_brain = new Brain(*copy._brain);
	}	
	return *this;
}

// デストラクタ
Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

// 🐈の鳴き声アクション
void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain() const {
	return _brain;	
}
