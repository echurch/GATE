#ifndef __PHYSICAL_CONST_H
#define __PHYSICAL_CONST_H

#include<system_of_units.h>

/**
\namespace gate
\brief HEP coherent physical constants

Taken from CLHEP/Units/PhysicalConstants.h

This has been provided by Geant4 (simulation toolkit for HEP).

The basic units are :
             millimeter  
             nanosecond  
             Mega electron Volt  
             positon charge 
             degree Kelvin
             amount of substance (mole)
             luminous intensity (candela)
             radian  
             steradian 

Below is a non exhaustive list of Physical CONSTANTS,
computed in the Internal HEP System Of Units.

Most of them are extracted from the Particle Data Book :
       Phys. Rev. D  volume 50 3-1 (1994) page 1233

       ...with a meaningful (?) name ...

You can add your own constants.

Author: M.Maire
*/


namespace gate{

static const double     pi  = 3.14159265358979323846; ///< the number pi
static const double  twopi  = 2*pi; ///< twice the number pi
static const double halfpi  = pi/2; ///< half the number pi
static const double     pi2 = pi*pi;///< the number pi squared

/// Avogadro's number: number of particles per mole.
static const double Avogadro = 6.0221367e+23/gate::mole;

/// c   = 299.792458 mm/ns
static const double c_light   = 2.99792458e+8 * gate::m/gate::s;
/// c^2 = 898.7404 (mm/ns)^2 
static const double c_squared = c_light * c_light;

/// h     = 4.13566e-12 MeV*ns
static const double h_Planck      = 6.6260693e-34 * gate::joule*gate::s;
/// hbar  = 6.58212e-13 MeV*ns
static const double hbar_Planck   = h_Planck/twopi;
/// hbarc = 197.32705e-12 MeV*mm
static const double hbarc         = hbar_Planck * c_light;
/// hbarc squared
static const double hbarc_squared = hbarc * hbarc;

/// Charge of an electron
static const double electron_charge = -1.*gate::eplus; 
/// Charge of an electron squared
static const double e_squared = gate::eplus * gate::eplus;

/// Mass of an electron in natural units
static const double electron_mass_c2 = 0.510998918 * gate::MeV;
/// Mass of a proton in natural units
static const double   proton_mass_c2 = 938.272029 * gate::MeV;
/// Mass of a neutron in natural units
static const double  neutron_mass_c2 = 939.56536 * gate::MeV;

/// amu_c2 - atomic equivalent mass unit
static const double           amu_c2 = 931.494043 * gate::MeV;
/// amu    - atomic mass unit
static const double              amu = amu_c2/c_squared;

/// permeability of free space mu0    = 2.01334e-16 Mev*(ns*eplus)^2/mm
static const double mu0      = 4*pi*1.e-7 * gate::henry/gate::m;
/// permittivity of free space epsil0 = 5.52636e+10 eplus^2/(MeV*mm)
static const double epsilon0 = 1./(c_squared*mu0);

/// electromagnetic coupling = 1.43996e-12 MeV*mm/(eplus^2)
static const double elm_coupling           = e_squared/(4*pi*epsilon0);
/// The unitless fine structure constant
static const double fine_structure_const   = elm_coupling/hbarc;
/// Classical electron radius
static const double classic_electr_radius  = elm_coupling/electron_mass_c2;
/// Electron Compton's wavelength
static const double electron_Compton_length = hbarc/electron_mass_c2;
/// Bohr radius
static const double Bohr_radius = electron_Compton_length/fine_structure_const;

static const double alpha_rcl2 = fine_structure_const
                                   *classic_electr_radius
                                   *classic_electr_radius;

static const double twopi_mc2_rcl2 = twopi*electron_mass_c2
                                             *classic_electr_radius
                                             *classic_electr_radius;
/// Boltzmann's constant
static const double k_Boltzmann = 8.617385e-11 * gate::MeV/gate::kelvin;

/// Temperature at standard temperature and pressure
static const double STP_Temperature = 273.15*gate::kelvin;
/// Pressure at standard temperature and pressure
static const double STP_Pressure    = 1.*gate::atmosphere;
static const double kGasThreshold   = 10.*gate::mg/gate::cm3;

static const double universe_mean_density = 1.e-25*gate::g/gate::cm3;

 static const double muon_mass_c2 = 1.05658357E-01*gate::GeV;
 
 static const double alpha_mass_c2 = 3.727*gate::GeV;

} 

#endif
