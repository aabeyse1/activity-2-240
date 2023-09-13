// Arnika Abeysekera

#include <stdio.h>        // printf
#include <assert.h>       // assert
#include <limits.h>       // named constants for min, max of C integer data types


float sales_example(float item_cost, unsigned short num_items, float tax);

void loop_example();

void utype_sizes();

// TODO: (Task 4) Put declaration of stype_sizes here



int main() {
    // TASK 1: sales example
    float total1;
    total1 = sales_example(3.94, 4, 0.06);
    printf("Total1 = $%.2f\n", total1);
    // TODO: Test on multiple calls, then add assert statements here

    // TASK 2: loop experiment
    // TODO: place function call here
    loop_example();

    // TASK 3: unsigned integer types, sizes, and maximums
    utype_sizes();

    // TASK 4: signed integer types, sizes, mins and maxs
    // TODO: place function call here

    return 0;
}


// TASK 1:
float sales_example(float item_cost, unsigned short num_items, float tax) {
    float pre_tax = item_cost * num_items;
    float total_cost = (pre_tax * tax) + pre_tax;
    if (tax == 0.0) {
        printf("No tax applied");
    }
    return total_cost;
}

// TASK 2:
void loop_example() {
    for (int i=10; i<26; i=i+5) {
        printf("%d \n", i);
        printf("%d \n", i*i);
    }

    int i = 10;
    while(i<26) {
        printf("%d \n", i);
        printf("%d \n", i*i);
        i=i+5;
    }

    int j = 10;
    do {
        printf("%d \n", j);
        printf("%d \n", j*j);
        j=j+5;
    } while(j<26);
}

/** TODO TASK 3:
    * Add print statements to print the max values and sizes of each unsigned
    * integer type (short, int, long), based on the example of unsigned char.
    */
void utype_sizes() {
	printf("unsigned char | max: %hu | size: %zu\n", 
           (unsigned char) UCHAR_MAX, 
           sizeof(unsigned char));
}

/** TODO TASK 4:
    * Create your stype_sizes function here to print min/max values and sizes of 
    * signed integer types: char, short, int, long
    */
