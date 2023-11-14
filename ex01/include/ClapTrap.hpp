/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:32:38 by pvong             #+#    #+#             */
/*   Updated: 2023/11/14 13:29:28 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

#ifndef SHOWMSG
#define SHOWMSG 1
#endif

#define MSG_SEP "============================"

#ifndef MYCOLORS
#define MYCOLORS
#define RESET "\033[0m"
#define BLACK "\033[30m"              /* Black */
#define RED "\033[31m"                /* Red */
#define GREEN "\033[32m"              /* Green */
#define YELLOW "\033[33m"             /* Yellow */
#define BLUE "\033[34m"               /* Blue */
#define MAGENTA "\033[35m"            /* Magenta */
#define CYAN "\033[36m"               /* Cyan */
#define WHITE "\033[37m"              /* White */
#define BOLDBLACK "\033[1m\033[30m"   /* Bold Black */
#define BOLDRED "\033[1m\033[31m"     /* Bold Red */
#define BOLDGREEN "\033[1m\033[32m"   /* Bold Green */
#define BOLDYELLOW "\033[1m\033[33m"  /* Bold Yellow */
#define BOLDBLUE "\033[1m\033[34m"    /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m" /* Bold Magenta */
#define BOLDCYAN "\033[1m\033[36m"    /* Bold Cyan */
#define BOLDWHITE "\033[1m\033[37m"   /* Bold White */
#endif

// Macro Functions
#define COLOR(text, color) color << text << RESET
#define MY_SEP() std::cout << COLOR(MSG_SEP, BOLDBLACK) << std::endl


class ClapTrap {

protected:
    std::string _name;
    unsigned int _hp;
    unsigned int _maxHp;
    unsigned int _ep;
    unsigned int _atk;

public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &src);
    ~ClapTrap(void);

    ClapTrap &operator=(ClapTrap const &src);

    // Member functions
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int anount);
    void displayStats(bool newline);
    std::string getName(void);
    unsigned int getAtk(void);
    unsigned int getHp(void);
};

#endif