/*
 * Program: Using A Static Variable 3
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

count = 0
    |
    +-- count++ < 10 -> true
    |   count becomes 1
    |   print 1
    |   main()
    |
count = 1
    |
    +-- count++ < 10 -> true
    |   count becomes 2
    |   print 2
    |   main()
    |
    ...
    |
count = 9
    |
    +-- count++ < 10 -> true
        count becomes 10
        print 10
        main()
    |
count = 10
    |
    +-- count++ < 10 -> false
        stop
