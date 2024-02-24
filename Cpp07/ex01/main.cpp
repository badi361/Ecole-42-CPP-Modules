#include "iter.hpp"

int main(void)
{
    {
        int array[3] = {1, 2, 3};
        iter(array, 3, print);
    }

    {
        std::string array[4] = {"baran", "guzel", "sivas", "badi"};
        iter(array, 4, print);
    }
    return 0;
}