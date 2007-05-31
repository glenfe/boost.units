// mcs::units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2003-2007 Matthias Christian Schabel
// Copyright (C) 2007 Steven Watanabe
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_SI_KINEMATIC_VISCOSITY_HPP
#define BOOST_UNITS_SI_KINEMATIC_VISCOSITY_HPP

#include <boost/units/systems/si/base.hpp>
#include <boost/units/systems/derived_dimensions/kinematic_viscosity_derived_dimension.hpp>

namespace boost {

namespace units { 

namespace SI {

typedef unit<kinematic_viscosity_dimension,SI::system>     kinematic_viscosity;
    
} // namespace SI

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_SI_KINEMATIC_VISCOSITY_HPP
