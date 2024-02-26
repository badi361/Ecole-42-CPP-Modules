#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int len;
    public:
        Array()
        {
            this->array = new T[0];
            this->len = 0;
        }
        Array(unsigned int len)
        {
            this->array = new T[len];
            this->len = len;
        }
        Array(const Array &cpy)
        {
            *this = cpy;
        }
        ~Array()
        {
           delete[] this->array;
        }
        unsigned int    size(void)
        {
            return (this->len);
        }
        Array &operator=(const Array &cpy)
        {
            int size = (int)cpy.len;
            this->len = cpy.len;
            this->array = new T[size];
            for (int i = 0; i < size; i++)
            {
                this->array[i] = cpy.array[i];
            }
            return (*this);
        }
        T& operator[](int i)
        {
            if (i < 0 || i >= (int)this->len)
                throw Invalid_Size();
            return (this->array[i]);
        }
        class Invalid_Size : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

template <typename T>
const char *Array<T>::Invalid_Size::what()const throw()
{
    return ("Invalid size");
}
#endif