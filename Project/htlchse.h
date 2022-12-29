#include "rooms1.h"
#include "rooms2.h"

void hotlop(int town , int hotl)
{
    if( town == 1 )
    {
        if( hotl == 1 )
        {
            dhone();
        }

        else if( hotl == 2 )
        {
            dhtwo();
        }

        else if( hotl == 3 )
        {
            dhthr();
        }

        else if( hotl == 4 )
        {
            dhfr();
        }
    }


    if( town == 2 )
    {
        if( hotl == 1 )
        {
            ranone();
        }

        else if( hotl == 2 )
        {
            rantwo();
        }
    }


    if( town == 3 )
    {
        if( hotl == 1 )
        {
            chaone();
        }

        else if( hotl == 2 )
        {
            chatwo();
        }

        else if( hotl == 3 )
        {
            chathr();
        }
    }


    if( town == 4 )
    {
        if( hotl == 1 )
        {
            coxone();
        }

        else if( hotl == 2 )
        {
            coxtwo();
        }

        else if( hotl == 3 )
        {
            coxthr();
        }

        else if( hotl == 4 )
        {
            coxfr();
        }
    }


    if( town == 5 )
    {
        if( hotl == 1 )
        {
            sylone();
        }

        else if( hotl == 2 )
        {
            syltwo();
        }

        else if( hotl == 3 )
        {
            sylthr();
        }
    }


    if( town == 6 )
    {
        if( hotl == 1 )
        {
            bandone();
        }

        else if( hotl == 2 )
        {
            bandtwo();
        }
    }
}
