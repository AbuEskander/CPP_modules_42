#include <Fixed.hpp>
#include <cmath>
#include <limits>
Fixed::Fixed()
    : fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float input)
{
    std::cout << "Float Constructor Called" << std::endl;
    const float intMax = std::numeric_limits<int>::max() / static_cast<float>(1 << fractionalBits);
    const float intMin = std::numeric_limits<int>::min() / static_cast<float>(1 << fractionalBits);

    if (input > intMax / (1 << fractionalBits) || input < intMin / (1 << fractionalBits)) {
        throw std::overflow_error("Float value out of range");
    }
    this->fixedPointValue = roundf(input * 256.0f);
}

Fixed::Fixed(const int input)
{
    std::cout << "Int Constructor Called" << std::endl;
    this->fixedPointValue = input << fractionalBits;
}

Fixed::Fixed(const Fixed& old)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old;
}
Fixed& Fixed::operator=(const Fixed& old)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointValue = old.getRawBits();
    return *this;
}

float Fixed::toFloat() const
{
    static const float scale = 1.0f / (1 << fractionalBits);
    return this->fixedPointValue * scale;
}

int Fixed::toInt() const
{
    return fixedPointValue >> fractionalBits;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
    return fixedPointValue;
}
void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}
