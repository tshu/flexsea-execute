/****************************************************************************
	[Project] FlexSEA: Flexible & Scalable Electronics Architecture
	[Sub-project] 'flexsea-execute' Advanced Motion Controller
	Copyright (C) 2016 Dephy, Inc. <http://dephy.com/>

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************
	[Lead developper] Jean-Francois (JF) Duval, jfduval at dephy dot com.
	[Origin] Based on Jean-Francois Duval's work at the MIT Media Lab 
	Biomechatronics research group <http://biomech.media.mit.edu/>
	[Contributors] Luke Mooney
*****************************************************************************
	[This file] peripherals: code for the general peripheral modules
*****************************************************************************
	[Change log] (Convention: YYYY-MM-DD | author | comment)
	* 2016-09-29 | jfduval | Released under GPL-3.0 release
	*
****************************************************************************/
	
#ifndef INC_PERIPH_H
#define INC_PERIPH_H

//****************************************************************************
// Include(s)
//****************************************************************************
	
#include "main.h"
	
//****************************************************************************
// Public Function Prototype(s):
//****************************************************************************

void init_peripherals(void);
void init_tb_timers(void);

//****************************************************************************
// Shared Variable(s):
//****************************************************************************

extern uint8_t gui_fsm_flag;

//****************************************************************************
// Definition(s):
//****************************************************************************
	
#endif	//INC_PERIPH_H
