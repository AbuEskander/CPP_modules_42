#ifndef DOG_HPP
#define DOG_HPP

#include <Animal.hpp>
#include <Brain.hpp>
class Dog : public Animal {
private:
    Brain* brain;

public:
    Dog();
    Dog(const Dog&);
    Dog& operator=(const Dog&);
    ~Dog();

    void makeSound() const;
    const Brain* getBrain() const;
};

#endif