/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:10:54 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 19:27:25 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();                                   // コンストラクタ
		WrongAnimal(const WrongAnimal &copy);            // コピーコンストラクタ
		WrongAnimal& operator=(const WrongAnimal &copy); // 代入演算子のオーバーロード
		virtual ~WrongAnimal();                          // デストラクタ
		
		// アクション定義
		void makeSound() const;                          // 鳴き声
		std::string getType() const;                     // ゲッター
		
	protected: // protectedに変更して、派生クラスからアクセス可能にする
		std::string _type;                               // 属性
};

#endif
