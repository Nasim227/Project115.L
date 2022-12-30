#include <stdio.h>
#include <string.h>
#include "splash.h"
#include "List.h"
#include "citychse.h"
#include "htlchse.h"
#include "rmchse.h"

int main(void)
{
    int twn , dnum ;

    splash();
    sleep(6);
    system("cls");

    twn = city();

    dnum = cityop(twn);
    system("cls");

    hotlop( twn , dnum );

    rooomdata();
    sleep(6);
    system("cls");


    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t Thank you for using our program");
    sleep(4);
    system("cls");

    return 0;
}
