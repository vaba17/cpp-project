Reference variable is an alias for something else, that is another name
for an already existing variable

  1. Anything we do to the refeence also happens to the original
  2. Aliases cannot be changed to alias something else

Pass-by-Value: Variables are passed by values to function.
Pass-by-Reference: Passing parameters to a function by using a references.
Pass-by-reference with Const: Saves the computational cost of making a copy
of the argument.

When "&" is used in a declaration, it is a reference operator.
When "&" is not used in a declaration, it is an address operator.

Pointer: A variable mostly the same as other variables, which can store a
  piece of data. It stores a memory address.

Dereference: Operator is used to obtain the value pointed to by a variable.

  1. When * is used in a declaration, it is creating pointer.
  2. When * is not used in a declaration, it is dereference operator.

Null Pointer: It is address of "somewhere" which is not a valid location.
  nullptr keyword introduced in C++11.

Free store: It is memory for longer-lived variables.

Rule of Five: If a clss defines one fo the following special member functions,
  it should define all below:
    1. Destructor
    2. Copy constructor
    3. Copy assignment operator
    4. Move constructor
    5. Move assignment operator

unique_ptr: A smart pointer that owns and manages another object through
  and disposes of that object when the unique_ptr goes out of scope.

shared_ptr: A smart pointer that retains shared ownership of an object through
  a pointer. Several shared_ptr objects may own the smae object.