#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cmath>

class Convert;
class Convert
{
    public:
        Convert();
        Convert(const Convert&);
        virtual ~Convert();
        Convert &operator=(const Convert& op);

        float       toTreatable(std::string const & totreat);
        float       toFloat(float);
        int         toInt(float);
        double      toDouble(float);
        char        toChar(float);

        class NotConvertible : public std::exception
		{
			public:
				NotConvertible () throw();
				NotConvertible (const NotConvertible&) throw();
				NotConvertible& operator= (const NotConvertible&) throw();
				virtual ~NotConvertible() throw();
				virtual const char* what() const throw();
		};
};

#endif