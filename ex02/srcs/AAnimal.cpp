/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:30:42 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 22:29:52 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// コンストラクタ
AAnimal::AAnimal() : _type("AAnimal") {
	std::cout << "AAnimal constructor called" << std::endl;
}

// 引数を取るコンストラクタ
AAnimal::AAnimal(const std::string &type) : _type(type) {
	std::cout << "AAnimal type constructor called: " << type << std::endl;
}

// コピーコンストラクタ
AAnimal::AAnimal(const AAnimal &copy) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}

// 代入演算子のオーバーロード
AAnimal& AAnimal::operator=(const AAnimal &copy) {
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

// デストラクタ
AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

// 鳴き声
void AAnimal::makeSound() const {
	std::cout << "AAnimal Sound!!" << std::endl;
}

// ゲッター
std::string AAnimal::getType() const {
	return _type;
}
