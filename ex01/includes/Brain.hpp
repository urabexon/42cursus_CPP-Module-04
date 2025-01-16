/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:10:47 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/16 18:53:38 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

// 動物の指向を表すクラス
class Brain {
	public:
		Brain();                             // コンストラクタ
		Brain(const Brain &copy);            // コピーコンストラクタ
		Brain& operator=(const Brain &copy); // 代入演算子のオーバーロード
		~Brain();                            // デストラクタ
		
		// アクション定義
		std::string getIdea(int index) const;             // ゲッター(アイデア取得)
		void setIdea(int index, const std::string &idea); // セッター(アイデア設定)
		
	private:
		std::string	_ideas[100]; // 100個のアイデアを保持
};


#endif
