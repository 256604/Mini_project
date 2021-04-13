
/**
 * @file Project.h
 * @author Elakiya M (Elakiya_M@embedded.com)
 * @brief An Application to Estimate the Operational cost of Transformer per annum based on load requirements and to calculate Efficiency.
 * @version 0.1
 * @date 2021-04-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __FUNCTION_H__
#define __FUNCTION_H__
/**
 * @brief Function to calculate the Optimal load for a given Transformer
 * 
 * @param copper_loss  copper loss in KW
 * @param iron_loss  iron loss in KW
 * @param rating  rating of the transformer in KVA
 * @return float  optimal load for a given Transformer
 */
float optimum_load(float copper_loss,float iron_loss,float rating);
/**
 * @brief Function to calculate the Output Energy of a Transformer per annum
 * 
 * @param rating  rating of the transformer in KVA
 * @param load_type  Amount of load usage(0.0-no load,1.0-full load)
 * @param pf  Power Factor of Operation
 * @param hours_of_operation  Number of hours of Operation
 * @return float  output energy per annum in KWh
 */
float energy_output(float rating,float load_type,float pf,float hours_of_operation);
/**
 * @brief Function to calculate the Energy spent for Copper loss of a Transformer per annum
 * 
 * @param load_type Amount of load usage(0.0-no load,1.0-full load)
 * @param copper_loss copper loss in KW
 * @param hours_of_operation Number of hours of Operation
 * @return float  energy spent for copper loss per annum in KWh
 */
float energy_copper(float load_type,float copper_loss,float hours_of_operation);
/**
 * @brief Function to calculate the Energy spent for Iron loss of a Transformer per annum
 * 
 * @param iron_loss iron loss in KW
 * @return float  energy spent for iron loss per annum in KWh
 */
float energy_iron(float iron_loss);
/**
 * @brief Function to calculate the Operational cost of a transformer per annum in Rs.
 * 
 * @param output_energy output energy per annum in KWh
 * @param copper_loss_energy energy spent for copper loss per annum in KWh
 * @param iron_loss_energy energy spent for iron loss per annum in KWh
 * @param cost_per_unit Cost of Electrical energy per unit
 * @return float Operational cost of a transformer per annum in Rs.
 */
float cost(float output_energy,float copper_loss_energy,float iron_loss_energy,float cost_per_unit);
/**
 * @brief Function to Calculate the Efficiency of transformer for a given load requirements and losses in %
 * 
 * @param output_energy output energy per annum in KWh
 * @param copper_loss_energy energy spent for copper loss per annum in KWh
 * @param iron_loss_energy energy spent for iron loss per annum in KWh
 * @return float Efficiency of transformer for a given load requirements and losses in %
 */
float efficiency(float output_energy,float copper_loss_energy,float iron_loss_energy);
/**
 * @brief Function to Display the Calculated Values for a Transformer
 * 
 * @param l optimal load for a given Transformer
 * @param e output energy per annum in KWh
 * @param cu_l energy spent for copper loss per annum in KWh
 * @param emax Maximum output energy per annum in KWh
 * @param cu_min minimum energy spent for copper loss per annum in KWh
 * @param iron energy spent for iron loss per annum in KWh
 * @param eff Efficiency of transformer for a given load requirements and losses in %
 * @param cost Operational cost of a transformer per annum in Rs.
 * @param eff_max Maximum Efficiency of transformer
 */
int display(float l,float e,float cu_l,float emax,float cu_min,float iron,float eff,float cost,float eff_max);
#endif
