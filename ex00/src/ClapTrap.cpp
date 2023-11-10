/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:30:22 by pvong             #+#    #+#             */
/*   Updated: 2023/11/10 16:58:44 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void) : _hp(10), _ep(10), _atk(0) {
    if (SHOWMSG) {
        std::cout << "Default constructor called." << std::endl;
    }
}

ClapTrap::~ClapTrap(void) {
    if (SHOWMSG) {
        std::cout << "Destructor called." << std::endl;
    }
}

ClapTrap::ClapTrap(ClapTrap const &src) : _hp(src._hp), _ep(src._ep), _atk(src._atk) {
    if (SHOWMSG) {
        std::cout << "Copy constructor called." << std::endl;
    }    
}

ClapTrap &operator=(ClapTrap const &other) {
    if (SHOWMSG) {
        std::cout << "Copy assignment operator called." << std::endl;
    }
    this->_hp = other._hp;
    this->_ep = other._ep;
    this->_atk = other._atk;
    return (*this);
}

// void ClapTrap::attack(const std::string &target)