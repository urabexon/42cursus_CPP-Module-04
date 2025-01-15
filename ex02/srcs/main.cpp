/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:30:28 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/15 22:46:46 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {
	// Animalクラスは抽象クラスのためインスタンス化できない
    // const Animal* animal = new Animal(); // エラー

    //const Animal* dog = new Dog();
    //const Animal* cat = new Cat();

    //dog->makeSound();
    //cat->makeSound();

    //delete dog;
    //delete cat;

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();

	delete j;
	delete i;
	
	return 0;
}
