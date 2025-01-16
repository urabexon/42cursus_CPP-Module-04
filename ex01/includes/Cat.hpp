/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:10:49 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/16 18:52:16 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

// Animalクラスから継承し、Catクラスを作成する
class Cat : public Animal {
	public:
		Cat();                           // コンストラクタ
		Cat(const Cat &copy);            // コピーコンストラクタ
		Cat& operator=(const Cat &copy); // 代入演算子のオーバーロード
		~Cat();                          // デストラクタ
		
		// アクション定義
		void makeSound() const;          // 鳴き声
		Brain *getBrain() const;         // 脳の情報を取得する
		
	private:
		Brain *_brain; //🐈の指向を管理するBrainクラスのポインタ
};

#endif
