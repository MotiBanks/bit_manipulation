/* Data Lab – Bit Manipulation Practice
 * Implement each function using only the allowed operators.
 *
 * GENERAL RULES:
 * 1. Allowed operators: ! ~ & ^ | + << >>
 * 2. Forbidden operators: - * / % if while for switch || && ?: casts structs arrays function calls
 * 3. Constants: 0-255 (0x00 to 0xFF); larger constants must be built with shifts
 * 4. Each function has a max operator count (listed below)
 *
 * NOTE: Follow operator limits and special function constraints carefully.
 */

#include <stdio.h>

/******** INTEGER PUZZLES *********/

/* 1 — bitAnd(x, y)
 * Goal: Compute x & y using ONLY ~ and |
 * Max ops: 8
 */
int bitAnd(int x, int y) {
    return 0;
}

/* 2 — getByte(x, n)
 * Goal: Return the nth byte of x (byte 0 = least significant byte)
 * Max ops: 6
 */
int getByte(int x, int n) {
    return 0;
}

/* 3 — logicalShift(x, n)
 * Goal: Perform a logical right shift (fill with zeros), even if machine uses arithmetic shift
 * Max ops: 20
 */
int logicalShift(int x, int n) {
    return 0;
}

/* 4 — bitCount(x)
 * Goal: Count the number of 1 bits in x (popcount)
 * Max ops: 40
 * Hint: Use masks and shifts
 */
int bitCount(int x) {
    return 0;
}

/* 5 — bang(x)
 * Goal: Compute !x without using !
 * Result: 1 if x==0, else 0
 * Max ops: 12
 * Hint: Use properties of two's complement: x | -x
 */
int bang(int x) {
    return 0;
}

/* 6 — tmin()
 * Goal: Return minimum two's complement integer (0x80000000 for 32-bit)
 * Max ops: 2
 */
int tmin(void) {
    return 0;
}

/* 7 — fitsBits(x, n)
 * Goal: Return 1 if x fits in n-bit signed integer, else 0
 * Example: fitsBits(4,3) = 0, fitsBits(-4,3) = 1
 * Max ops: 15
 */
int fitsBits(int x, int n) {
    return 0;
}

/* 8 — divpwr2(x, n)
 * Goal: Compute x / (2^n), rounding toward zero, handle negatives correctly
 * Max ops: 15
 */
int divpwr2(int x, int n) {
    return 0;
}

/* 9 — negate(x)
 * Goal: Return -x using only allowed operators
 * Max ops: 5
 */
int negate(int x) {
    return 0;
}

/* 10 — isPositive(x)
 * Goal: Return 1 if x > 0, else 0
 * Max ops: 8
 */
int isPositive(int x) {
    return 0;
}

/* 11 — isLessOrEqual(x, y)
 * Goal: Return 1 if x <= y, else 0
 * Max ops: 24
 */
int isLessOrEqual(int x, int y) {
    return 0;
}

/* 12 — ilog2(x)
 * Goal: Return floor(log2(x))
 * Example: ilog2(1) = 0, ilog2(16) = 4
 * Max ops: 90
 * Hint: Use binary search with shifts
 */
int ilog2(int x) {
    return 0;
}

/******** FLOATING-POINT PUZZLES *********/

/* 13 — float_neg(uf)
 * Goal: Return bit-level representation of -f
 * If uf is NaN, return uf unchanged
 * Max ops: 10
 */
unsigned float_neg(unsigned uf) {
    return 0;
}

/* 14 — float_i2f(x)
 * Goal: Convert integer x to float (bit-level representation)
 * Must implement correct rounding
 * Max ops: 30
 */
unsigned float_i2f(int x) {
    return 0;
}

/* 15 — float_twice(uf)
 * Goal: Return 2*f (bit-level), handle NaNs correctly
 * Max ops: 30
 */
unsigned float_twice(unsigned uf) {
    return 0;
}
