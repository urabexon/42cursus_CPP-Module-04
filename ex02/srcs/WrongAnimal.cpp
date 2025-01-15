/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:30:48 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 21:36:54 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// コンストラクタ
WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

// コピーコンストラクタ
WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}

// 代入演算子のオーバーロード
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy) {
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

// デストラクタ
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

// 鳴き声
void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound!!" << std::endl;
}

// ゲッター
std::string WrongAnimal::getType() const {
	return _type;
}
