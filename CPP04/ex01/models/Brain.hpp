#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain&);
    Brain& operator=(const Brain&);
    ~Brain();
    const std::string* getIdeas() const;
};
#endif