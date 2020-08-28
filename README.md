# cppMath
A custom set of tools for mathematical computation in c++. 
This repo will include some methods I wrote for solving specific problems related to mathematical computation and linear algebra problems.

# BinCoff method
The Bincoff function generates an inverted version of the n'th vector in the binomial coefficient matrix, also known as Pascals triangle. The input is the index of the the desired row, with the output being a vector of all coefficients at that row. It is important to note that this method only uses addition (no divisions, exponentiation or subtraction), and thus can be used in applications which require percise work with integers. Example:
```
>Bincoff(9)
>[9,  -36,   84, -126,  126,  -84,   36,   -9,    1]
```
