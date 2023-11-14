/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:03:41 by pvong             #+#    #+#             */
/*   Updated: 2023/11/14 15:09:18 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

private:
    std::string _name;

public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    ~DiamondTrap(void);
    DiamondTrap(DiamondTrap const &src);

    DiamondTrap &operator=(DiamondTrap const &other);

    void whoAmI(void);
    void attack(const std::string &target);

};

#endif