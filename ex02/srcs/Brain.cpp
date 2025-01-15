/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:30:43 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 21:38:32 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// コンストラクタ
Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

// コピーコンストラクタ
Brain::Brain(const Brain &copy) {
	std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

// 代入演算子のオーバーロード
Brain& Brain::operator=(const Brain &copy) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &copy) {
		for (int i = 0; i < 100; i++) {
			if (copy._ideas[i].length() > 0)
				this->_ideas[i] = copy._ideas[i];
		}
	}
	return *this;
}

// デストラクタ
Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

// ゲッター
std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < 100)
		return _ideas[index];
	return NULL;
}

// セッター
void Brain::setIdea(int index, const std::string &idea) {
	if (index >= 0 && index < 100)
		_ideas[index] = idea;
}
