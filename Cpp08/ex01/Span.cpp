#include "Span.hpp"

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::~Span()
{

}

Span::Span(const Span &source){
	*this = source;
}

Span& Span::operator=(const Span &source){
	this->N = source.N;
	this->numbers = source.numbers;
	return *this;
}

void    Span::addNumber(int number)
{
    if (this->numbers.size() < this->N)
        this->numbers.push_back(number);
    else
        throw Span::VectorIsFullException();
}

int Span::shortestSpan()
{
    if (this->numbers.size() <= 1)
        throw Span::VectorIsEmptyException();
    std::vector<int> temp = this->numbers;
    std::sort(temp.begin(), temp.end());
    int k = temp[1] - temp[0];
    for (int i = 1; i < (int)temp.size() - 1; i++)
    {
        if ((temp[i + 1] - temp[i]) < k)
            k = temp[i + 1] - temp[i];
    }
    temp.clear();
    return (k);
}

int	Span::longestSpan()
{
    if (this->numbers.size() <= 1)
        throw Span::VectorIsEmptyException();
    std::vector<int> temp = this->numbers;
    std::sort(temp.begin(), temp.end());
    int k = *(temp.end() - 1) - *(temp.begin());
    temp.clear();
    return (k);
}

void    Span::addNumbers(int numbers)
{
    if ((unsigned int)numbers > this->N)
		throw Span::VectorIsFullException();
	this->numbers.resize(numbers);
	std::vector<int>::iterator begin;
	srand(time(NULL));
	for (begin = this->numbers.begin(); begin < this->numbers.end(); begin++){
		*begin = (rand() % 100) + ((rand() % 100)  * (rand() % 100));
		numbers--;
		if (rand() % 2 == 1)
			*begin *= -1;
	}
}

std::vector<int> Span::getNumbers()
{
    return (this->numbers);
}
const char* Span::VectorIsFullException::what() const throw()
{
	return ("There is no enough space");
}

const char * Span::VectorIsEmptyException::what() const throw()
{
	return ("No span can be found");
}