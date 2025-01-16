/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:41:13 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/16 18:17:37 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

// Animalクラスから継承し、Dogクラスを作成する
class Dog : public Animal {
	public:
		Dog();                           // コンストラクタ
		Dog(const Dog &copy);            // コピーコンストラクタ
		Dog& operator=(const Dog &copy); // 代入演算子のオーバーロード
		~Dog();                          // デストラクタ

		// アクション定義
		void makeSound() const;          // 鳴き声
};

#endif
