/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:30:38 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 21:33:58 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
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
