/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:52:52 by pvong             #+#    #+#             */
/*   Updated: 2023/11/14 17:11:23 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main(void) {
    ClapTrap tom("Tom");
    DiamondTrap mike("Mike");
    DiamondTrap testCopy(mike);
    DiamondTrap testEqual;

    testEqual = mike;
    MY_SEP();
    mike.whoAmI();
    mike.attack("Tom");
    tom.takeDamage(mike.ScavTrap::getAtk());
    MY_SEP();
    return (0);
}
