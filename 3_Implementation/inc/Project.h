
/**
 * @file Project.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __FUN_H__
#define __FUN_H__
/**
 * @brief 
 * 
 * @param copper_loss 
 * @param iron_loss 
 * @param rating 
 * @return float 
 */
float optimum_load(float copper_loss,float iron_loss,float rating);
/**
 * @brief 
 * 
 * @param rating 
 * @param load_type 
 * @param pf 
 * @param hours_of_operation 
 * @return float 
 */
float energy_output(float rating,float load_type,float pf,float hours_of_operation);
/**
 * @brief 
 * 
 * @param load_type 
 * @param copper_loss 
 * @param hours_of_operation 
 * @return float 
 */
float energy_copper(float load_type,float copper_loss,float hours_of_operation);
/**
 * @brief 
 * 
 * @param iron_loss 
 * @return float 
 */
float energy_iron(float iron_loss);
/**
 * @brief 
 * 
 * @param output_energy 
 * @param copper_loss_energy 
 * @param iron_loss_energy 
 * @param cost_per_unit 
 * @return float 
 */
float cost(float output_energy,float copper_loss_energy,float iron_loss_energy,float cost_per_unit);
/**
 * @brief 
 * 
 * @param output_energy 
 * @param copper_loss_energy 
 * @param iron_loss_energy 
 * @return float 
 */
float efficiency(float output_energy,float copper_loss_energy,float iron_loss_energy);
/**
 * @brief 
 * 
 * @param l 
 * @param e 
 * @param cu_l 
 * @param emax 
 * @param cu_min 
 * @param iron 
 * @param eff 
 * @param cost 
 * @param eff_max 
 */
int display(float l,float e,float cu_l,float emax,float cu_min,float iron,float eff,float cost,float eff_max);
#endif
