#include <stdio.h>
#include <string.h>
#include "splash.h"
#include "rgorlg.h"
#include "List.h"
#include "citychse.h"
#include "htlchse.h"
#include "rmchse.h"

int main(void)
{
    int twn , dnum ;

    splash();
    sleep(5);
    system("cls");

    rgorlg();

    twn = city();

    dnum = cityop(twn);
    system("cls");

    hotlop( twn , dnum );

    rooomdata();
    sleep(4);
    system("cls");


    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t Thank you for using our program");
    sleep(3);
    system("cls");

    return 0;
}
