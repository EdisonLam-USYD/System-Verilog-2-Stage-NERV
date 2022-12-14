#include <stdlib.h>
#include <stdio.h>

/**
 * \brief    Fast Square root algorithm
 *
 * Fractional parts of the answer are discarded. That is:
 *      - SquareRoot(3) --> 1
 *      - SquareRoot(4) --> 2
 *      - SquareRoot(5) --> 2
 *      - SquareRoot(8) --> 2
 *      - SquareRoot(9) --> 3
 *
 * \param[in] a_nInput - unsigned integer for which to find the square root
 *
 * \return Integer square root of the input value.
 */

#define	MAXN	999
#define	STEP	50

unsigned	table[MAXN];

unsigned isqrt(unsigned a_nInput)
{
    unsigned op  = a_nInput;
    unsigned res = 0;
    unsigned one = 1uL << 30; 
    // The second-to-top bit is set: use 1u << 14 for uint16_t type; 
    // use 1uL<<30 for unsigned type


    // "one" starts at the highest power of four <= than the argument.
    while (one > op)
        one >>= 2;

    while (one != 0)
    {
        if (op >= res + one)
        {
            op = op - (res + one);
            res = res +  2 * one;
        }
        res >>= 1;
        one >>= 2;
    }
    return res;
}

void
sqrttable()
{
	int	i;

	for (i = 50; i < MAXN; i += STEP) {
		table[i] = isqrt(i);
    }
}

int
main()
{
	unsigned	i = 1234;	
	unsigned	r;	

	sqrttable();
	for (i = 0; i < MAXN; i += STEP)
		printf("isqrt(%d)=%d\n", i, table[i]);

	return 0;
}
