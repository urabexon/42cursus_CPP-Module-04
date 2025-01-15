/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:30:00 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 22:29:05 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
	public:
		AAnimal();                               // コンストラクタ
		AAnimal(const std::string &type);        // 引数を取るコンストラクタ
		AAnimal(const AAnimal &copy);            // コピーコンストラクタ
		AAnimal& operator=(const AAnimal &copy); // 代入演算子のオーバーロード
		virtual ~AAnimal();                      // デストラクタ

		// アクション定義
		virtual void makeSound() const = 0;      // 鳴き声
		std::string getType() const;             // ゲッター

	protected: // protectedに変更して、派生クラスからアクセス可能にする
		std::string _type;                       // 属性
};

#endif
