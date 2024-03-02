#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
class Span
{
    private:
        unsigned int N;
        std::vector<int> numbers;
    public:
        Span(unsigned int N);
		~Span();
		Span(const Span &source);
		Span& operator=(const Span &source);
        void    addNumber(int number);
		void    addNumbers(int numbers);
		std::vector<int> getNumbers();
        int	shortestSpan();
		int	longestSpan();
        class VectorIsFullException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class VectorIsEmptyException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif