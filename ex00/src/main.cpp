/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:30:24 by pvong             #+#    #+#             */
/*   Updated: 2023/11/13 14:32:11 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(void) {
    ClapTrap tom("Tom");
    ClapTrap jerry("Jerry");

    MY_SEP();
    tom.attack("Jerry");
    jerry.takeDamage(tom.getAtk());
    jerry.beRepaired(1);
    MY_SEP();
    return (0);
}

// int main(void) {
//     ClapTrap tom("Tom");
//     ClapTrap jerry("Jerry");

//     MY_SEP();
//     tom.attack("Jerry");
//     jerry.takeDamage(10);
//     jerry.beRepaired(1);
//     jerry.beRepaired(1);
//     jerry.beRepaired(1);
//     jerry.beRepaired(1);
//     jerry.beRepaired(1);
//     jerry.beRepaired(1);
//     jerry.beRepaired(1);
//     jerry.beRepaired(1);
//     jerry.takeDamage(10);
//     jerry.beRepaired(1);
//     jerry.beRepaired(1);
//     jerry.beRepaired(1);
//     jerry.beRepaired(1);
//     jerry.beRepaired(1);
//     MY_SEP();
//     return (0);
// }