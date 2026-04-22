/*
 * CS:APP Data Lab
 *
 * 葛宇坤3025208175
 *
 * bits.c - Source file with your solutions to the Lab.
 */

#if 0
 /*
  * Instructions to Students:
  *
  * STEP 1: Read the following instructions carefully.
  */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES :

Replace the "return" statement in each function with one
or more lines of C code that implements the function.Your code
must conform to the following style :

int Funct(arg1, arg2, ...) {
    /* brief description of how your implementation works */
    int var1 = Expr1;
    ...
        int varM = ExprM;

    varJ = ExprJ;
    ...
        varN = ExprN;
    return ExprR;
}

Each "Expr" is an expression using ONLY the following :
1. Integer constants 0 through 255 (0xFF), inclusive.You are
not allowed to use big constants such as 0xffffffff.
2. Function arguments and local variables(no global variables).
3. Unary integer operations !~
4. Binary integer operations & ^| +<< >>

Some of the problems restrict the set of allowed operators even further.
Each "Expr" may consist of multiple operators.You are not restricted to
one operator per line.

You are expressly forbidden to :
1. Use any control constructs such as if, do, while, for, switch, etc.
2. Define or use any macros.
3. Define any additional functions in this file.
4. Call any functions.
5. Use any other operations, such as&&, || , -, or ? :
    6. Use any form of casting.
    7. Use any data type other than int.This implies that you
    cannot use arrays, structs, or unions.


    You may assume that your machine :
1. Uses 2s complement, 32 - bit representations of integers.
2. Performs right shifts arithmetically.
3. Has unpredictable behavior when shifting an integer by more
than the word size.

EXAMPLES OF ACCEPTABLE CODING STYLE :
/*
 * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
 */
int pow2plus1(int x) {
    /* exploit ability of shifts to compute powers of 2 */
    return (1 << x) + 1;
}

/*
 * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
 */
int pow2plus4(int x) {
    /* exploit ability of shifts to compute powers of 2 */
    int result = (1 << x);
    result += 4;
    return result;
}

FLOATING POINT CODING RULES

For the problems that require you to implent floating - point operations,
the coding rules are less strict.You are allowed to use looping and
conditional control.You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants.

You are expressly forbidden to :
1. Define or use any macros.
2. Define any additional functions in this file.
3. Call any functions.
4. Use any form of casting.
5. Use any data type other than int or unsigned.This means that you
cannot use arrays, structs, or unions.
6. Use any floating point data types, operations, or constants.


NOTES:
1. Use the dlc(data lab checker) compiler(described in the handout) to
check the legality of your solutions.
2. Each function has a maximum number of operators(!~&^| +<< >>)
that you are allowed to use for your implementation of the function.
The max operator count is checked by dlc.Note that '=' is not
counted; you may use as many of these as you want without penalty.
3. Use the btest test harness to check your functions for correctness.
4. Use the BDD checker to formally verify your functions
5. The maximum number of ops for each function is given in the
header comment for each function.If there are any inconsistencies
between the maximum ops in the writeup and in this file, consider
this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 *
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce
 *      the correct answers.
 */





/*
 * CS:APP Data Lab
 *
 * 葛宇坤 3025208175
 *
 * bits.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.
 */

#if 0
 /*
  * Instructions to Students:
  *
  * STEP 1: Read the following instructions carefully.
  */

    You will provide your solution to the Data Lab by
    editing the collection of functions in this source file.

    INTEGER CODING RULES :

Replace the "return" statement in each function with one
or more lines of C code that implements the function.Your code
must conform to the following style :

int Funct(arg1, arg2, ...) {
    /* brief description of how your implementation works */
    int var1 = Expr1;
    ...
        int varM = ExprM;

    varJ = ExprJ;
    ...
        varN = ExprN;
    return ExprR;
}

Each "Expr" is an expression using ONLY the following :
1. Integer constants 0 through 255 (0xFF), inclusive.You are
not allowed to use big constants such as 0xffffffff.
2. Function arguments and local variables(no global variables).
3. Unary integer operations !~
4. Binary integer operations & ^| +<< >>

Some of the problems restrict the set of allowed operators even further.
Each "Expr" may consist of multiple operators.You are not restricted to
one operator per line.

You are expressly forbidden to :
1. Use any control constructs such as if, do, while, for, switch, etc.
2. Define or use any macros.
3. Define any additional functions in this file.
4. Call any functions.
5. Use any other operations, such as&&, || , -, or ? :
    6. Use any form of casting.
    7. Use any data type other than int.This implies that you
    cannot use arrays, structs, or unions.


    You may assume that your machine :
1. Uses 2s complement, 32 - bit representations of integers.
2. Performs right shifts arithmetically.
3. Has unpredictable behavior when shifting an integer by more
than the word size.

EXAMPLES OF ACCEPTABLE CODING STYLE :
/*
 * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
 */
int pow2plus1(int x) {
    /* exploit ability of shifts to compute powers of 2 */
    return (1 << x) + 1;
}

/*
 * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
 */
int pow2plus4(int x) {
    /* exploit ability of shifts to compute powers of 2 */
    int result = (1 << x);
    result += 4;
    return result;
}

