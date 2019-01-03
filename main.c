#include <stdio.h>

#define log(fmt, arg...) printf("[%s][%d] "fmt"\n", __FUNCTION__, __LINE__, ##arg);

signed char convert_to_proximal_even_number(float num);

int main()
{
    float num = -5;
    signed char conv;
    do
    {
        conv = convert_to_proximal_even_number(num);
        printf("%f\t>>> %d\n", num, conv);
        num = num + 0.3;
    }while(num < 5);

    return 0;
}

signed char convert_to_proximal_even_number(float num)
{
    signed char conv;

    conv = (int)num;
    if((conv > 0) && ((conv % 2) != 0))
    {
        conv++;
    }
    else if((conv < 0) && ((conv % 2) != 0))
    {
        conv--;
    }

    return conv;
}
