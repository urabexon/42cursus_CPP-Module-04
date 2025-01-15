/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:30:39 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 21:32:24 by hurabe           ###   ########.fr       */
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
