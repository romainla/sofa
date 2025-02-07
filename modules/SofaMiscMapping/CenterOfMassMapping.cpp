/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2019 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#define SOFA_COMPONENT_MAPPING_CENTEROFMASSMAPPING_CPP

#include <SofaMiscMapping/CenterOfMassMapping.inl>
#include <sofa/defaulttype/VecTypes.h>
#include <sofa/defaulttype/RigidTypes.h>
#include <sofa/core/ObjectFactory.h>

namespace sofa
{

namespace component
{

namespace mapping
{

using namespace sofa::defaulttype;

// Register in the Factory
int CenterOfMassMappingClass = core::RegisterObject("Set the point to the center of mass of the DOFs it is attached to")
        .add< CenterOfMassMapping< Rigid3Types, Vec3Types > >()
        .add< CenterOfMassMapping< Rigid2Types, Vec2Types > >()
        .add< CenterOfMassMapping< Rigid3Types, ExtVec3Types > >();

template class SOFA_MISC_MAPPING_API CenterOfMassMapping< Rigid3Types, Vec3dTypes >;
template class SOFA_MISC_MAPPING_API CenterOfMassMapping< Rigid2Types, Vec2Types >;
template class SOFA_MISC_MAPPING_API CenterOfMassMapping< Rigid3Types, ExtVec3Types >;

} // namespace mapping

} // namespace component

} // namespace sofa

