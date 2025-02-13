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
#include <iostream>

#include <sofa/helper/system/config.h>

#ifdef SOFA_BUILD_PLUGINMONITOR
# define SOFA_PLUGINMONITOR_API SOFA_EXPORT_DYNAMIC_LIBRARY
#else
# define SOFA_PLUGINMONITOR_API SOFA_IMPORT_DYNAMIC_LIBRARY
#endif

extern int SOFA_PLUGINMONITOR_API PluginA_loaded;
extern int SOFA_PLUGINMONITOR_API PluginA_unloaded;
extern int SOFA_PLUGINMONITOR_API PluginB_loaded;
extern int SOFA_PLUGINMONITOR_API PluginB_unloaded;
extern int SOFA_PLUGINMONITOR_API PluginC_loaded;
extern int SOFA_PLUGINMONITOR_API PluginC_unloaded;
extern int SOFA_PLUGINMONITOR_API PluginD_loaded;
extern int SOFA_PLUGINMONITOR_API PluginD_unloaded;
extern int SOFA_PLUGINMONITOR_API PluginE_loaded;
extern int SOFA_PLUGINMONITOR_API PluginE_unloaded;
extern int SOFA_PLUGINMONITOR_API PluginF_loaded;
extern int SOFA_PLUGINMONITOR_API PluginF_unloaded;

void SOFA_PLUGINMONITOR_API reset_plugin_monitor();
