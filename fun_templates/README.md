A template is a C++ tool that allows programmers to add data types as parameters.

When two functions have different types but the same body, templates can be used
as simpler solution.

Unlike regular functions, templates are entirely created in header files.

Templates let us choose the type implementation right when you call the function. The type we choose may apply to the return type, a parameter type, or both.

Note: Using templates will slow down the program’s compile time, but speed up the execution time.

numbers.cpp is not added, as every funciton is defined in numbers.hpp