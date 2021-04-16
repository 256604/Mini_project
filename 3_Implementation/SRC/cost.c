#include "../inc/Project.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"

#include <stdio.h>
#include <math.h>
//function to calculate operational cost 
float cost(float output_energy,float copper_loss_energy,float iron_loss_energy,float cost_per_unit)
{
    if((output_energy>0||copper_loss_energy>0||iron_loss_energy>0)&&(cost_per_unit>0))
    {float total,total_cost;
    total=(output_energy+copper_loss_energy+iron_loss_energy)*cost_per_unit;
    total_cost=floor(total*100)/100;
    return total_cost;}
    else
    return 0;
}
