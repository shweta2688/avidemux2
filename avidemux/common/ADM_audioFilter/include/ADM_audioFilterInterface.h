
/**************************************************************************
                          audioeng_buildfilters.h  -  description
                             -------------------
    begin                : Mon Dec 2 2002
    copyright            : (C) 2002 by mean
    email                : fixounet@free.fr
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef ADM_audioFilterInterface_H
#define ADM_audioFilterInterface_H

#include "ADM_audiodef.h"

/* Filter part */
bool            audioFilterReset(void);

bool            audioFilterSetResample(uint32_t newfq);  // Set 0 to disable frequency
bool            audioFilterSetFrameRate(FILMCONV conf);
bool            audioFilterSetMixer(CHANNEL_CONF conf); // Invalid to disable

uint32_t        audioFilterGetResample(void);  // Set 0 to disable frequency
FILMCONV        audioFilterGetFrameRate(void);
CHANNEL_CONF    audioFilterGetMixer(void); // Invalid to disable

bool            audioFilterConfigure(void);

/* Encoder part */
uint8_t         audioCodecSetByIndex(int i);
void            audioCodecConfigure( void );

#endif
