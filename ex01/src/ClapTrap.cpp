/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:32:44 by pvong             #+#    #+#             */
/*   Updated: 2023/11/14 13:43:21 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void) : _name("DEFAULT_NAME"), _hp(10), _ep(10), _atk(0) {

    if (SHOWMSG) {
        std::cout << GREEN << "Default constructor called." << RESET << std::endl;
    }
    this->_maxHp = this->_hp;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _atk(0) {

    if (SHOWMSG) {
        std::cout << "My constructor called: " << COLOR(name, GREEN) << std::endl;
    }
    this->_maxHp = this->_hp;
}

ClapTrap::~ClapTrap(void) {

    if (SHOWMSG) {
        std::cout << "Destructor called: " << COLOR(this->_name, RED) << std::endl;
    }
}

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name), _hp(src._hp), _maxHp(src._maxHp), _ep(src._ep), _atk(src._atk) {

    if (SHOWMSG) {
        std::cout << GREEN << "ClapTrap copy constructor called." << std::endl;
    }
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other) {

    if (SHOWMSG) {
        std::cout << GREEN << "ClapTrap copy assignment operator called." << RESET << std::endl;
    }
    this->_name = other._name;
    this->_hp = other._hp;
    this->_maxHp = other._maxHp;
    this->_ep = other._ep;
    this->_atk = other._atk;
    return (*this);
}

void ClapTrap::attack(const std::string &target) {

    if (this->_hp == 0) {
        std::cout << "ClapTrap " << COLOR(this->_name, CYAN) << " is " << COLOR("dead.", CYAN) << " He cannot move or attack." << std::endl;
        return ;
    }
    if (this->_ep > 0) {
        std::cout << "ClapTrap " << COLOR(this->_name, CYAN) << " attacks " << COLOR(target, CYAN) << ", causing " << COLOR(this->_atk, CYAN) << " points of damage!" << std::endl;
        this->_ep -= 1;
    } else {
        std::cout << "ClapTrap " << COLOR(this->_name, CYAN) << " has no more energy points left." << std::endl;
    }

    return;
}

void ClapTrap::takeDamage(unsigned int amount) {

    if (this->_hp == 0) {
        std::cout << COLOR(this->_name, CYAN) << " is already " << COLOR("destroyed", CYAN) << "." << std::endl;
        return ;
    }
    std::cout << COLOR(this->_name, CYAN) << " has taken " << COLOR(amount, CYAN) << " damage. ";
    if ((long) this->_hp -  (long) amount < 0) {
        this->_hp = 0;
    } else {
        this->_hp -= amount;
    }
    if (this->_hp <= 0) {
        std::cout << COLOR(this->_name, CYAN) << " has been " << COLOR("destroyed", CYAN) << "." << std::endl;
    } else {
        std::cout << COLOR(this->_name, CYAN) << " has " << COLOR(this->_hp, CYAN) << " left." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->_hp + amount <= this->_maxHp) {
        if (this->_ep == 0) {
            std::cout << COLOR(this->_name, CYAN) << " has no " << COLOR("energy left", CYAN) << "." << std::endl;
            return ;
        } else {
            this->_ep -= 1;
        }
        this->_hp += amount;
        std::cout << COLOR(this->_name, CYAN) << " was repaired: " << COLOR(amount, CYAN) << " hp. Current hp: " << COLOR(this->_hp, CYAN) << std::endl;
    } else {
        std::cout << COLOR(this->_name, CYAN) << " is already " << COLOR("fulled hp", CYAN) << ". No repair needed." << std::endl;
    }
}

void ClapTrap::displayStats(bool newline) {
    std::cout << "HP: " << COLOR(this->_hp, CYAN) << "   EP: " << COLOR(this->_ep, CYAN) << "   Atk: " << COLOR(this->_atk, CYAN);
    if (newline == true) {
        std::cout << std::endl;
    }
}

std::string ClapTrap::getName(void) {
    return (this->_name);
}

unsigned int ClapTrap::getAtk(void) {

    return (this->_atk);
}

unsigned int ClapTrap::getHp(void) {

    return (this->_hp);
}