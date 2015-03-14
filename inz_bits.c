/*
 * From: https://cryptocoding.net/index.php/Coding_rules#Solution
 * Date: 2015-03-13
 */

#include <stdint.h>

/* Return 1 if condition is true, 0 otherwise */
int ct_isnonzero_u32(uint32_t x)
{
        return (x|-x)>>31;
}
