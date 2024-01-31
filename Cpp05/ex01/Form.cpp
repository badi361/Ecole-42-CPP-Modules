#include "Form.hpp"

Form::Form() : name("default"), to_sign_grade(150), to_execute_grade(150)
{
    this->is_signed = false;
}

Form::Form(std::string name, int to_sign_grade, int to_execute_grade) : name(name), to_sign_grade(to_sign_grade), to_execute_grade(to_execute_grade)
{
    if (to_sign_grade > 150 || to_execute_grade > 150)
        throw Form::GradeTooHighException();
    else if (to_sign_grade < 1 || to_execute_grade < 1)
        throw Form::GradeTooLowException();
    this->is_signed = false;
}

Form::~Form()
{

}

Form::Form(const Form &cpy) : name(cpy.name), to_sign_grade(cpy.to_sign_grade), to_execute_grade(cpy.to_execute_grade)
{
    this->is_signed = cpy.is_signed;
    *this = cpy;
}

Form& Form::operator=(const Form& cpy)
{
    this->is_signed = cpy.is_signed;
    return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char* Form::AlreadySignedException::what() const throw()
{
    return ("Is already signed");
}

std::string Form::get_name() const
{
    return (this->name);
}

int Form::get_sign_grade() const
{
    return (this->to_sign_grade);
}

int Form::get_exec_grade() const
{
    return (this->to_execute_grade);
}

bool Form::get_sign() const
{
    return (this->is_signed);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (this->get_sign())
        throw Form::AlreadySignedException();
    if (bureaucrat.getGrade() > this->to_sign_grade)
        throw Form::GradeTooLowException();
    else
        this->is_signed = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Name: " << form.get_name() << "\nSign: " << form.get_sign() << "\nGradeSign: " << form.get_sign_grade() << "\nGradeExec: " << form.get_exec_grade() << std::endl;
	return os;
}