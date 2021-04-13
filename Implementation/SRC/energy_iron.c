#include "../Project.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include <stdio.h>

float energy_iron(float iron_loss)
{
    if(iron_loss>0)
    {float iron,iron_energy;
    iron_energy=iron_loss*24*365;
    iron=(float)(((int)(iron_energy*100))/100);
    return iron;}
    else
    return 0;
}