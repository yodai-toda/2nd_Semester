#include <iostream>
#include "Employee.h"

int main()
{
    Employee satou( Employee::POST::STAFF );
    Employee deguchi( Employee::POST::PRESIDENT );

    satou.ShowPost();
    deguchi.ShowPost();

    if ( satou > deguchi )
    {
        printf("satouさんのほうが偉い\n");
    }
    else
    {
        printf( "deguchiさんのほうが偉い…かも?\n" );
    }

    return 0;
}

