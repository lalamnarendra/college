#include <stdio.h>

#define ARRAY_SIZE 5

/* Clear all bits in array from start_bit to end_bit. */
void bitclr_range(int *array, int start_bit, int end_bit)
{
    /* Fill your code here. */

}

int main()
{
    int a[ARRAY_SIZE] = { 0 };
    int exp[ARRAY_SIZE] = { 0 };
    int i = 0;

    a[0] =  0xAAAAAAAA;
    a[1] =  0xAAAAAAAA;
    a[2] =  0xAAAAAAAA;
    a[3] =  0xAAAAAAAA;
    a[4] =  0xAAAAAAAA;

    bitclr_range(a, 16, 47);

    exp[0] =  0x0000AAAA;
    exp[1] =  0xAAAA0000;
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

    bitclr_range(a, 96, 159);

    exp[0] =  0x55555555;
    exp[1] =  0x55555555;
    exp[2] =  0x55555555;
    exp[3] =  0x00000000;
    exp[4] =  0x00000000;

    for (i = 0; i < ARRAY_SIZE; i++) {
        if (a[i] != exp[i]) {
            printf("%s:%d -- Return Value didnot "
	           "match with expected value\n",
	           __func__, __LINE__);
	    return -1;
        }
    }
}
