/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:52:40 by pvong             #+#    #+#             */
/*   Updated: 2023/11/14 17:03:19 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap {

private:
    bool _guard;

protected:
   unsigned int _myHp;
   unsigned int _myMaxHp;
   unsigned int _myEp;
   unsigned int _myAtk;

public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &src);
    ScavTrap &operator=(ScavTrap const &other);
    ~ScavTrap(void);

    void guardGate(void);
    void attack(const std::string &target);

};


#endif
