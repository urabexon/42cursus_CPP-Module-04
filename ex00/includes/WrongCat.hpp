/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:41:18 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/16 18:18:03 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

// WrongAnimalクラスから継承し、WrongCatクラスを作成する
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
