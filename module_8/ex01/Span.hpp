/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:41:17 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/27 13:41:18 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(SPAN_HPP)
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::vector<int> spans;

public:
    Span();
    Span(unsigned int);
    Span(const Span &);
    Span &operator=(const Span &);
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    class notEnoughElemenentException : public std::exception
    {
    public:
        const char *what(void) const _NOEXCEPT;
    };
    class tooMuchElementException : public std::exception
    {
    public:
        const char *what(void) const _NOEXCEPT;
    };
    void fillSpans(std::vector<int> &tmp);
    ~Span();
};

#endif // SPAN_HPP
