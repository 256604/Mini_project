#include "../Project.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include <stdio.h>

float energy_output(float rating,float load_type,float pf,float hours_of_operation)
{
    if(rating>0&&load_type>0&&pf>0&&hours_of_operation>0)
    {float energy,output_energy;
    energy=rating*load_type*pf*hours_of_operation;
    output_energy=(float)(((int)(energy*100))/100);
    return output_energy;}
    return 0;
}
