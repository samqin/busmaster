/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file      AppServicesCAN.h
 * \author    Ratnadip Choudhury
 * \copyright Copyright (c) 2011, Robert Bosch Engineering and Business Solutions. All rights reserved.
 */
#ifndef APPSERVICESCAN_H__INCLUDED_
#define APPSERVICESCAN_H__INCLUDED_

#include "AppServices.h"
//Send can message
UINT gunSendMsg_CAN(STCAN_TIME_MSG* psTxMsg, HMODULE hModule);
// To set the controller mode Passive/Active
BOOL gvSetControllerMode_CAN(BOOL);
// To connect/diaconnect with the Hardware
BOOL gbStartStopHardware_CAN(BOOL) ;
//to get first connected database name
DWORD gdGetFirstCANdbName(char* , DWORD );

#endif // APPSERVICESCAN_H__INCLUDED_
