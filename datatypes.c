#include <stdio.h>

int main()
{

    /* AT A GLANCE:

    Data types:                 Size:
        * char                  1 byte

        * int                   4 bytes
            - unsigned          4 bytes
            - short             2 bytes
            - long              8 bytes
            - long long         8+ bytes

        (note shorts, longs, and long longs can also be unsigned)

        * float                 4 bytes
            - double            8 bytes
            - long double       16 bytes


    Format Specifiers:
        %c                      Encoding of a char

        %d                      Decimal representation of an int, char, short
        %o                      Octal representation
        %x                      Hex representation

        %u                      Decimal representation of an unsigned
        %hu                     Decimal representation of an unsigned short

        %l-                     Prefix for a long
        %ld                     Decimal representation of a long
        %lu                     Decimal representation of a long unsigned

        %ll-                    Prefix for a long long
        %lld                    Decimal representation of a long long
        %llu                    Decimal representation of an unsigned long long

        %f                      Decimal representation of a float
        %.<y>f                  Decimal representation of a float with <y> decimals
        %e                      Scientific notation representation of a float
        %Lf                     Decimal representation of a long float, note the capital L

        %zi                     Used with sizeof() to show number of bytes a variable uses


    */

    //////////////////
    // Declarations //
    //////////////////

    /* Every variable must be declared, giving its type followed by its name. this might look like

        Pseudocode
    > type_name var_name;

        Example Code
    > int num_spaces;

    You can declare multiple variables of the same type by seperating them with commas like so

        Pseudocode
    > type_name var1, var2, var3;

        Example Code
    > int num_spaces, num_squares, player_count, total_score;

    additionally the variable can be initialized at the same time

        Pseudocode
    > type_name var_name = init_value;

        Example Code
    > int num_spaces = 10;

    When we do this, we reserve a section of memory for the variable, the occupied space is called
    an *object* or a *data object*. We use the variable name to access that object. The amount of
    memory allocated depends on the type.


    //////////////////
    // Types        //
    //////////////////

    Some built in types in C are
        * char - 1 byte integer used to store character information
        * int - 4 byte or 8 byte (depending on system) integer
        * float - floating point numbers of single precision
        * double - floating point numbers of double precision

    each of these can have qualifiers like long or unsigned that modify the kinds of values they
    can hold.

    */

    // Chars

    char mychar;

    // char is technically an integer, but the compiler is smart enough that we can say
    mychar = 'a';

    // every number is assigned a character and vice versa in the *encoding table*, in ASCII
    // This means the same thing
    // mychar = 97;

    // too see the value, we can use format specifiers in printf

    printf("mychar as a character is: %c\n", mychar);
    printf("mychar as an integer is: %d\n", mychar);

    // in printf, you can use the %zi or the %zu format specifier with the function sizeof()
    // to get the size of a data object in bytes

    printf("mychar is %zi byte(s) long\n", sizeof(mychar));

    // Ints

    int myint;

    // ints allow you to assign values in decimal, octal, and hex. These all have the decimal value 10

    int x = 10;  // Decimal
    int y = 012; // Octal - always starts with a 0 as a signifier to the compiler this is in octal
    int z = 0xA; // Hex - always starts with a 0x as a signifier to the compiler this is in hex

    /* We can print integers in each of these forms using format specifers, just like with chars
        - %d for decimal
        - %o for octal
        - %x for hex
    */

    printf("x in decimal: %d, octal: %o, hex: %x\n", x, x, x);

    // Unmodified ints can hold values in [−32,767, +32,767]

    /* We can apply certain modifers to int to change the kinds of values it can hold, the first
    is unsigned, which only allows the int to hold positive values and 0, but it can hold
    numbers twice as large.
    */

    unsigned int myunsigned = 123456789u;

    // By convention, when applying any modifer to int, we omit the int, so this should be written

    unsigned myunsigned_conventional = 123456789u;

    // to print an unsigned int, use the %u specifier
    printf("The value of my unsigned int is %u\n", myunsigned_conventional);

    // unsigned ints can hold values in [0, 65,535]

    // integers can also be signed, but they are signed by default.
    // This is technically correct but redundant

    signed int mysigned = -456;

    // the other two modifiers are short and long. typically shorts are 2 bytes in length and
    // longs are at are least 4

    // shorts dont need any special identifiers to initialize or to print
    short myshort = 1234;
    printf("The value of a short integer is: %d\n", myshort);

    // longs use the 'l' identifier to initialize and prepend 'l' to the format specifer to print
    long mylong = 123456789l;
    printf("The value of a long integer is: %ld\n", mylong);

    // similarly, shorts and longs can be unsigned

    // use the %hu format specifier for unsigned shorts
    unsigned short myunsignedshort = 1234u;
    printf("The value of an unsigned short integer is: %hu\n", myunsignedshort);

    // use the ul identifier to initialize and the %lu specifer to print
    unsigned long myunsignedlong = 123456789ul;
    printf("The value of an unsigned long variable is: %lu\n", myunsignedlong);

    // there's also the long long type, which has 8 bytes minimum in size,
    // only availablie in C99 or later
    // long longs use the ll indentifier and an %lld format specifier
    long long mylonglong = 123456789123456789ll;
    printf("the value of a long long variable is: %lld\n", mylonglong);

    // there is also the unsigned long long, which uses the ull identifier and
    // the %llu format speciifer
    unsigned long long myunsignedlonglong = 12345678987654321ull;
    printf("The value of an unsigned long long is: %llu\n", myunsignedlonglong);

    printf("Integer types have the following sizes:\n");
    printf("\tRegular int: %zi\n", sizeof(myint));
    printf("\tShort int: %zi\n", sizeof(myshort));
    printf("\tLong int: %zi\n", sizeof(mylong));
    printf("\tLong Long int: %zi\n", sizeof(mylonglong));

    // Floating point types
    // Luckily there are only three floating types, float, double and long double

    // regular floats are 4 bytes long
    // it uses the f identifier and the %f format specifier
    float myfloat = 123.456f;
    printf("The value of a float is: %f\n", myfloat);

    // this prints
    // @"The value of a float is: 123.456001\r\n"

    // floats are *imprecise* which is where the extra 0001 comes from.
    // we can specify the number of decimal places we want to print like so
    printf("The value of a float to three decimal places is: %.3f\n", myfloat);

    // we can explicitly specift the number of figures in the whole AND fractional part like this
    printf("The value of a float with explicitly three whole places and three decimals is %3.3f\n", myfloat);

    // floats can also be definied and printed in scientific notation
    // using the syntax <integer>e<power of 10 exponent>f, like so
    float alsomyfloat = 123456e-3f;
    printf("The value of a float in scientific notation is %e\n", alsomyfloat);

    // another kind of floating point number is double, which is 8 bytes long.
    // It has more precision and more range at the cost of taking more memory.
    // Doubles are prefered to floats and as such do not need an identifier, and they are printed
    // the same way as regular floats.

    double mydouble = 123.456;
    printf("The value of a double is %f\n", mydouble);

    // the third type is a long double which uses even more memory for even more precision and range.
    // it uses the l identifier like an integer long and the %Lf format specifier to print

    long double mylongdouble = 123.3456789;
    printf("The value of my long double is %Lf\n", mylongdouble);

    printf("My double uses %zi byte(s), while my float uses %zi byte(s), and my long double uses %zi byte(s)", sizeof(mydouble), sizeof(myfloat), sizeof(mylongdouble));
}