#include "Reglog.h"

void rgorlg(void)
{
    int opt ;

    printf("\n\n");

    printf("\t\t 1. Register \n");
    printf("\t\t 2. Login \n");
    printf("\n\n\t\t Pick an option....");
    scanf("%d", &opt);

    sleep(1);
    system("cls");


    if( opt == 1)
    {
        registr();
        login();
    }
    else
        login();

}
