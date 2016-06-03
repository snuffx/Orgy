#ifndef ORGY_FRACTION_MATH_H_
#    define ORGY_FRACTION_MATH_H_

#    include "fraction.h"
/*
	Fraction math rules:
		1) 0/0 is not allowed
		2) n/0 IS allowed, as long as |n|>0
		3) n/0 is treated as infinity, but 2/0 > 1/0
		4) 0 should only exist in the form 0/1
		5) 0^0 is not allowed
		6) Modulus should involve integers only
		7) Only numerators can be negative
*/

/* Exact rational math*/
Fraction add_fractions(Fraction a, Fraction b);
Fraction subtract_fractions(Fraction a, Fraction b);
Fraction multiply_fractions(Fraction a, Fraction b);
Fraction divide_fractions(Fraction a, Fraction b);
Fraction modulus_fractions(Fraction a, Fraction b);

/* Comparative math */
int compare_fractions(Fraction a, Fraction b);

/* Estimation math*/
Fraction exponentiate_fractions(Fraction a, Fraction b);
#endif
