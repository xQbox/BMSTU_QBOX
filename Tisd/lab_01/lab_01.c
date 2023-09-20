#include "libmy.h"

int main(void) 
{
    int rc;
    // rc = input_number();
    // int A[40] = {1,2,3,4,5,5,6,7,8,9,1,2,3,4,5,5,6,7,8,9,1,2,3,4,5,5,6,7,8,9,1,9,9,9,8,8,8,9,9,9};
    // int B[5] = {9,7,9,9,9};
    // int a = 9;
    // multiply_by_digit(A, a, 10);
    // multiply_by_digit(A, a, 10);
    // multiply(A, 40, B, 5); 
    struct long_number_t mantissa;
    rc = struct_input(&mantissa);
    printf("\n%c -> sign\n", mantissa.mantissa_sign);
    printf("mantissa->");
    for (int i = 0; i < 40; i++)
        printf("%c", mantissa.mantissa[i]);
    
    printf("\n%c -> order_sign\n", mantissa.order_sign);
    printf("%d -> order\n", mantissa.order);
    return rc;
}