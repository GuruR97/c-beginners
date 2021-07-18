#include <stdio.h>
#include <stdlib.h>


// Return_type Function_name(List of Parameters - separated by commas)

// The return type specifies the type of the value returned by the function

// void means no value is returned. You include it to make the program more readable in the parameter. You need it in the return type however

// the return statemen provides the means of exiting from a function. That is what is returned

// return; -> This means you are just exiting the function if there is nothing after it. If you see it anywhere in a function, you jump out of the function

// the more general form of the return statement is return expression;

// The value that is returned to the calling program is the value that results when expression is evaluated, it should be of the return type specified for the function

// A function that has statements in the function body that does not return a value must have the return type void, otherwise you will get an error

// Another error might result if you try to return a data type that is different than the one in the decleration. It will try the conversion if it can

//


int multiply(int x, int y)
{
    int result = x*y;
    return result;
}

int main()
{
    int result = 0;
    result = multiply(10,20);

    printf("result is %d\n", result);
    return 0;
}
