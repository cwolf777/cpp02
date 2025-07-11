/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:03:03 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/11 16:56:54 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	private:
		int _fixedValue;
		static const int _bits = 8;
	public:
		//default constructor
		Fixed();
		//copy constructor
		Fixed(const Fixed& other);
		//copy assigned operator overload
		Fixed& operator=(const Fixed& other);
		//Destruktor
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};