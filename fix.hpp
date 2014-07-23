#ifndef FIX_HPP
#define FIX_HPP

#include <stdio.h>
#include <gmp.h>
#include <gmpxx.h>

namespace fix {

template <unsigned char T>
class fix {
		mpz_t fix_val;
	public:

		fix ()
		{
			mpz_init2(fix_val, T);
		}
		template <unsigned char sT>
		friend std::ostream& operator<< (std::ostream& stream, const fix<sT>& fix_in);
};

template <unsigned char T>
std::ostream& operator<<(std::ostream& stream, const fix<T>& fix_in) {
	mpz_class op(fix_in.fix_val);
	return stream << op;
}

}

#endif

