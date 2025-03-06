/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:08:17 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/06 10:45:56 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed	a;
	Fixed	b(42);
	Fixed	c(42.42f);
	Fixed	d(21);

	// Greater Than
	std::cout << "=== Greater Than ===============" << std::endl;

	std::cout << "a(" << a << ") " << "> b(" << b << ") : ";
	std::cout << (a > b ? "true" : "false") << std::endl;

	std::cout << "c(" << c << ") " << "> b(" << b << ") : ";
	std::cout << (c > b ? "true" : "false") << std::endl;

	std::cout << std::endl;


	// Less Than
	std::cout << "=== Less Than ==================" << std::endl;

	std::cout << "a(" << a << ") " << "< b(" << b << ") : ";
	std::cout << (a < b ? "true" : "false") << std::endl;

	std::cout << "c(" << c << ") " << "< b(" << b << ") : ";
	std::cout << (c < b ? "true" : "false") << std::endl;

	std::cout << std::endl;


	// Greater Than or Equal To
	std::cout << "=== Greater Than or Equal To ===" << std::endl;

	std::cout << "a(" << a << ") " << ">= a(" << a << ") : ";
	std::cout << (a >= a ? "true" : "false") << std::endl;

	std::cout << "b(" << b << ") " << ">= b(" << b << ") : ";
	std::cout << (b >= b ? "true" : "false") << std::endl;

	std::cout << "b(" << b << ") " << ">= c(" << c << ") : ";
	std::cout << (b >= c ? "true" : "false") << std::endl;

	std::cout << std::endl;


	// Less Than or Equal To
	std::cout << "=== Less Than or Equal To =====" << std::endl;

	std::cout << "a(" << a << ") " << "<= a(" << a << ") : ";
	std::cout << (a <= a ? "true" : "false") << std::endl;

	std::cout << "b(" << b << ") " << "<= b(" << b << ") : ";
	std::cout << (b <= b ? "true" : "false") << std::endl;

	std::cout << "c(" << c << ") " << "<= b(" << b << ") : ";
	std::cout << (c <= b ? "true" : "false") << std::endl;

	std::cout << std::endl;


	// Is Equal To
	std::cout << "=== Is Equal To ===============" << std::endl;

	std::cout << "a(" << a << ") " << "== a(" << a << ") : ";
	std::cout << (a == a ? "true" : "false") << std::endl;

	std::cout << "a(" << a << ") " << "== b(" << b << ") : ";
	std::cout << (a == b ? "true" : "false") << std::endl;

	std::cout << "b(" << b << ") " << "== c(" << c << ") : ";
	std::cout << (b == c ? "true" : "false") << std::endl;

	std::cout << std::endl;


	// Not Equal To
	std::cout << "=== Not Equal To ==============" << std::endl;

	std::cout << "a(" << a << ") " << "!= a(" << a << ") : ";
	std::cout << (a != a ? "true" : "false") << std::endl;

	std::cout << "a(" << a << ") " << "!= b(" << b << ") : ";
	std::cout << (a != b ? "true" : "false") << std::endl;

	std::cout << "b(" << b << ") " << "!= c(" << c << ") : ";
	std::cout << (b != c ? "true" : "false") << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;


	// Addition
	std::cout << "=== Addition ==================" << std::endl;

	std::cout << "a(" << a << ") " << "+ b(" << b << ") : ";
	std::cout << a + b << std::endl;

	std::cout << "b(" << b << ") " << "+ c(" << c << ") : ";
	std::cout << b + c << std::endl;

	std::cout << std::endl;

	// Subtraction
	std::cout << "=== Subtraction ===============" << std::endl;

	std::cout << "a(" << a << ") " << "- b(" << b << ") : ";
	std::cout << a - b << std::endl;

	std::cout << "b(" << b << ") " << "- c(" << c << ") : ";
	std::cout << b - c << std::endl;

	std::cout << "b(" << b << ") " << "- d(" << d << ") : ";
	std::cout << b - d << std::endl;

	std::cout << std::endl;

	// Multiplication
	std::cout << "=== Multiplication ============" << std::endl;

	std::cout << "a(" << a << ") " << "* b(" << b << ") : ";
	std::cout << a * b << std::endl;

	std::cout << "b(" << b << ") " << "* c(" << c << ") : ";
	std::cout << b * c << std::endl;

	std::cout << "b(" << b << ") " << "* d(" << d << ") : ";
	std::cout << b * d << std::endl;

	std::cout << std::endl;

	// Division
	std::cout << "=== Division ==================" << std::endl;

	std::cout << "a(" << a << ") " << "/ a(" << a << ") : ";
	std::cout << a / a << std::endl;

	std::cout << "b(" << b << ") " << "/ d(" << d << ") : ";
	std::cout << b / d << std::endl;

	std::cout << "d(" << d << ") " << "/ b(" << b << ") : ";
	std::cout << d / b << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;


	// Pre-Increment
	std::cout << "=== Pre-Increment =============" << std::endl;

	std::cout << "++a(" << a << ")";
	std::cout << ++a << std::endl;

	std::cout << "++b(" << b << ")";
	std::cout << ++b << std::endl;

	std::cout << "++c(" << c << ")";
	std::cout << ++c << std::endl;

	std::cout << "++d(" << d << ")";
	std::cout << ++d << std::endl;

	std::cout << std::endl;


	// Post-Increment
	std::cout << "=== Post-Increment ============" << std::endl;

	std::cout << "Before: a++(" << a++ << ")" << std::endl;
	std::cout << "After: a++(" << a << ")" << std::endl;
	std::cout << "Before: b++(" << b++ << ")" << std::endl;
	std::cout << "After: b++(" << b << ")" << std::endl;
	std::cout << "Before: c++(" << c++ << ")" << std::endl;
	std::cout << "After: c++(" << c << ")" << std::endl;
	std::cout << "Before: d++(" << d++ << ")" << std::endl;
	std::cout << "After: d++(" << d << ")" << std::endl;

	std::cout << std::endl;

	// Pre-Decrement
	std::cout << "=== Pre-Decrement =============" << std::endl;

	std::cout << "--a(" << a << ")";
	std::cout << --a << std::endl;

	std::cout << "--b(" << b << ")";
	std::cout << --b << std::endl;

	std::cout << "--c(" << c << ")";
	std::cout << --c << std::endl;

	std::cout << "--d(" << d << ")";
	std::cout << --d << std::endl;

	std::cout << std::endl;

	// Post-Decrement
	std::cout << "=== Post-Decrement ============" << std::endl;

	std::cout << "Before: a--(" << a-- << ")" << std::endl;
	std::cout << "After: a--(" << a << ")" << std::endl;
	std::cout << "Before: b--(" << b-- << ")" << std::endl;
	std::cout << "After: b--(" << b << ")" << std::endl;
	std::cout << "Before: c--(" << c-- << ")" << std::endl;
	std::cout << "After: c--(" << c << ")" << std::endl;
	std::cout << "Before: d--(" << d-- << ")" << std::endl;
	std::cout << "After: d--(" << d << ")" << std::endl;

	std::cout << std::endl;

	// Min-Max
	std::cout << "=== Min-Max ===================" << std::endl;

	std::cout << "A: " << a << " | B: " << b << std::endl;
	std::cout << "Min: " << Fixed::min(a, b) << std::endl;
	std::cout << "Max: " << Fixed::max(a, b) << std::endl;
	std::cout << "C: " << c << " | D: " << d << std::endl;
	std::cout << "Min: " << Fixed::min(c, d) << std::endl;
	std::cout << "Max: " << Fixed::max(c, d) << std::endl;

	std::cout << std::endl;

	return (0);
}
