#include <stdio.h>

#define ARRAY_SIZE 5

/* Copy all bits from start_bit to end_bit from src pointer to dst pointer */
void bitcopy_range(int *dst, int *src, int start_bit, int end_bit)
{
    /* Fill your code here. */

}

int main()
{
    int a[ARRAY_SIZE] = { 0 };
    int b[ARRAY_SIZE] = { 0 };
    int exp[ARRAY_SIZE] = { 0 };
    int i = 0;

    a[0] =  0xAAAAAAAA;
    a[1] =  0xAAAAAAAA;
    a[2] =  0xAAAAAAAA;
    a[3] =  0xAAAAAAAA;
    a[4] =  0xAAAAAAAA;

    b[0] =  0x55555555;
    b[1] =  0x55555555;
    b[2] =  0x55555555;
    b[3] =  0x55555555;
    b[4] =  0x55555555;

    bitcopy_range(a, b, 16, 47);

    exp[0] =  0x5555AAAA;
    exp[1] =  0xAAAA5555;
    exp[2] =  0xAAAAAAAA;
    exp[3] =  0xAAAAAAAA;
    exp[4] =  0xAAAAAAAA;

    for (i = 0; i < ARRAY_SIZE; i++) {
        if (a[i] != exp[i]) {
            printf("%s:%d -- Return Value didnot "
	           "match with expected value\n",
	           __func__, __LINE__);
	    return -1;
        }
    }

    a[0] =  0x55555555;
    a[1] =  0x55555555;
    a[2] =  0x55555555;
    a[3] =  0x55555555;
    a[4] =  0x55555555;

    b[0] =  0xAAAAAAAA;
    b[1] =  0xAAAAAAAA;
    b[2] =  0xAAAAAAAA;
    b[3] =  0xAAAAAAAA;
    b[4] =  0xAAAAAAAA;

    bitcopy_range(a, b, 96, 159);

    exp[0] =  0x55555555;
    exp[1] =  0x55555555;
    exp[2] =  0x55555555;
    exp[3] =  0xAAAAAAAA;
    exp[4] =  0xAAAAAAAA;

    for (i = 0; i < ARRAY_SIZE; i++) {
        if (a[i] != exp[i]) {
            printf("%s:%d -- Return Value didnot "
	           "match with expected value\n",
	           __func__, __LINE__);
	    return -1;
        }
    }
}
