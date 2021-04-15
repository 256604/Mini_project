#include "../inc/Project.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include<stdio.h>
#include<math.h>

//void setUp(){}
//void tearDown(){}
float optimum_load(float copper_loss,float iron_loss,float rating)
{
    
    float load_,load,rt,t;
    if((copper_loss>0)&&(iron_loss>0))
    {rt=(iron_loss/copper_loss);
    t=pow(rt,0.5);
    load_=t*rating;
    load=(float)(((int)(load_*100))/100);
    return load;}
    else
    return 0;
}
