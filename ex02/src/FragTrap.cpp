/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:59:24 by pvong             #+#    #+#             */
/*   Updated: 2023/11/13 16:55:56 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(void) {

    if (SHOWMSG) {
        std::cout << "FragTrap default constructor called: " << COLOR(this->_name, GREEN) << std::endl;
    }    
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {

    if (SHOWMSG) {
        std::cout << "My " << COLOR("FragTrap", BOLDGREEN) << " constructor called: " << COLOR(name, GREEN) << " {";
        displayStats(false);
        std::cout << "}" << std::endl;
    }
}

FragTrap &FragTrap::operator=(FragTrap const &other) {

    if (SHOWMSG) {
        std::cout << GREEN << "ScavTrap Copy assignment operator called." << RESET << std::endl;
    }
    ClapTrap::operator=(other);
    return (*this);
}

FragTrap::~FragTrap(void) {

    if (SHOWMSG) {
        std::cout << COLOR("FragTrap", BOLDRED) << " destructor called: " << COLOR(this->_name, RED) << std::endl;
    }    
}

void FragTrap::highFivesGuys(void) {

    std::cout << "FragTrap " << COLOR(this->_name, CYAN) << ": High fives ? 🙌" << std::endl;
}

void FragTrap::attack(const std::string &target) {

    if (this->_ep > 0) {
        std::cout << "FragTrap " << COLOR(this->_name, CYAN) << " attacks " << COLOR(target, CYAN) << ", causing " << COLOR(this->_atk, CYAN) << " points of damage!" << std::endl;
        this->_ep -= 1;
    } else {
        std::cout << "FragTrap " << COLOR(this->_name, CYAN) << " has no more energy points left." << std::endl;
    }

    return;
}