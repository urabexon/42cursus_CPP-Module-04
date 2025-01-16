/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:10:52 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/16 18:51:43 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

// Animalクラスから継承し、Dogクラスを作成する
class Dog : public Animal {
	public:
		Dog();                           // コンストラクタ
		Dog(const Dog &copy);            // コピーコンストラクタ
		Dog& operator=(const Dog &copy); // 代入演算子のオーバーロード
		~Dog();                          // デストラクタ

		// アクション定義
		void makeSound() const;          // 鳴き声
		Brain *getBrain() const;         // 脳の情報を取得する

	private:
		Brain *_brain; //🐶の指向を管理するBrainクラスのポインタ
};

#endif
