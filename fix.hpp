#ifndef FIX_HPP
#define FIX_HPP

#include <stdio.h>
#include <gmp.h>
#include <gmpxx.h>

namespace fix {

template <unsigned char M, unsigned char F>
class fix {
		mpz_t fix_val;
	public:

		fix ()
		{
			mpz_init2(fix_val, F+M+1);
		}
		template <unsigned char sM, unsigned char sF>
		friend std::ostream& operator<< (std::ostream& stream, const fix<sM, sF>& fix_in);
};

template <unsigned char M, unsigned char F>
std::ostream& operator<<(std::ostream& stream, const fix<M, F>& fix_in) {
	mpz_class op(fix_in.fix_val);
	return stream << op;
}

template <unsigned char M, unsigned char F>
fix<M, F> to_fix(int in)
{
	fix<M, F> a;
	return a;
}

}

#endif

