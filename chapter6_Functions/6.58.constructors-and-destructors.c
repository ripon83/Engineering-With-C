/*
 * Program: Constructors And Destructors
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

void __attribute__((constructor)) function_name()
{
    //Executed before main()
}

void __attribute__((destructor)) function_name()
{
    //Executed after main()
}
