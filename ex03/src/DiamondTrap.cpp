/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:19:24 by pvong             #+#    #+#             */
/*   Updated: 2023/11/14 17:06:29 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap() {
    this->_name = this->ClapTrap::_name;
    this->ClapTrap::_name = this->_name + "_clap_name";
    this->_hp = FragTrap::_myHp;
    this->_ep = ScavTrap::_myEp;
    this->_atk = FragTrap::_myAtk;
    if (SHOWMSG) {
        std::cout << "DiamondTrap default constructor called: " << COLOR(this->_name, GREEN) << " / " << COLOR(this->ClapTrap::_name, GREEN) << " {";
        displayStats(false);
        std::cout << "}" << std::endl;
    }
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
    
    this->_name = name;
    this->ClapTrap::_name = name + ("_clap_name");
    this->_hp = FragTrap::_myHp;
    this->_ep = ScavTrap::_myEp;
    this->_atk = FragTrap::_myAtk;
    if (SHOWMSG) {
        std::cout << "My " << COLOR("DiamondTrap", BOLDGREEN) << " constructor called: " << COLOR(name, GREEN) << " {";
        displayStats(false);
        std::cout << "}" << std::endl;
    }
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), FragTrap(src), ScavTrap(src) {

    this->_hp = FragTrap::_myHp;
    this->_ep = ScavTrap::_myEp;
    this->_atk = FragTrap::_myAtk;
    if (SHOWMSG) {
        std::cout << GREEN << "DiamondTrap copy constructor called." << RESET << " {";
        displayStats(false);
        std::cout << "}" << std::endl;
    }
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other) {

    this->_name = other._name;
    this->ClapTrap::_name = other.ClapTrap::_name;
    this->_hp = other._hp;
    this->_ep = other._ep;
    this->_atk = other._atk;
    if (SHOWMSG) {
        std::cout << GREEN << "DiamondTrap Copy assignment operator called." << RESET << " {";
        displayStats(false);
        std::cout << "}" << std::endl;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap(void) {

    if (SHOWMSG) {
        std::cout << COLOR("DiamondTrap", BOLDRED) << " destructor called: ";
        if (!this->_name.empty()) {
            std::cout << COLOR(this->_name, RED) << std::endl;
        } else if (!this->ClapTrap::_name.empty()) {
            std::cout << COLOR(this->ClapTrap::_name, RED) << std::endl;
        }
    }    
}

void DiamondTrap::whoAmI(void) {
    std::cout << COLOR("Who Am I?:", BOLDWHITE) << " Am I " << COLOR(this->_name, CYAN) << " or " << COLOR(this->ClapTrap::_name, BLUE) << " ?" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {

    ScavTrap::attack(target);
}