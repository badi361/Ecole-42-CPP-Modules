#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class	Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(std::string idea);
		Brain(const Brain& brain);
		std::string* getIdeas(void);
		Brain& operator=(const Brain& brain);
		void	setIdea(std::string idea);
};

#endif