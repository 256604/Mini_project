#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include"inc/Project.h"
void setUp(){}
void tearDown(){}
enum calculate
{
    OPTIMAL_LOAD=1,OUTPUT_ENERGY,COPPER_LOSS_KWH,IRON_LOSS_KWH,MAXIMUM_EFFICIENCY,EFFICIENCY_FOR_A_GIVEN_LOAD,OPERATIONAL_COST,DISPLAY,EXIT
};

int calculation;
int i,j;


typedef struct Transformer
{
    float rating;
    float copper_loss;
    float iron_loss;
    float cost_per_unit;
    int annual_load_condition;
}t; 
int main()
{
    t t1;
    t *tp;
    tp=(t *)malloc(20);
    tp=&t1;
    /*printf("*****************Enter Transformer informations*****************\n");
    printf("\n------------------------------------------------------------------\n");
    printf("\nEnter transformer Rating in KVA\n");
    scanf("%f",&t1.rating);
    printf("Enter copper loss in KW\n");
    scanf("%f",&t1.copper_loss);
    printf("Enter iron loss in KW\n");
    scanf("%f",&t1.iron_loss);
    printf("Enter cost per unit of energy\n");
    scanf("%f",&t1.cost_per_unit);
    printf("Enter the number of annual load conditions\n");
    scanf("%d",&t1.annual_load_condition);
    float load_info[t1.annual_load_condition][3];
    
    for(i=0;i<t1.annual_load_condition;i++)
    {
        printf("Enter the load information:load_type,pf,hours of operation\n");
        for(j=0;j<3;j++)
        {
            scanf("%f",&load_info[i][j]);
        }
    }
    printf("\n--------------------------------------------------------------------\n");*/
    t1.rating=125.0;
    t1.copper_loss=1.5;
    t1.iron_loss=1.0;
    t1.cost_per_unit=3.5;
    t1.annual_load_condition=3;
    float load_info[3][3] = {1.0,0.8,2000.0,1.0/3,0.8,3000.0};
    printf("\n--------------------------------------------------------------------\n");
    printf("*****************Transformer calculations*****************\n");
    printf("1.Optimal load\n2.Output energy\n3.Copper loss(in KWh)\n4.Iron loss(in KWh)\n5.Maximum Efficiency\n6.Efficiency for the given load\n7.Operational Cost\n8.Display\n9.Exit\n");
start:
    printf("Enter your choice\n");
    scanf("%d",&calculation);
    if((calculation>=OPTIMAL_LOAD)&&(calculation<=EXIT)!=1)
    printf("Wrong choice\n please Enter valid choice\n");
    //int s;
    
  
    //printf("%d",sizeof(a));
    float load,output_energy=0,copper_loss_energy=0,iron_loss_energy,operational_cost,max_efficiency,efficiency_;
    float output_energy_max=0,copper_loss_energy_min=0;
    
    
    
    for(i=0;i<3;i++)
    {for(j=0;j<1;j++)
    {
    output_energy+=energy_output(tp->rating,load_info[i][j],load_info[i][j+1],load_info[i][j+2]);
    copper_loss_energy+=energy_copper(load_info[i][j],tp->copper_loss,load_info[i][j+2]);
    output_energy_max+=energy_output(tp->rating,load/tp->rating,load_info[i][j+1],load_info[i][j+2]);
    copper_loss_energy_min+=energy_copper(load/tp->rating,tp->copper_loss,load_info[i][j+2]);
    }}

    load=optimum_load(tp->copper_loss,tp->iron_loss,tp->rating);
    iron_loss_energy=energy_iron(tp->iron_loss);
    efficiency_=efficiency(output_energy,copper_loss_energy,iron_loss_energy);
    operational_cost=cost(output_energy,copper_loss_energy,iron_loss_energy,t1.cost_per_unit);
    max_efficiency=efficiency(output_energy_max,copper_loss_energy_min,iron_loss_energy);

    
    switch (calculation)
    {
    case OPTIMAL_LOAD:
        printf("optimal load = %fKVA\n",load);
        break;
    case OUTPUT_ENERGY:
        printf("output energy = %fKWh\n",output_energy);
        break;
    case COPPER_LOSS_KWH:
        printf("copper loss in KWh = %fKWh\n",copper_loss_energy);
        break;
    case IRON_LOSS_KWH:
        printf("iron loss in KWh = %fKWh\n",iron_loss_energy);
        break;
    case OPERATIONAL_COST:
        printf("operational cost = RS.%f/-\n",operational_cost);
        break;
    case MAXIMUM_EFFICIENCY:
        printf("Maximum Efficiency of a given transformer = %f%%\n",max_efficiency);
        break;
    case EFFICIENCY_FOR_A_GIVEN_LOAD:
        printf("Efficiency for a given load = %f%%\n",efficiency_);
        break;
    case DISPLAY:
        display(load,output_energy,copper_loss_energy,output_energy_max,copper_loss_energy_min,iron_loss_energy,efficiency_,operational_cost,max_efficiency);
        break;
    case EXIT:
        exit(0);
    }
    printf("\n----------------------------------------------------------------------\n");
    goto start;
    free(tp);
}
    

