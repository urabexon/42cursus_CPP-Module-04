/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:11:09 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/16 18:54:49 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// コンストラクタ
Dog::Dog() {
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

// コピーコンストラクタ
Dog::Dog(const Dog &copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

// 代入演算子のオーバーロード
Dog& Dog::operator=(const Dog &copy) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &copy) {
		Animal::operator=(copy);
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

// デストラクタ
Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

// 🐶の鳴き声アクション
void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}

// 脳の情報を取得する関数
Brain *Dog::getBrain() const {
	return _brain;
}
