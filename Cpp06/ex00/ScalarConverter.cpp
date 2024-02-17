#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &source)
{
    *this = source;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &source)
{
    (void)source;
    return (*this);
}

void    ScalarConverter::convert(std::string arg)
{
    if (ScalarConverter::is_char(arg) == true)
    {
        char casted = convert_char(arg);
        char_to_int(casted);
        char_to_float(casted);
        char_to_double(casted);
    }
    else if (ScalarConverter::is_int(arg) == true)
    {
        int casted = convert_int(arg);
		int_to_char(casted);
		std::cout << "int: " << casted << std::endl;
		int_to_float(casted);
		int_to_double(casted);
	}
	else if (ScalarConverter::is_double(arg) == true)
	{
		double casted = convert_double(arg);
		double_to_char(casted);
		double_to_int(casted);
		double_to_float(casted);
		if (casted / (int)casted == 1)
			std::cout << "double: " << casted << ".0" << std::endl;
		else
			std::cout << "double: " << casted << std::endl;
	}
	else if (ScalarConverter::is_float(arg) == true)
	{
		float casted = convert_float(arg);
		float_to_char(casted);
		float_to_int(casted);
		if (casted / (int)casted == 1)
			std::cout << "float: " << casted << ".0f" <<  std::endl;
		else
			std::cout << "float: " << casted << "f" <<  std::endl;
		float_to_double(casted);
	}
	else if (!pseudoCheck(arg))
		std::cout << "Wrong Argumant!" << std::endl;
}

bool    ScalarConverter::is_char(std::string arg)
{
    if (arg.size() != 1)
        return (false);
    else if (isdigit(arg[0]) == 1)
        return (false);
    else
        return (true);
}

char    ScalarConverter::convert_char(std::string arg)
{
    char result = static_cast<char>(arg[0]);
    std::cout << "char: '" << result << "'" << std::endl;
    return (result);
}

void    ScalarConverter::char_to_int(char arg)
{
    int number = static_cast<int>(arg);
    std::cout << "int: " << number << std::endl;
}

void    ScalarConverter::char_to_float(char arg)
{
    float number = static_cast<float>(arg);
    std::cout << "float: " << number << ".0f" << std::endl;
}

void    ScalarConverter::char_to_double(char arg)
{
    double number = static_cast<double>(arg);
    std::cout << "double: " << number << ".0" << std::endl;
}

bool    ScalarConverter::is_int(std::string arg)
{
    unsigned long i = 0;
    if (arg[0] == '+' || arg[0] == '-')
        i++;
    while (i < arg.size())
    {
        if (isdigit(arg[i]) == 0)
            return (false);
        i++;
    }
    return (true);
}

int	ScalarConverter::convert_int(std::string arg)
{
	int	result = static_cast<int>(std::stoi(arg));
	return (result);
}

