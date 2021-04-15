#include "../inc/Project.h"
#include "../unity/unity_internals.h"
#include"../unity/unity.h"

#include <stdio.h>
#include <math.h>
//void setUp(){}
//void tearDown(){}
int display(float l,float e,float cu_l,float emax,float cu_min,float iron,float eff,float cost,float eff_max)
{
  if(l>0||e>0||cu_l>0||emax>0||cu_min>0||iron>0||eff>0||cost>0||eff_max>0)
  {printf("*************Results************");
  printf("\nOptimal load = %.2f\n",l);

  printf("\nOutput energy = %.2fKWh\n",e);
  
  //printf("\nMaximum Output energy possible = %.2fKWh\n",emax);

  printf("\nCopper loss in KWh = %.2fKWh\n",cu_l);
  
  //printf("\nMinimum copper loss possible in KWh= %.2fKWh\n",cu_min);
 
  printf("\nIron loss in KWh = %.2fKWh\n",iron);

  printf("\nOperational cost = RS.%.2f/-\n",cost);

  printf("\nEfficiency for a given load = %.2f%%\n",eff);
  
  printf("\nMaximum Efficiency of a given transformer = %.2f%%\n",eff_max);}
  return 0;
}
