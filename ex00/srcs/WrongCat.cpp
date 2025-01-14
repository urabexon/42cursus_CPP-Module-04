/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:41:31 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/14 22:43:36 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// コンストラクタ
WrongCat::WrongCat() {
	std::cout << "WrongCat constructor called" << std::endl;
	_type = "WrongCat";
}

// コピーコンストラクタ
WrongCat::WrongCat(const WrongCat &copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

// 代入演算子のオーバーロード
WrongCat& WrongCat::operator=(const WrongCat &copy) {
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

// デストラクタ
WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

// 間違った🐈の鳴き声アクション
void WrongCat::makeSound() const {
	std::cout << "(WrongCat) Meowwwww!" << std::endl;
}
