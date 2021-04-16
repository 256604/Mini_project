# Test plan:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |cost|192000.0,3000.0,8760.0,3.5|713160.0000|713160.0000|Requirement based|
|  H_02       |efficiency|192000.0,3000.0,8760.0|94.0000|94.0000|Requirement based|

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Optimum_load|1.3,1.0,120.0|105.0000|105.0000|Requirement based |
|  L_02       |energy_output|120.0,1.0,0.8,2000.0|192000.0000|192000.0000|Requirement based|
|  L_03       |energy_spent_for_copper_loss|1.0,1.5,2000.0|3000.0000|3000.0000|Requirement based|
|  L_04       |energy_spent_for_iron_loss|1.0|8760.0000|8760.0000|Requirement based|

