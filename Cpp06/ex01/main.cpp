#include "Serializer.hpp"

int main(void)
{
    Data *data = new Data();
	data->number = 10;

	std::cout << data << std::endl;


	uintptr_t uintData = Serializer::serialize(data);
	std::cout << uintData << std::endl;
    
	Data *lastData = Serializer::deserialize(uintData);
	std::cout << lastData << std::endl;
	std::cout << lastData->number << std::endl;
}