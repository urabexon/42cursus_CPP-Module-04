/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:10:49 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 19:55:10 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();                           // コンストラクタ
		Cat(const Cat &copy);            // コピーコンストラクタ
		Cat& operator=(const Cat &copy); // 代入演算子のオーバーロード
		~Cat();                          // デストラクタ
		
		// アクション定義
		void makeSound() const;          // 鳴き声
		Brain *getBrain() const;

	private:
		Brain *_brain;
};

#endif
