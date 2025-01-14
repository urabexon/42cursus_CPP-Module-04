/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:41:26 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/14 22:14:53 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// コンストラクタ
Dog::Dog() {
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
}

// コピーコンストラクタ
Dog::Dog(const Dog &copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

// 代入演算子のオーバーロード
Dog& Dog::operator=(const Dog &copy) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

// デストラクタ
Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

// 🐶の鳴き声アクション
void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
