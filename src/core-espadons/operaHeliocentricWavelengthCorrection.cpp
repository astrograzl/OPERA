/*******************************************************************
 ****                  MODULE FOR OPERA v1.0                    ****
 *******************************************************************
 Module name: operaHeliocentricWavelengthCorrection
 Version: 1.0
 Description: Apply Heliocentric velocity wavelength correction 
 Author(s): CFHT OPERA team
 Affiliation: Canada France Hawaii Telescope 
 Location: Hawaii USA
 Date: Jan/2011
 Contact: opera@cfht.hawaii.edu
 
 Copyright (C) 2011  Opera Pipeline team, Canada France Hawaii Telescope
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see:
 http://software.cfht.hawaii.edu/licenses
 -or-
 http://www.gnu.org/licenses/gpl-3.0.html
 ********************************************************************/

// $Date$
// $Id$
// $Revision$
// $Locker$
// $Log$

#include "core-espadons/operaCentricWavelengthCorrection.h"

/*! \file operaHeliocentricWavelengthCorrection.cpp */

/*! 
 * operaHeliocentricWavelengthCorrection
 * \author Eder Martioli & Lison Malo
 * \brief Calculate and apply Heliocentric velocity wavelength correction.
 * \arg argc
 * \arg argv
 * \note --output=...
 * \note --input=...
 * \note --wave=...
 * \throws operaException cfitsio error code
 * \throws operaException operaErrorNoInput
 * \throws operaException operaErrorNoOuput
 * \return EXIT_STATUS
 * \ingroup core
 */

void GenerateHeliocentricWavelengthCorrectionPlot(const char *gnuScriptFileName, const char *outputPlotEPSFileName,const char *dataFileName, bool display);

int main(int argc, char *argv[])
{
    return CentricWavelengthCorrection(argc, argv, "operaHeliocentricWavelengthCorrection", false);
}
