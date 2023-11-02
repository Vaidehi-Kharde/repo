#include <stdio.h>
struct STOCK
{
    int id;
    float open;
    float close;
    float high;
    float low;
    int volume;
    double performance;
};

struct DAY
{
    struct STOCK stock[10];


} day[5];

void swap (struct STOCK stock[], int i, int j)
{
    struct STOCK temp;
    temp = stock[i];
    stock[i] = stock[j];
    stock[j] = temp;
}

void sort( struct STOCK pstocks[] )
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for ( j = i + 1; j < 10; j++)
        {
            if ( pstocks[j].volume < pstocks[i].volume )
            {
                swap (pstocks, i, j);
            }
            else if (pstocks[j].volume == pstocks[i].volume)
            {
                if (pstocks[j].close < pstocks[i].close)
                {
                    swap (pstocks, i, j);
                }
            }
        }

    }
}

int main()
{
<<<<<<< HEAD
    //fgsdfgf
=======
>>>>>>> 4aead3aca878d9ab820e923f47edb981bb01ee4b
    day[1].stock[0].volume = 24324;
    day[1].stock[1].volume = 14;
    day[1].stock[2].volume = 452;
    day[1].stock[3].volume = 7654;
    day[1].stock[4].volume = 46;
    day[1].stock[5].volume = 46;
    day[1].stock[6].volume = 46;
    day[1].stock[7].volume = 14;
    day[1].stock[8].volume = 2434;
    day[1].stock[9].volume = 46;

    day[1].stock[0].close = 6;
    day[1].stock[1].close = 3;
    day[1].stock[2].close = 3;
    day[1].stock[3].close = 431;
    day[1].stock[4].close = 5;
    day[1].stock[5].close = 6;
    day[1].stock[6].close = 8;
    day[1].stock[7].close = 3;
    day[1].stock[8].close = 4;
    day[1].stock[9].close = 8;

    sort (day[1].stock);

    for (int i = 0; i < 10; i++)
    {
        printf ("%d %d %f\n", day[1].stock[i].id, day[1].stock[i].volume, day[1].stock[i].close);
    }
}