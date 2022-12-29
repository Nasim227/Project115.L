#include "hotel.h"

int cityop(int opt)
{
    int hotnum ;

    switch(opt)
    {
     case 1:
        hotnum = dhahot();
        return hotnum;
        break;

     case 2:
        hotnum = ranhot();
        return hotnum;
        break;

     case 3:
        hotnum = chahot();
        return hotnum;
        break;

     case 4:
        hotnum = coxhot();
        return hotnum;
        break;

     case 5:
        hotnum = sylhot();
        return hotnum;
        break;

     case 6:
        hotnum = bandhot();
        return hotnum;
        break;

     default :
        printf("Invalid options!");
    }
}
