/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:56:18 by pvong             #+#    #+#             */
/*   Updated: 2023/11/14 17:05:31 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap {

protected:
    unsigned int _myHp;
    unsigned int _myMaxHp;
    unsigned int _myEp;
    unsigned int _myAtk;

public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const &src);
    FragTrap &operator=(FragTrap const &other);
    ~FragTrap(void);

    void highFivesGuys(void);
    void attack(const std::string &target);
};

#endif