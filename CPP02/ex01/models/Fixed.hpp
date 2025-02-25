#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    static const int fractionalBits;
    int fixedPointValue;

public:
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(const Fixed& old);
    Fixed& operator=(const Fixed& old);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;
};

#endif