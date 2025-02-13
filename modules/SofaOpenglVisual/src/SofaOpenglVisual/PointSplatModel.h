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
#ifndef SOFA_COMPONENT_VISUALMODEL_POINTSPLATMODEL_H
#define SOFA_COMPONENT_VISUALMODEL_POINTSPLATMODEL_H
#include "config.h"

#include <sofa/core/visual/VisualModel.h>
#include <sofa/defaulttype/VecTypes.h>
#include <SofaBaseTopology/TopologyData.h>
#include <sofa/defaulttype/RGBAColor.h>

namespace sofa
{
namespace core
{
namespace topology
{
class BaseMeshTopology;
}
namespace behavior
{
class BaseMechanicalState;
}
}

namespace component
{

namespace visualmodel
{

class SOFA_OPENGL_VISUAL_API PointSplatModel : public core::visual::VisualModel
{
public:
    SOFA_CLASS(PointSplatModel,core::visual::VisualModel);
protected:
    PointSplatModel();
    ~PointSplatModel() override;
public:
    void init() override;

    void reinit() override;

    virtual bool isTransparent() {return true;}

    void drawTransparent(const core::visual::VisualParams* vparams) override;

private:
    Data<float>		radius; ///< Radius of the spheres.
    Data<int>		textureSize; ///< Size of the billboard texture.
    Data<float>		alpha; ///< Opacity of the billboards. 1.0 is 100% opaque.
    Data<defaulttype::RGBAColor>	color; ///< Billboard color.(default=[1.0,1.0,1.0,1.0])

    core::topology::BaseMeshTopology*	_topology;
    core::behavior::BaseMechanicalState* _mstate;

    unsigned char *texture_data;
    component::topology::PointData<sofa::helper::vector<unsigned char> >		pointData; ///< scalar field modulating point colors

    typedef defaulttype::ExtVec3fTypes::Coord Coord;
    typedef defaulttype::ExtVec3fTypes::VecCoord VecCoord;
    typedef defaulttype::ExtVec3fTypes::Real Real;
};

} // namespace visualmodel

} // namespace component

} // namespace sofa

#endif
