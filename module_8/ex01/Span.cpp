#include "Span.hpp"

Span::Span() : N(0)
{
    this->spans.reserve(N);
}

Span::Span(unsigned int _N) : N(_N)
{
    this->spans.reserve(N);
}

void Span::addNumber(int n)
{
    if (this->spans.size() >= N)
        throw std::out_of_range("out of range");
    this->spans.insert(this->spans.begin() + this->spans.size(), n);
}

const char * Span::notEnoughElemenentException::what(void) const _NOEXCEPT
{
    return "Not Enough Elements";
}

int Span::shortestSpan( void )
{
    if (this->spans.size() <= 1)
        throw Span::notEnoughElemenentException();
    std::sort(this->spans.begin(), this->spans.end());
    int tmp[this->spans.size()];
    for (size_t i = 0; i < this->spans.size() - 1; i++)
    {
        tmp[i] = std::abs(this->spans[i + 1] - this->spans[i]);
    }
    return *std::min_element(this->spans.begin(), this->spans.end());
}

int Span::longestSpan ( void )
{
    if (this->spans.size() <= 1)
        throw Span::notEnoughElemenentException();
    int min = *std::min_element(this->spans.begin(), this->spans.end());
    int max = *std::max_element(this->spans.begin(), this->spans.end());
    return (max - min);
}

Span::~Span()
{
}