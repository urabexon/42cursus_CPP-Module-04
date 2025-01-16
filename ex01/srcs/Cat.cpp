/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:11:06 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/16 18:54:31 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// コンストラクタ
Cat::Cat() {
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

// コピーコンストラクタ
Cat::Cat(const Cat &copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

// 代入演算子のオーバーロード
Cat& Cat::operator=(const Cat &copy) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy) {
		Animal::operator=(copy);
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

// 脳の情報を取得する関数
Brain *Cat::getBrain() const {
	return _brain;	
}
