/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:30:41 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 21:31:58 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();                                // コンストラクタ
		WrongCat(const WrongCat &copy);            // コピーコンストラクタ
		WrongCat& operator=(const WrongCat &copy); // 代入演算子のオーバーロード
		~WrongCat();                               // デストラクタ

		// アクション定義
		void makeSound() const;                    // 鳴き声
};

#endif