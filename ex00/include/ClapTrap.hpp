/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:30:27 by pvong             #+#    #+#             */
/*   Updated: 2023/11/10 16:47:59 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

#ifndef SHOWMSG
#define SHOWMSG 0
#endif

class ClapTrap {

private:
    unsigned int _ep;
    unsigned int _hp;
    unsigned int _atk;

public:
    ClapTrap(void);
    ClapTrap(ClapTrap const &src);
    ~ClapTrap(void);

    ClapTrap &operator=(ClapTrap const &src);

    // Member functions
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int anount);
}

#endif