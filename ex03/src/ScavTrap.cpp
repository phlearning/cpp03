/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:52:56 by pvong             #+#    #+#             */
/*   Updated: 2023/11/14 17:04:30 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : _guard(false) {

    if (SHOWMSG) {
        std::cout << COLOR("ScavTrap default constructor called: ", GREEN) << COLOR(this->_name, CYAN) << std::endl;
    }
    this->_hp = 100;
    this->_ep = 50;
    this->_atk = 20;
    this->_myHp = this->_hp;
    this->_myEp = this->_ep;
    this->_myAtk = this->_atk;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _guard(false) {

    this->_hp = 100;
    this->_ep = 50;
    this->_atk = 20;
    this->_myHp = this->_hp;
    this->_myEp = this->_ep;
    this->_myAtk = this->_atk;
    if (SHOWMSG) {
        std::cout << "My " << COLOR("ScavTrap", BOLDGREEN) << " constructor called: " << COLOR(this->_name, GREEN) << " {";
        displayStats(false);
        std::cout << "}" << std::endl;
    }
}

ScavTrap::~ScavTrap(void) {

    if (SHOWMSG) {
        std::cout << COLOR("ScavTrap", BOLDRED) << " destructor called: " << COLOR(this->_name, RED) << std::endl;
    }
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src), _guard(src._guard) {

    this->_hp = 100;
    this->_ep = 50;
    this->_atk = 20;
    this->_myHp = this->_hp;
    this->_myEp = this->_ep;
    this->_myAtk = this->_atk;
    if (SHOWMSG) {
        std::cout << GREEN << "ScavTrap Copy constructor called." << RESET << " {";
        displayStats(false);
        std::cout << "}" << std::endl;
    }
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {

    this->_name = other._name;
    this->_hp = other._hp;
    this->_ep = other._ep;
    this->_atk = other._atk;
    this->_guard = other._guard;
    this->_myHp = this->_hp;
    this->_myEp = this->_ep;
    this->_myAtk = this->_atk;
    if (SHOWMSG) {
        std::cout << GREEN << "ScavTrap Copy assignment operator called." << RESET << " {";
        displayStats(false);
        std::cout << "}" << std::endl;
    }
    return (*this);
}

void ScavTrap::attack(const std::string &target) {

    if (this->_hp == 0) {
        std::cout << "ScavTrap " << COLOR(this->_name, CYAN) << " is " << COLOR("dead.", CYAN) << " He cannot move or attack." << std::endl;
        return ;
    }
    if (this->_ep > 0) {
        std::cout << "ScavTrap " << COLOR(this->_name, CYAN) << " attacks " << COLOR(target, CYAN) << ", causing " << COLOR(this->_atk, CYAN) << " points of damage!" << std::endl;
        this->_ep -= 1;
    } else {
        std::cout << "ScavTrap " << COLOR(this->_name, CYAN) << " has no more energy points left." << std::endl;
    }

    return;
}

void ScavTrap::guardGate(void) {
    
    if (this->_hp == 0) {
        std::cout << "ScavTrap " << COLOR(this->_name, CYAN) << " is " << COLOR("dead.", CYAN) << " He cannot do any action." << std::endl;
        return ;
    }
    if (this->_guard == false) {
        if (this->_ep == 0) {
            std::cout << "ScavTrap " << COLOR(this->_name, CYAN) << " has no more energy points left." << std::endl;
            return ;
        }
        std::cout << "ScavTrap " << COLOR(this->_name, CYAN) << " is in " << COLOR("Gate keeper mode", CYAN) << "." << std::endl;
        this->_ep -= 1;
        this->_guard = true;
    } else {
        std::cout << "ScavTrap " << COLOR(this->_name, CYAN) << " is in " << COLOR("normal mode", BOLDWHITE) << "." << std::endl;
        this->_guard = false;
    }
}