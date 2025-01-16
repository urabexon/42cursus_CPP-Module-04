/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:41:21 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/16 18:09:53 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// コンストラクタ
Animal::Animal() : _type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
}

// コピーコンストラクタ
Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

// 代入演算子のオーバーロード
Animal& Animal::operator=(const Animal &copy) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

// デストラクタ
Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

// 鳴き声
void Animal::makeSound() const {
	std::cout << "Animal Sound!!" << std::endl;
}

// ゲッター
std::string Animal::getType() const {
	return _type;
}
