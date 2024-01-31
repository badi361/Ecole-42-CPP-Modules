#include "AForm.hpp"

AForm::AForm() : name("default"), to_sign_grade(150), to_execute_grade(150)
{
    this->is_signed = false;
}

AForm::AForm(std::string name, int to_sign_grade, int to_execute_grade) : name(name), to_sign_grade(to_sign_grade), to_execute_grade(to_execute_grade)
{
    if (to_sign_grade > 150 || to_execute_grade > 150)
        throw AForm::GradeTooHighException();
    else if (to_sign_grade < 1 || to_execute_grade < 1)
        throw AForm::GradeTooLowException();
    this->is_signed = false;
}

AForm::~AForm()
{

}

AForm::AForm(const AForm &cpy) : name(cpy.name), to_sign_grade(cpy.to_sign_grade), to_execute_grade(cpy.to_execute_grade)
{
    this->is_signed = cpy.is_signed;
    *this = cpy;
}

AForm& AForm::operator=(const AForm& cpy)
{
    this->is_signed = cpy.is_signed;
    return (*this);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char* AForm::AlreadySignedException::what() const throw()
{
    return ("Is already signed");
}

std::string AForm::get_name() const
{
    return (this->name);
}

int AForm::get_sign_grade() const
{
    return (this->to_sign_grade);
}

int AForm::get_exec_grade() const
{
    return (this->to_execute_grade);
}

bool AForm::get_sign() const
{
    return (this->is_signed);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (this->get_sign())
        throw AForm::AlreadySignedException();
    if (bureaucrat.getGrade() > this->to_sign_grade)
        throw AForm::GradeTooLowException();
    else
        this->is_signed = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& Aform)
{
    os << "Name: " << Aform.get_name() << "\nSign: " << Aform.get_sign() << "\nGradeSign: " << Aform.get_sign_grade() << "\nGradeExec: " << Aform.get_exec_grade() << std::endl;
	return os;
}