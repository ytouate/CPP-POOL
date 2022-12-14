/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:56:37 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/27 13:40:19 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(EASY_FIND_HPP)
#define EASY_FIND_HPP
#include <algorithm>

class notFoundException : public std::exception
{
private:
public:
    const char *what( void ) const _NOEXCEPT;
};

template <typename T>
typename T::iterator easyfind(T x, int n)
{
    typename T::iterator it = std::find(x.begin(), x.end(), n);
    if (it == x.end())
        throw(notFoundException());
    return it;
}

#endif // EASY_FIND_HPP
