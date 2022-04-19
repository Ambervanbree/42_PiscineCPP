#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed{
	private:
		int	_fixed;
		static const int _fract;

	public:
		Fixed(void);
		Fixed(const Fixed &inst);
		~Fixed(void);
		Fixed & operator =(Fixed const &inst);
		int getRawBits(void) const;
		void setRawBits( int const raw );
};

#endif