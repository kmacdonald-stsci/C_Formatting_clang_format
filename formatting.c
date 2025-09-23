//////////////////////////////////////////////////
// C formatting
// September 19, 2025
//////////////////////////////////////////////////

// I created a standard configuration file using a clang-format command,
// then made some minor modifications.  I prefer these rules as defensive
// coding strategies, as well as readability.

//              Curly brackets
// 
// XXX We will use this.
if (x == y) {
    printf("equal\n");
}

// Functions
void new_func(
        void)
{
    return;
}

// Always use curly brackets.  White space and new line are preferrable
// in order to make conditionals/for/while/etc more visible.
if (x == y) {
    printf("equal\n");
}

// XXX Not this:
if (x == y) printf("equal\n");

// XXX Nor this.  This can be a problem if the excecution part is a
// macro.  Without brackets only the first line of a multiline macro
// gets executed if the macro is not properly defined.
if (x == y)
    printf("equal\n");


// This
    struct simple_ll_node *seg = NULL;
// Not this
    struct simple_ll_node * seg = NULL;

// This
    opt_res->slope = (PyArrayObject *) PyArray_ZEROS(nd, dims, NPY_FLOAT, fortran);
// Not this
    opt_res->slope = (PyArrayObject*)PyArray_ZEROS(nd, dims, NPY_FLOAT, fortran);

// This
    switch(nan_idx) {
        case 0:
            ...
    }
// Not his
    switch(nan_idx) {
    case 0:
        ...
    }

// This
a = b +
    c;
// Not this
a = b
  + c;

// This
#if REAL_IS_DOUBLE
// Not this
# if REAL_IS_DOUBLE
!!! Use examples.  Use different format configs with different C files and
    see what happens.




//--------------------------------------------------
// Style (rather than formatting)

// Prefer indents to be 4 spaces and definitely not tabs

// - Few function paramters.  Use structs/classes to encapsulate related data.
// - Relatively short functions.  Few functions need to be longer than 50 lines.
//   Almost all longer functions can be broken down into smaller, easier to read
//   functions.

// Verbose function and variable names, rather than terse, cryptic function names.

// Prefer function variable documentation as part of the function definition, rather
// than as a separate docstring or in the header file.  Developers reading or
// modifying the code more easily see what each variable is.
// If docstrings are preferrable, I prefer before the function, rather than within
// the function body.

struct point
{
    ...
} POINT;

typedef struct point POINT;
typedef struct point * pPOINT;
