#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed{
	private:
		int	_fixed;
		static const int _fract = 8;

	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(const float fp);
		Fixed(const Fixed &inst);
		~Fixed(void);
		Fixed & operator =(Fixed const & inst);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator <(Fixed const & rhs);
		bool operator >(Fixed const & rhs);
		bool operator >=(Fixed const & rhs);
		bool operator <=(Fixed const & rhs);
		bool operator !=(Fixed const & rhs);
		bool operator ==(Fixed const & rhs);
		Fixed operator -(Fixed const & rhs);
		Fixed operator +(Fixed const & rhs) const;
		Fixed operator *(Fixed const & rhs) const;
		Fixed operator /(Fixed const & rhs);
		Fixed & operator ++(void);
		Fixed operator ++(int n);
		Fixed & operator --(void);
		Fixed operator --(int n);
		static Fixed & min(Fixed &one, Fixed &two);
		static Fixed min(Fixed const &one, Fixed const &two);
		static Fixed & max(Fixed &one, Fixed &two);
		static Fixed max(Fixed const &one, Fixed const &two);
};

std::ostream &	operator<<(std::ostream &o, Fixed const &rhs);

#endif