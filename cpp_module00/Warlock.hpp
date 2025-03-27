#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;
		
	public:
		Warlock(std::string name, std::string title);
		~Warlock();

		std::string getName() const;
		std::string getTitle() const;
		void setTitle(std::string str);
		void introduce() const;
};

#endif
