/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:59:24 by pvong             #+#    #+#             */
/*   Updated: 2023/11/14 17:04:49 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(void) {

    this->_hp = 100;
    this->_ep = 100;
    this->_atk = 30;
    this->_myHp = this->_hp;
    this->_myEp = this->_ep;
    this->_myAtk = this->_atk;
    if (SHOWMSG) {
        std::cout << "FragTrap default constructor called: " << COLOR(this->_name, GREEN) << std::endl;
    }    
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

    this->_hp = 100;
    this->_ep = 100;
    this->_atk = 30;
    this->_myHp = this->_hp;
    this->_myEp = this->_ep;
    this->_myAtk = this->_atk;
    if (SHOWMSG) {
        std::cout << "My " << COLOR("FragTrap", BOLDGREEN) << " constructor called: " << COLOR(name, GREEN) << " {";
        displayStats(false);
        std::cout << "}" << std::endl;
    }
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {

    this->_myHp = this->_hp;
    this->_myEp = this->_ep;
    this->_myAtk = this->_atk;
    if (SHOWMSG) {
        std::cout << GREEN << "FragTrap copy constructor called." << RESET << " {";
        displayStats(false);
        std::cout << "}" << std::endl;
    }
}

FragTrap &FragTrap::operator=(FragTrap const &other) {

    this->_name = other._name;
    this->_hp = other._hp;
    this->_ep = other._ep;
    this->_atk = other._atk;
    this->_myHp = this->_hp;
    this->_myEp = this->_ep;
    this->_myAtk = this->_atk;
    if (SHOWMSG) {
        std::cout << GREEN << "FragTrap Copy assignment operator called." << RESET << " {";
        displayStats(false);
        std::cout << "}" << std::endl;
    }
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

    if (this->_hp == 0) {
        std::cout << "FragTrap " << COLOR(this->_name, CYAN) << " is " << COLOR("dead.", CYAN) << " He cannot move or attack." << std::endl;
        return ;
    }
    if (this->_ep > 0) {
        std::cout << "FragTrap " << COLOR(this->_name, CYAN) << " attacks " << COLOR(target, CYAN) << ", causing " << COLOR(this->_atk, CYAN) << " points of damage!" << std::endl;
        this->_ep -= 1;
    } else {
        std::cout << "FragTrap " << COLOR(this->_name, CYAN) << " has no more energy points left." << std::endl;
    }

    return;
}