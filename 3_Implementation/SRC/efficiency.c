#include "../Project.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include <stdio.h>

float efficiency(float output_energy,float copper_loss_energy,float iron_loss_energy)
{
    if(output_energy>0&&(copper_loss_energy>0||iron_loss_energy>0))
    {float eff,efficiency;
    eff=(output_energy/(output_energy+copper_loss_energy+iron_loss_energy))*100;
    efficiency=(float)(((int)(eff*100))/100);
    return efficiency;}
    else
    return 0;
}