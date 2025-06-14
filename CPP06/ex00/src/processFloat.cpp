#include <ScalarConverter.hpp>
#include <utils.hpp>

void processFloat(std::string input)
{
    float num = atof(input.c_str());

    if (num < 127 && num >= 0 && input.length() == 1)
    {
        std::cout << "char: " << '\'';
        if (std::isprint(static_cast<char>(num)))
            std::cout << static_cast<char>(num);
        else
            std::cout << "Non displayable";
        std::cout << '\'' << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;

    if (!std::isinf(num) && !std::isnan(num))
        std::cout << "int: " << static_cast<int>(num) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;

    std::cout << "float: " << std::fixed << std::setprecision(1) << num << 'f' << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(num) << std::endl;
}

void processDouble(std::string input)
{
    double num = atof(input.c_str());

    if (num < 127 && num >= 0 && input.length() == 1)
    {
        std::cout << "char: " << '\'';
        if (std::isprint(static_cast<char>(num)))
            std::cout << static_cast<char>(num);
        else
            std::cout << "Non displayable";
        std::cout << '\'' << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;

    if (!std::isinf(num) && !std::isnan(num))
        std::cout << "int: " << static_cast<int>(num) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;

    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << 'f' << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << num << std::endl;
}