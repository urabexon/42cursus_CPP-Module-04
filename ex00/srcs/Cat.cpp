/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:41:23 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/14 22:08:40 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// コンストラクタ
Cat::Cat() {
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
}

// コピーコンストラクタ
Cat::Cat(const Cat &copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

// 代入演算子のオーバーロード
Cat& Cat::operator=(const Cat &copy) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

// デストラクタ
Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

// 🐈の鳴き声アクション
void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