void	ScalarConverter::int_to_char(int arg)
{
	char casted = static_cast<char>(arg);
	if (arg < 0 || arg > 127)
		std::cout << "char: Impossible" << std::endl;
	else if (isprint(casted))
		std::cout << "char: " << casted << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	ScalarConverter::int_to_float(int arg)
{
	float casted = static_cast<float>(arg);
	std::cout << "float: " << casted << ".0f" << std::endl;
}

void	ScalarConverter::int_to_double(int arg)
{
	double casted = static_cast<double>(arg);
	std::cout << "double: " << casted << ".0" << std::endl;
}

bool	ScalarConverter::is_double(std::string arg)
{
	unsigned long i = 0;
	int flag = 0;
	int flag2 = 0;
	if (arg[0] == '+' || arg[0] == '-')
	{
		flag = 1;
		i++;
	}
	while (i < arg.size())
	{
		if (arg[i] == '.' && i == 1 && flag == 1)
			return (false);
		if (isdigit(arg[i]) == 0)
		{
			if (arg[i] == '.' && flag2 < 1)
			{
				flag2 += 1;
				i++;
			}
			else
				return (false);
		}
		else
			i++;
	}
	unsigned long index = arg.find(".");
	if (index == std::string::npos)
		return (false);
	if ((size_t)index == arg.size() - 1 || arg[arg.size() - 1] == 'f')
		return (false);
	return (true);
}

double ScalarConverter::convert_double(std::string arg)
{
	double result = static_cast<double>(stod(arg));
	return (result);
}

void	ScalarConverter::double_to_char(double arg)
{
	char casted = static_cast<char>(arg);
	if (arg < 0 || arg > 127)
		std::cout << "char: Impossible" << std::endl;
	else if (isprint(casted))
		std::cout << "char: " << casted << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	ScalarConverter::double_to_int(double arg)
{
	int number = static_cast<int>(arg);
	std::cout << "int: " << number << std::endl;
}

void	ScalarConverter::double_to_float(double arg)
{
	float number = static_cast<float>(arg);
	if (number / (int)number == 1)
		std::cout << "float: " << number << ".0f" << std::endl;
	else
		std::cout << "float: " << number << "f" << std::endl;
}

bool ScalarConverter::is_float(std::string arg)
{
	unsigned long i = 0;
	int flag = 0;
	int flag2 = 0;
	if (arg[0] == '+' || arg[0] == '-')
	{
		flag = 1;
		i++;
	}
	while (i < arg.size())
	{
		if (arg[i] == '.' && i == 1 && flag == 1)
			return (false);
		if (isdigit(arg[i]) == 0)
		{
			if (arg[i] == '.' && flag2 < 1)
			{
				flag2 += 1;
				i++;
			}
			else if (arg[i] == 'f' && i == arg.size() - 1)
				i++;
			else
				return (false);
		}
		else
			i++;
	}
	unsigned long index = arg.find(".");
	if (index == std::string::npos)
		return (false);
	unsigned long index2 = arg.find("f");
	if (index2 == std::string::npos || (size_t)index2 != arg.size() - 1)
		return (false);
	if ((size_t)index == arg.size() - 1 || arg[arg.size() - 1] != 'f')
		return (false);
	return (true);
}

float	ScalarConverter::convert_float(std::string arg)
{
	float casted = static_cast<float>(stof(arg));
	return (casted);
}

void	ScalarConverter::float_to_char(float arg)
{
	char casted = static_cast<char>(arg);
	if (arg < 0 || arg > 127)
		std::cout << "char: Impossible" << std::endl;
	else if (isprint(casted))
		std::cout << "char: " << casted << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	ScalarConverter::float_to_int(float arg)
{
	int	number = static_cast<int>(arg);
	std::cout << "int: " << number << std::endl;
}

void	ScalarConverter::float_to_double(float arg)
{
	double number = static_cast<double>(arg);
	if (number / (int)number == 1)
		std::cout << "double: " << number << ".0" << std::endl;
	else
		std::cout << "double: " << number << std::endl;
}

int ScalarConverter::pseudoCheck(std::string arg){
	if (arg == "-inf" || arg == "-inff"){
		float f = std::numeric_limits<float>::infinity();
		f *= -1;
		std::cout << "char: " << "Impossible" << std::endl;
		std::cout << "int: " << "Impossible" << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		double d = std::numeric_limits<double>::infinity();
		d *= -1;
		std::cout << "double: " << d << std::endl;
	}
	else if (arg == "+inf" || arg == "+inff"){
		float f = std::numeric_limits<float>::infinity();
		std::cout << "char: " << "Impossible" << std::endl;
		std::cout << "int: " << "Impossible" << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		double d = std::numeric_limits<double>::infinity();
		std::cout << "double: " << d << std::endl;
	}
	else if (arg == "nan" || arg == "nanf"){
		std::cout << "char: " << "Impossible" << std::endl;
		std::cout << "int: " << "Impossible" << std::endl;
		float f = std::numeric_limits<float>::quiet_NaN();
		std::cout << "float: " << f << "f" << std::endl;
		double d = std::numeric_limits<double>::quiet_NaN();
		std::cout << "double: " << d << std::endl;
	}
	else
		return 0;
	return 1;
}