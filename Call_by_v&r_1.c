//
//  Call_by_value & Call_by_reference
//  Embedded C
//
//  Created by Ian Wang on 9/22/16.
//  Copyright © 2016 Ian Wang. All rights reserved.
//

#include <stdio.h>

void call_by_value(int x)
{
    printf("Inside call_by_value x = %d before adding 10.\n", x);
    x += 10;
    printf("Inside call_by_value x = %d after adding 10.\n", x);
}

void call_by_reference(int *y)
{
    printf("Inside call_by_reference y = %d before adding 10.\n", *y);
    (*y) += 10;
    printf("Inside call_by_reference y = %d after adding 10.\n", *y);
}


int main()
{
    int a=10;
    printf("\nCall_by_value\n");
    printf("a = %d before function call_by_value.\n", a);
    call_by_value(a);
    printf("a = %d after function call_by_value.\n", a);
    printf("\n");
    //In this call-by-value source code example. In the main() we create a integer that has the value of 10. We print some information at every stage, beginning by printing our variable a. Then function call_by_value is called and we input the variable a. This variable (a) is then copied to the function variable x.
    //In the function we add 10 to x (and also call some print statements). Then when the next statement is called in main() the value of variable a is printed. We can see that the value of variable a isn’t changed by the call of the function call_by_value().
    
    int b=10;
    printf("\nCall_by_reference\n");
    printf("b = %d before function call_by_reference.\n", b);
    call_by_reference(&b);
    printf("b = %d after function call_by_reference.\n", b);
    //We start with an integer b that has the value 10. The function call_by_reference() is called and the address of the variable b is passed to this function. Inside the function there is some before and after print statement done and there is 10 added to the value at the memory pointed by y.
    //Therefore at the end of the function the value is 20. Then in main() we again print the variable b and as you can see the value is changed (as expected) to 20.
    
    return 0;
}


