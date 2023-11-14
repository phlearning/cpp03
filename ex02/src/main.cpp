/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:52:52 by pvong             #+#    #+#             */
/*   Updated: 2023/11/14 13:57:08 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ClapTrap tom("Tom");
    ClapTrap jerry("Jerry");
    ScavTrap tuffy("Tuffy");
    FragTrap spike("Spike");
    FragTrap testCopy(spike);
    FragTrap testEqual;

    testEqual = testCopy;

    MY_SEP();
    spike.attack("Tuffy");
    tuffy.takeDamage(spike.getAtk());
    spike.highFivesGuys();
    MY_SEP();
    return (0);
}
