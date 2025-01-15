/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:10:47 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 20:36:51 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	public:
		Brain();                             // コンストラクタ
		Brain(const Brain &copy);            // コピーコンストラクタ
		Brain& operator=(const Brain &copy); // 代入演算子のオーバーロード
		virtual ~Brain();                    // デストラクタ
		
		// アクション定義
		std::string getIdea(int index) const;             // ゲッター
		void setIdea(int index, const std::string &idea); // セッター
		
	protected:
		std::string	_ideas[100];
};


#endif
