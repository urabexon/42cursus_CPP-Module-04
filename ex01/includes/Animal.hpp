/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:10:44 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 19:24:02 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();                              // コンストラクタ
		Animal(const Animal &copy);            // コピーコンストラクタ
		Animal& operator=(const Animal &copy); // 代入演算子のオーバーロード
		virtual ~Animal();                     // デストラクタ

		// アクション定義
		virtual void makeSound() const;        // 鳴き声
		std::string getType() const;           // ゲッター

	protected: // protectedに変更して、派生クラスからアクセス可能にする
		std::string _type;                     // 属性
};

#endif
