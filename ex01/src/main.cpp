/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:32:49 by pvong             #+#    #+#             */
/*   Updated: 2023/11/14 13:58:58 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ClapTrap tom("Tom");
    ClapTrap jerry("Jerry");
    ScavTrap tuffy("Tuffy");
    ScavTrap testCopy(tuffy);
    ScavTrap testEqual;

    testEqual = tuffy;

    MY_SEP();
    tom.attack("Jerry");
    jerry.takeDamage(tom.getAtk());
    jerry.beRepaired(1);
    MY_SEP();
    tuffy.attack("Jerry");
    jerry.takeDamage(tuffy.getAtk());
    tuffy.guardGate();
    tuffy.guardGate();
    tuffy.guardGate();
    MY_SEP();
    return (0);
}
