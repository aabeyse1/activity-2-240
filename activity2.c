// Arnika Abeysekera

#include <stdio.h>        // printf
#include <assert.h>       // assert
#include <limits.h>       // named constants for min, max of C integer data types


float sales_example(float item_cost, unsigned short num_items, float tax);

void loop_example();

void utype_sizes();

void stype_sizes();



int main() {
    // TASK 1: sales example
    float total1;
    total1 = sales_example(3.94, 4, 0.06);
    printf("Total1 = $%.2f\n", total1);

    // TASK 2: loop experiment
    loop_example();

    // TASK 3: unsigned integer types, sizes, and maximums
    utype_sizes();

    // TASK 4: signed integer types, sizes, mins and maxs
    stype_sizes();

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

// TODO TASK 3:
void utype_sizes() {
	printf("unsigned char | max: %hu | size: %zu\n", 
           (unsigned char) UCHAR_MAX, 
           sizeof(unsigned char));
    printf("unsigned short | max: %hu | size: %zu\n", 
            (unsigned short) USHRT_MAX, 
            sizeof(unsigned short));
    printf("unsigned int | max: %u | size: %zu\n", 
           (unsigned int) UINT_MAX, 
           sizeof(unsigned int));
    printf("unsigned long | max: %lu | size: %zu\n", 
            (unsigned long) ULONG_MAX, 
            sizeof(unsigned long));
}

// TASK 4:
void stype_sizes() {
	printf("char | max: %hhi | min: %hhi | size: %zu\n", 
           SCHAR_MAX, 
           SCHAR_MIN,
           sizeof(char));
    printf("short | max: %hi | min: %hi | size: %zu\n", 
           SHRT_MAX, 
           SHRT_MIN,
           sizeof(short));
    printf("int | max: %d | min: %d | size: %zu\n", 
           INT_MAX, 
           INT_MIN,
           sizeof(int));
    printf("long | max: %li | min: %li | size: %zu\n", 
           LONG_MAX, 
           LONG_MIN,
           sizeof(long));
}
