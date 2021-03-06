/*------------------------------------------------------------------------------
Copyright (C) 2004-2007 Hydro-Quebec

This file is part of CGNSOO

CGNSOO is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

CGNSOO is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with CGNSOO  If not, write to the Free Software Foundation,
Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
------------------------------------------------------------------------------*/
		{ NULL_DATA,	"NullData" },
                // Coordinates
		{ COORDINATE_X,	"CoordinateX" },
		{ COORDINATE_Y,	"CoordinateY" },
		{ COORDINATE_Z,	"CoordinateZ" },
		{ COORDINATE_R,	"CoordinateR" },
		{ COORDINATE_THETA,	"CoordinateTheta" },
		{ COORDINATE_PHI,	"CoordinatePhi" },
		{ COORDINATE_NORMAL,	"CoordinateNormal" },
		{ COORDINATE_TANGENTIAL,	"CoordinateTangential" },
		{ COORDINATE_XI,	"CoordinateXi" },
		{ COORDINATE_ETA,	"CoordinateEta" },
		{ COORDINATE_ZETA,	"CoordinateZeta" },
                // Coordinate related
		{ COORDINATE_TRANSFORM,	"CoordinateTransform" },
		{ INTERPOLANTS_DONOR,	"InterpolantsDonor" },
		{ ELEMENT_CONNECTIVITY,	"ElementConnectivity" },
		{ PARENT_DATA,	"ParentData" },
                // Solution quantities
		{ POTENTIAL,	"Potential" },
		{ STREAM_FUNCTION,	"StreamFunction" },
		{ DENSITY,	"Density" },
		{ PRESSURE,	"Pressure" },
		{ TEMPERATURE,	"Temperature" },
		{ ENERGY_INTERNAL,	"EnergyInternal" },
		{ ENTHALPY,	"Enthalpy" },
		{ ENTROPY,	"Entropy" },
		{ ENTROPY_APPROX,	"EntropyApprox" },
		{ DENSITY_STAGNATION,	"DensityStagnation" },
		{ PRESSURE_STAGNATION,	"PressureStagnation" },
		{ TEMPERATURE_STAGNATION,	"TemperatureStagnation" },
		{ ENERGY_STAGNATION,	"EnergyStagnation" },
		{ ENTHALPY_STAGNATION,	"EnthalpyStagnation" },
		{ ENERGY_STAGNATION_DENSITY,	"EnergyStagnationDensity" },
		{ VELOCITY_X,	"VelocityX" },
		{ VELOCITY_Y,	"VelocityY" },
		{ VELOCITY_Z,	"VelocityZ" },
		{ VELOCITY_R,	"VelocityR" },
		{ VELOCITY_THETA,	"VelocityTheta" },
		{ VELOCITY_PHI,	"VelocityPhi" },
		{ VELOCITY_MAGNITUDE,	"VelocityMagnitude" },
		{ VELOCITY_NORMAL,	"VelocityNormal" },
		{ VELOCITY_TANGENTIAL,	"VelocityTangential" },
		{ VELOCITY_SOUND,	"VelocitySound" },
		{ VELOCITY_SOUND_STAGNATION,	"VelocitySoundStagnation" },
		{ MOMENTUM_X,	"MomentumX" },
		{ MOMENTUM_Y,	"MomentumY" },
		{ MOMENTUM_Z,	"MomentumZ" },
		{ MOMENTUM_MAGNITUDE,	"MomentumMagnitude" },
		{ ROTATING_VELOCITY_X,	"RotatingVelocityX" },
		{ ROTATING_VELOCITY_Y,	"RotatingVelocityY" },
		{ ROTATING_VELOCITY_Z,	"RotatingVelocityZ" },
		{ ROTATING_MOMENTUM_X,	"RotatingMomentumX" },
		{ ROTATING_MOMENTUM_Y,	"RotatingMomentumY" },
		{ ROTATING_MOMENTUM_Z,	"RotatingMomentumZ" },
		{ ROTATING_VELOCITY_MAGNITUDE,	"RotatingVelocityMagnitude" },
		{ ROTATING_PRESSURE_STAGNATION,	"RotatingPressureStagnation" },
		{ ROTATING_ENERGY_STAGNATION,	"RotatingEnergyStagnation" },
		{ ROTATING_ENERGY_STAGNATION_DENSITY,	"DensityRotatingEnergyStagnation" },
		{ ROTATING_ENTHALPY_STAGNATION,	"RotatingEnthalpyStagnation" },
		{ ENERGY_KINETIC,	"EnergyKinetic" },
		{ PRESSURE_DYNAMIC,	"PressureDynamic" },
		{ SOUND_INTENSITY_DB,	"SoundIntensityDb" },
		{ SOUND_INTENSITY,	"SoundIntensity" },
		{ VORTICITY_X,	"VorticityX" },
		{ VORTICITY_Y,	"VorticityY" },
		{ VORTICITY_Z,	"VorticityZ" },
		{ VORTICITY_MAGNITUDE,	"VorticityMagnitude" },
		{ SKIN_FRICTION_X,	"SkinFrictionX" },
		{ SKIN_FRICTION_Y,	"SkinFrictionY" },
		{ SKIN_FRICTION_Z,	"SkinFrictionZ" },
		{ SKIN_FRICTION_MAGNITUDE,	"SkinFrictionMagnitude" },
		{ VELOCITY_ANGLE_X,	"VelocityAngleX" },
		{ VELOCITY_ANGLE_Y,	"VelocityAngleY" },
		{ VELOCITY_ANGLE_Z,	"VelocityAngleZ" },
		{ VELOCITY_UNIT_VECTOR_X,	"XVelocityUnitVector" },
		{ VELOCITY_UNIT_VECTOR_Y,	"YVelocityUnitVector" },
		{ VELOCITY_UNIT_VECTOR_Z,	"ZVelocityUnitVector" },
		{ MASS_FLOW,	"MassFlow" },
		{ VISCOSITY_KINEMATIC,	"ViscosityKinematic" },
		{ VISCOSITY_MOLECULAR,	"ViscosityMolecular" },
		{ VISCOSITY_EDDY_KINEMATIC,	"ViscosityEddyKinematic" },
		{ VISCOSITY_EDDY,	"ViscosityEddy" },
		{ THERMAL_CONDUCTIVITY,	"ThermalConductivity" },
		{ REYNOLDS_STRESS_XX,	"ReynoldsStressXx" },
		{ REYNOLDS_STRESS_XY,	"ReynoldsStressXy" },
		{ REYNOLDS_STRESS_XZ,	"ReynoldsStressXz" },
		{ REYNOLDS_STRESS_YY,	"ReynoldsStressYy" },
		{ REYNOLDS_STRESS_YZ,	"ReynoldsStressYz" },
		{ REYNOLDS_STRESS_ZZ,	"ReynoldsStressZz" },
                // Solution related
		{ POWER_LAW_EXPONENT,	"PowerLawExponent" },
		{ SUTHERLAND_LAW_CONSTANT,	"SutherlandLawConstant" },
		{ TEMPERATURE_REFERENCE,	"TemperatureReference" },
		{ VISCOSITY_MOLECULAR_REFERENCE,	"ViscosityMolecularReference" },
		{ THERMAL_CONDUCTIVITY_REFERENCE,	"ThermalConductivityReference" },
		{ IDEAL_GAS_CONSTANT,	"IdealGasConstant" },
		{ SPECIFIC_HEAT_PRESSURE,	"SpecificHeatPressure" },
		{ SPECIFIC_HEAT_VOLUME,	"SpecificHeatVolume" },
		{ LENGTH_REFERENCE,	"LengthReference" },
                // Turbulence model quantities
		{ TURBULENT_DISTANCE,	"TurbulentDistance" },
		{ TURBULENT_ENERGY_KINETIC,	"TurbulentEnergyKinetic" },
		{ TURBULENT_DISSIPATION,	"TurbulentDissipation" },
		{ TURBULENT_DISSIPATION_RATE,	"TurbulentDissipationRate" },
		{ TURBULENT_B_B_REYNOLDS,	"ReynoldsTurbulentBB" },
		{ TURBULENT_S_A_NU_TILDE,	"NuTildeTurbulentSA" },
				// Electromag
		{ VOLTAGE,	"Voltage" },
		{ ELECTRIC_FIELD_X,	"ElectricFieldX" },
		{ ELECTRIC_FIELD_Y,	"ElectricFieldY" },
		{ ELECTRIC_FIELD_Z,	"ElectricFieldZ" },
		{ MAGNETIC_FIELD_X,	"MagneticFieldX" },
		{ MAGNETIC_FIELD_Y,	"MagneticFieldY" },
		{ MAGNETIC_FIELD_Z,	"MagneticFieldZ" },
		{ CURRENT_DENSITY_X,	"CurrentDensityX" },
		{ CURRENT_DENSITY_Y,	"CurrentDensityY" },
		{ CURRENT_DENSITY_Z,	"CurrentDensityZ" },
		{ ELECTRIC_CONDUCTIVITY,	"ElectricConductivity" },
		{ LORENTZ_FORCE_X,	"LorentzForceX" },
		{ LORENTZ_FORCE_Y,	"LorentzForceY" },
		{ LORENTZ_FORCE_Z,	"LorentzForceZ" },
		{ JOULE_HEATING,	"JouleHeating" },
                // Nondimensional parameters
		{ MACH,	"Mach" },
		{ MACH_VELOCITY,	"MachVelocity" },
		{ MACH_VELOCITY_SOUND,	"MachVelocitySound" },
		{ REYNOLDS,	"Reynolds" },
		{ REYNOLDS_VELOCITY,	"ReynoldsVelocity" },
		{ REYNOLDS_LENGTH,	"ReynoldsLength" },
		{ REYNOLDS_VISCOSITY_KINEMATIC,	"ReynoldsViscosityKinematic" },
		{ PRANDTL,	"Prandtl" },
		{ PRANDTL_THERMAL_CONDUCTIVITY,	"PrandtlThermalConductivity" },
		{ PRANDTL_VISCOSITY_MOLECULAR,	"PrandtlViscosityMolecular" },
		{ PRANDTL_SPECIFIC_HEAT_PRESSURE,	"PressurePrandtlSpecificHeat" },
		{ PRANDTL_TURBULENT,	"PrandtlTurbulent" },
		{ SPECIFIC_HEAT_RATIO,	"SpecificHeatRatio" },
		{ SPECIFIC_HEAT_RATIO_PRESSURE,	"PressureSpecificHeatRatio" },
		{ SPECIFIC_HEAT_RATIO_VOLUME,	"VolumeSpecificHeatRatio" },
		{ COEF_PRESSURE,	"CoefPressure" },
		{ COEF_SKIN_FRICTION_X,	"XCoefSkinFriction" },
		{ COEF_SKIN_FRICTION_Y,	"YCoefSkinFriction" },
		{ COEF_SKIN_FRICTION_Z,	"ZCoefSkinFriction" },
		{ COEF_PRESSURE_DYNAMIC,	"CoefPressureDynamic" },
		{ COEF_PRESSURE_REFERENCE,	"CoefPressureReference" },
                // Characteristics and Riemann invariants
		{ RIEMANN_INVARIANT_PLUS,	"RiemannInvariantPlus" },
		{ RIEMANN_INVARIANT_MINUS,	"RiemannInvariantMinus" },
		{ CHARACTERISTIC_ENTROPY,	"CharacteristicEntropy" },
		{ CHARACTERISTIC_VORTICITY_1,	"CharacteristicVorticity1" },
		{ CHARACTERISTIC_VORTICITY_2,	"CharacteristicVorticity2" },
		{ CHARACTERISTIC_ACOUSTIC_PLUS,	"CharacteristicAcousticPlus" },
		{ CHARACTERISTIC_ACOUSTIC_MINUS,	"CharacteristicAcousticMinus" },
                // Forces and moments
		{ FORCE_X,	"ForceX" },
		{ FORCE_Y,	"ForceY" },
		{ FORCE_Z,	"ForceZ" },
		{ FORCE_R,	"ForceR" },
		{ FORCE_THETA,	"ForceTheta" },
		{ FORCE_PHI,	"ForcePhi" },
		{ LIFT,	"Lift" },
		{ DRAG,	"Drag" },
		{ MOMENT_X,	"MomentX" },
		{ MOMENT_Y,	"MomentY" },
		{ MOMENT_Z,	"MomentZ" },
		{ MOMENT_R,	"MomentR" },
		{ MOMENT_THETA,	"MomentTheta" },
		{ MOMENT_PHI,	"MomentPhi" },
		{ MOMENT_XI,	"MomentXi" },
		{ MOMENT_ETA,	"MomentEta" },
		{ MOMENT_ZETA,	"MomentZeta" },
		{ MOMENT_CENTER_X,	"MomentCenterX" },
		{ MOMENT_CENTER_Y,	"MomentCenterY" },
		{ MOMENT_CENTER_Z,	"MomentCenterZ" },
		{ COEF_LIFT,	"CoefLift" },
		{ COEF_DRAG,	"CoefDrag" },
		{ COEF_MOMENT_X,	"CoefMomentX" },
		{ COEF_MOMENT_Y,	"CoefMomentY" },
		{ COEF_MOMENT_Z,	"CoefMomentZ" },
		{ COEF_MOMENT_R,	"CoefMomentR" },
		{ COEF_MOMENT_THETA,	"CoefMomentTheta" },
		{ COEF_MOMENT_PHI,	"CoefMomentPhi" },
		{ COEF_MOMENT_XI,	"CoefMomentXi" },
		{ COEF_MOMENT_ETA,	"CoefMomentEta" },
		{ COEF_MOMENT_ZETA,	"CoefMomentZeta" },
                //COEF_PRESSURE_DYNAMIC, // already under nondimensional parameters
		{ COEF_AREA,	"CoefArea" },
		{ COEF_LENGTH,	"CoefLength" },
                // Time-dependent flow
		{ TIME_VALUES,	"TimeValues" },
		{ ITERATION_VALUES,	"IterationValues" },
		{ NUMBER_OF_ZONES,	"NumberOfZones" },
		{ NUMBER_OF_FAMILIES,	"NumberOfFamilies" },
		{ ZONE_POINTERS,	"ZonePointers" },
		{ FAMILY_POINTERS,	"FamilyPointers" },
		{ RIGID_GRID_MOTION_POINTERS,	"PointersRigidGridMotion" },
		{ ARBITRARY_GRID_MOTION_POINTERS,	"PointersArbitraryGridMotion" },
		{ GRID_COORDINATES_POINTERS,	"GridCoordinatesPointers" },
		{ FLOW_SOLUTIONS_POINTERS,	"FlowSolutionsPointers" },
		{ ORIGIN_LOCATION,	"OriginLocation" },
		{ RIGID_ROTATION_ANGLE,	"RigidRotationAngle" },
		{ RIGID_VELOCITY,	"RigidVelocity" },
		{ RIGID_ROTATION_RATE,	"RigidRotationRate" },
		{ GRID_VELOCITY_X,	"GridVelocityX" },
		{ GRID_VELOCITY_Y,	"GridVelocityY" },
		{ GRID_VELOCITY_Z,	"GridVelocityZ" },
		{ GRID_VELOCITY_R,	"GridVelocityR" },
		{ GRID_VELOCITY_THETA,	"GridVelocityTheta" },
		{ GRID_VELOCITY_PHI,	"GridVelocityPhi" },
		{ GRID_VELOCITY_XI,	"GridVelocityXi" },
		{ GRID_VELOCITY_ETA,	"GridVelocityEta" },
		{ GRID_VELOCITY_ZETA,	"GridVelocityZeta" },
                // from version 2.1 on
		{ FUEL_AIR_RATIO,	"FuelAirRatio" },
		{ REFERENCE_TEMPERATURE_HOF,	"ReferenceTemperatureHof" },
		{ ENTHALPY_ENERGY_RATIO,	"EnthalpyEnergyRatio" },
		{ COMPRESSIBILITY_FACTOR,	"CompressibilityFactor" },
		{ VIBRATIONAL_ELECTRON_ENERGY,	"VibrationalElectronEnergy" },
		{ HEAT_OF_FORMATION,	"HeatOfFormation" },
		{ VIBRATIONAL_ELECTRON_TEMPERATURE,	"VibrationalElectronTemperature" },
                // Done with all predefined quantities
