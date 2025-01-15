/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:10:52 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 19:59:09 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog();                           // コンストラクタ
		Dog(const Dog &copy);            // コピーコンストラクタ
		Dog& operator=(const Dog &copy); // 代入演算子のオーバーロード
		~Dog();                          // デストラクタ

		// アクション定義
		void makeSound() const;          // 鳴き声
		Brain *getBrain() const;

	private:
		Brain *_brain;
};

#endif
