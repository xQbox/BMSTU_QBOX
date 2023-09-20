#include "libmy.h"

int input_number()
{
    char sign;
    char mantissa[ARR_LEN];
    int order;
    printf("Введите знак мантиссы: ");
    if ((scanf("%c", &sign)) != 1)
        return ERR_IO;
    if ((sign != '+') && (sign != '-'))   
        return ERR_DATA;
    printf("Введите мантиссу: ");
    if ((scanf("%s", mantissa)) != 1)
        return ERR_IO;
    printf("Введите порядок: ");
    if ((scanf("%d", &order)) != 1)
        return ERR_IO;
    return ERR_OK;
}

int struct_input(struct long_number_t *long_number)
{
    int rc = ERR_OK;
    char tmp;
    if ((rc = sign_input(&long_number->mantissa_sign)) == ERR_OK)
    {   
        scanf("%c", &tmp);
        if ((rc = mantissa_input(long_number->mantissa)) == ERR_OK)
        {
            if ((rc = sign_input(&long_number->order_sign)) == ERR_OK)
            {
                if (((rc = order_input(&long_number->order)) != ERR_OK))
                {
                    return rc;
                }
                return rc;
            }
            return rc;
        }
        return rc;
    }      
    return rc;
}
int order_input(int *order)
{
    if ((scanf("%d", order)) != 1)
        return ERR_IO;
    if ((*order > 99999) || (*order < 99999))
        return ERR_RANGE;
    return ERR_OK;
}
int sign_input(char *sign)
{
    
    if ((scanf("%c", sign)) != 1)
        return ERR_IO;
    if ((*sign != '+') && (*sign != '-'))
        return ERR_DATA;
    return ERR_OK;

}

int mantissa_input(char *mantissa)
{
    char M[40];

    if ((fgets(M, sizeof(M), stdin)) == NULL) 
        return ERR_IO;
    for (char *i = M; *i != '\0'; i++)
    {
        printf("%c", *i);
    }
    strcpy(mantissa, M);
    return ERR_OK;
}
