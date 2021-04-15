#include "../inc/Project.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"

#include <stdio.h>

float energy_copper(float load_type,float copper_loss,float hours_of_operation)
{
    if(load_type>0&&copper_loss>0&&hours_of_operation>0){
    float copper,copper_energy;
    copper=load_type*load_type*copper_loss*hours_of_operation;
    copper_energy=(float)(((int)(copper*100))/100);
    return copper_energy;}
    else
    return 0;
}
