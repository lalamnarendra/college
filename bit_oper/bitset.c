#include <stdio.h>

/* Set bit at pos in num. */
int bitset(int num, int pos)
{
    /* Fill your code here. */

    return num;
}

int main()
{
    int num = 0;
    int ret_val = 0;
    int exp_val = 0;

    num = 0xAAAAAAAA;
    ret_val = bitset(num, 0);
    exp_val = 0xAAAAAAAB;
    if (ret_val != exp_val) {
	printf("%s:%d -- Return Value didnot "
	       "match with expected value\n",
	       __func__, __LINE__);
	return -1;
    }

    num = 0x55555555;
    ret_val = bitset(num, 31);
    exp_val = 0xD5555555;
    if (ret_val != exp_val) {
	printf("%s:%d -- Return Value didnot "
	       "match with expected value\n",
	       __func__, __LINE__);
	return -1;
    }

    num = 0x5555D555;
    ret_val = bitset(num, 13);
    exp_val = 0xD555F555;
    if (ret_val != exp_val) {
	printf("%s:%d -- Return Value didnot "
	       "match with expected value\n",
	       __func__, __LINE__);
	return -1;
    }
}
