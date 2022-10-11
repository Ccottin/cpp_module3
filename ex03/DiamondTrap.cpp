/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:09:34 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 05:16:53 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : _className = "DiamondTrap", _name("Default") {
	std::cout << "A New DiamondTrap arrives!" << std::endl;
}


 DiamondTrap::DiamondTrap(std::string name) : _className = "DiamondTrap", _name(name) {
 	std::cout << "A New DiamondTrap" << name << "arrives!" << std::endl;
 	_name = name;
 }

 DiamondTrap::~DiamondTrap(void) {
 	std::cout << "DiamondTrap " << _name << "is gone" << std::endl;
 }

DiamondTrap::DiamondTrap(const &d) DiamondTrap(_name, {
	std::cout << 
}
