#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &source);
        ScalarConverter& operator=(const ScalarConverter &source);

        static  void    convert(std::string arg);
        static  bool    is_char(std::string arg);
        static  char    convert_char(std::string arg);
        static  void    char_to_int(char arg);
        static  void    char_to_float(char arg);
        static  void    char_to_double(char arg);
        static  bool    is_int(std::string arg);
        static  int     convert_int(std::string arg);
        static  void	int_to_char(int arg);
		static	void	int_to_float(int arg);
		static	void	int_to_double(int arg);
		static	bool	is_double(std::string arg);
		static	double	convert_double(std::string arg);
		static	void	double_to_char(double arg);
		static	void	double_to_int(double arg);
		static	void	double_to_float(double arg);
		static	bool	is_float(std::string arg);
		static	float	convert_float(std::string arg);
		static	void	float_to_char(float arg);
		static	void	float_to_int(float arg);
		static	void	float_to_double(float arg);
        static  int     pseudoCheck(std::string arg);

};

#endif