#include <stdio.h>

/* Reset bit at pos in num. */
int bitclr(int num, int pos)
{
    /* Fill your code here. */

    return num;
}

int main()
{
    int num = 0;
    int ret_val = 0;
    int exp_val = 0;

    num = 0x55555555;
    ret_val = bitclr(num, 0);
    exp_val = 0x55555554;
    if (ret_val != exp_val) {
	printf("%s:%d -- Return Value didnot "
	       "match with expected value\n",
	       __func__, __LINE__);
	return -1;
    }

    num = 0xAAAAAAAA;
    ret_val = bitclr(num, 31);
    exp_val = 0x2AAAAAAA;
    if (ret_val != exp_val) {
	printf("%s:%d -- Return Value didnot "
	       "match with expected value\n",
	       __func__, __LINE__);
	return -1;
    }

    num = 0x5555F555;
    ret_val = bitclr(num, 13);
    exp_val = 0xD555D555;
    if (ret_val != exp_val) {
	printf("%s:%d -- Return Value didnot "
	       "match with expected value\n",
	       __func__, __LINE__);
	return -1;
    }
}
