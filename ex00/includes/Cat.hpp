/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:41:11 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/16 18:17:21 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

// Animalクラスから継承し、Catクラスを作成する
class Cat : public Animal {
	public:
		Cat();                           // コンストラクタ
		Cat(const Cat &copy);            // コピーコンストラクタ
		Cat& operator=(const Cat &copy); // 代入演算子のオーバーロード
		~Cat();                          // デストラクタ
		
		// アクション定義
		void makeSound() const;          // 鳴き声
};

#endif
