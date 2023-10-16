#ifndef	CONTACT_HPP
#define	CONTACT_HPP

# include <iostream>
# include <iomanip>
class	Contact
{
	private:
		std::string 	Name;
		std::string 	Surname;
		std::string		Nickname;
		long long int	PhoneNumber;
		std::string 	DarkSecret;
	public:
		Contact()
		{
			Name = "";
			Surname = "";
			Nickname = "";
			PhoneNumber = 0;
			DarkSecret = "";
		}
	long long int	get_phone_number(void);
	int				ctrl_phone_number(std::string PhoneNumber);
	void			set_name(std::string name);
	void			set_surname(std::string surname);
	void			set_nickname(std::string nickname);
	void			set_phone_number(long long int phonenumber);
	void			set_dark_secret(std::string darksecret);
	std::string		get_name(void);
	std::string		get_surname(void);
	std::string		get_nickname(void);
	std::string		get_dark_secret(void);
};
#endif