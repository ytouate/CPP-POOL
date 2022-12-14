/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:43:55 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/10 19:30:00 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
private:
    int fixedPointNumberValue;
    static const int    nbFractions;
public:
    Fixed();
    Fixed(Fixed const &);
    Fixed(const int n);
    Fixed(const float n);
    int		toInt(void) const;
    int		getRawBits(void) const;
    float	toFloat(void) const;
    Fixed&	operator = (Fixed const &);
    void	setRawBits(int const raw);
    ~Fixed();
};
    std::ostream&	operator<<(std::ostream &os, const Fixed &);

#endif