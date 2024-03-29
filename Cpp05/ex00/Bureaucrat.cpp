#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{

}

Bureaucrat::Bureaucrat(std::string name) : name(name), grade(150)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(int grade) : name("default")
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void    Bureaucrat::increment(int n)
{
    if (this->grade - n < 1)
        throw GradeTooHighException();
    else
        this->grade = this->grade - n;
}

void    Bureaucrat::decrement(int n)
{
    if (this->grade + n > 150)
        throw GradeTooLowException();
    else
        this->grade = this->grade + n;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : name(cpy.name), grade(cpy.grade)
{

}

const char* Bureaucrat::GradeTooHighException::what()const throw()
{
    return ("Grade is to High!");
}

const char* Bureaucrat::GradeTooLowException::what()const throw()
{
    return ("Grade is to Low!");
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& bureaucrat)
{
	os<< "Name: "<< bureaucrat.getName() << " Grade: "<< bureaucrat.getGrade() <<std::endl;
	return os;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    this->grade = bureaucrat.grade;
    return (*this);
}