FLOATING POINT CODING RULES

For the problems that require you to implent floating - point operations,
the coding rules are less strict.You are allowed to use looping and
conditional control.You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants.

You are expressly forbidden to :
1. Define or use any macros.
2. Define any additional functions in this file.
3. Call any functions.
4. Use any form of casting.
5. Use any data type other than int or unsigned.This means that you
cannot use arrays, structs, or unions.
6. Use any floating point data types, operations, or constants.


NOTES:
1. Use the dlc(data lab checker) compiler(described in the handout) to
check the legality of your solutions.
2. Each function has a maximum number of operators(!~&^| +<< >>)
that you are allowed to use for your implementation of the function.
The max operator count is checked by dlc.Note that '=' is not
counted; you may use as many of these as you want without penalty.
3. Use the btest test harness to check your functions for correctness.
4. Use the BDD checker to formally verify your functions
5. The maximum number of ops for each function is given in the
header comment for each function.If there are any inconsistencies
between the maximum ops in the writeup and in this file, consider
this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 *
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce
 *      the correct answers.
 */


#endif
/*
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
 *   Example: isAsciiDigit(0x35) = 1.
 *            isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */
int isAsciiDigit(int x) {
    /* 判断 x 是否在 [0x30, 0x39] 区间内 */
    int lower = x + (~0x30 + 1);      /* x - 0x30 */
    int upper = 0x39 + (~x + 1);      /* 0x39 - x */
    /* 计算 x - 0x30 和 0x39 - x 的符号位，两个差值均非负时返回1 */
    int sign_lower = lower >> 31;     /* 若lower<0则sign_lower=-1，否则0 */
    int sign_upper = upper >> 31;     /* 若upper<0则sign_upper=-1，否则0 */
    return (!sign_lower) & (!sign_upper);
}
/*
 * anyEvenBit - return 1 if any even-numbered bit in word set to 1
 *   Examples anyEvenBit(0xA) = 0, anyEvenBit(0xE) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int anyEvenBit(int x) {
    /* 构造偶数位掩码0xAAAAAAAA，与x相与，非0则返回1 */
    int mask = 0xAA;                   /* 0b10101010 */
    mask = mask | (mask << 8);         /* 0xAAAA */
    mask = mask | (mask << 16);        /* 0xAAAAAAAA */
    return !!(x & mask);
}
/*
 * copyLSB - set all bits of result to least significant bit of x
 *   Example: copyLSB(5) = 0xFFFFFFFF, copyLSB(6) = 0x00000000
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int copyLSB(int x) {
    /* 提取最低位，左移到最高位，再算术右移31位，将符号位复制到所有位 */
    int lsb = x << 31;                 /* 将最低位移到最高位 */
    return lsb >> 31;                  /* 算术右移31位，复制符号位 */
}
/*
 * leastBitPos - return a mask that marks the position of the
 *               least significant 1 bit. If x == 0, return 0
 *   Example: leastBitPos(96) = 0x20
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 6
 *   Rating: 2
 */
int leastBitPos(int x) {
    /*x & -x 提取最低位的1 */
    return x & (~x + 1);               /* -x = ~x + 1 */
}
/*
 * divpwr2 - Compute x/(2^n), for 0 <= n <= 30
 *  Round toward zero
 *   Examples: divpwr2(15,1) = 7, divpwr2(-33,4) = -2
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 2
 */
int divpwr2(int x, int n) {
    /* 向零取整：正数直接右移，负数需要加上偏置后再右移 */
    int bias = (1 << n) + (~0);        /* 偏置 = 2^n - 1 */
    int sign = x >> 31;                /* 负数时sign=-1，正数或0时sign=0 */
    return (x + (sign & bias)) >> n;   /* 负数时加上偏置，正数不加 */
}


/*
 * bitCount - returns count of number of 1's in word
 *   Examples: bitCount(5) = 2, bitCount(7) = 3
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 40
 *   Rating: 4
 */
int bitCount(int x) {
    /* 分治算法：先计算每2位中1的个数，再合并为每4位、每8位、每16位，最终得到总数 */
    int mask1, mask2, mask3;

    /* 构造掩码 0x55555555 = 01010101... */
    mask1 = 0x55;
    mask1 = mask1 | (mask1 << 8);
    mask1 = mask1 | (mask1 << 16);

    /* 构造掩码 0x33333333 = 00110011... */
    mask2 = 0x33;
    mask2 = mask2 | (mask2 << 8);
    mask2 = mask2 | (mask2 << 16);

    /* 构造掩码 0x0F0F0F0F = 00001111... */
    mask3 = 0x0F;
    mask3 = mask3 | (mask3 << 8);
    mask3 = mask3 | (mask3 << 16);

    /* 每2位统计 */
    x = (x & mask1) + ((x >> 1) & mask1);
    /* 每4位统计 */
    x = (x & mask2) + ((x >> 2) & mask2);
    /* 每8位统计 */
    x = (x & mask3) + ((x >> 4) & mask3);
    /* 每16位统计 */
    x = x + (x >> 8);
    /* 每32位统计，最终结果在低6位 */
    x = x + (x >> 16);
    return x & 0x3F;
}