#include <Weapon.hpp>

std::string const& Weapon::getType()
{
    return this->type;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}
Weapon::Weapon(std::string Weapon)
{
    this->type = Weapon;
}
Weapon::Weapon()
{
}