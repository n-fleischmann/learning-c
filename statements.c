#include <stdio.h>

int main()
{

    // A Statement is an expression followed by a semicolon (;)

    int myint; // for example, is a statement that declares the variable x as an integer

    /*
    Types of statements

    Selection Statements
        * If
        * If-else
        * Switch

    Iteration statements
        * for
        * while
        * do-while


    // If

    If statements check an expression and, if it returns true, evaluates the statement

        Pseudocode
    > if (condition)
        some_statement;

        Code Example */
    int x = 6;
    int y = 6;
    if (x == y)
        printf("%d\n", x);

    /*
    The if statement will also execute a block of code if given instead

        Pseudocode
    > if (condition) {
        statement1;
        statement2;
        statement3;
        ...
    }

        Code Example */
    if (x == y)
    {
        printf("%d\n", x);
        printf("%d\n", y);
        printf("They're equal!!\n");
    }

    // Using logical operators and (&&), or (||)

    if (x == y && x < 150)
        printf("They're equal and x is less than 150!\n"); // True and True --> True
    if (x == y || y > 150)
        printf("They're equal or y is greater than 150\n"); // True or False --> True

    // using negation
    int example_boolean = 0;
    if (!example_boolean)
        printf("My example is not true!\n"); // Not False --> True

    /*
    Similarly to Java we can use if/else if/else
    */

    if (x == 10)
    {
        printf("This condition should be false.");
    }
    else if (y == 10)
    {
        printf("This condition should also be false.");
    }
    else
    {
        printf("Neither x nor y are 10!");
    }

    // Switch, just like in Java with fall through as well

    int switch_x = 123;
    switch (switch_x)
    {
    case 100:
        printf("The value of x is 100.\n");
        break;
    case 123:
        printf("The value of x is 123.\n");
        break;
    case 456:
        printf("The value of x is 456.\n");
        break;
    default:
        printf("None of the above values matches the value of x.\n");
        break;
    }

    // Iteration: while, do while, for

    // This will print five times
    int mycounter = 0;
    while (mycounter < 5)
    {
        printf("Hello World from a while loop.\n");
        mycounter++;
    }

    // This will also print five times, but will always execute AT LEAST ONCE because it
    // CHECKS THE CONDITION AFTER
    int mycounter2 = 0;
    do
    {
        printf("Hello World from a do-while loop.\n");
        mycounter2++;
    } while (mycounter2 < 5);

    // For loops work exactly like they do in Java
    for (int i = 0; i < 5; i++)
    {
        printf("Hello World from a for loop.\n");
    }
}