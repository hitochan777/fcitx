/***************************************************************************
 *   Copyright (C) 2002~2005 by Yuking                                     *
 *   yuking_net@sohu.com                                                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef _UI_H
#define _UI_H

#include <X11/Xlib.h>
#include <cairo.h>
#include "ui/skin.h"

#define LIGHT_COLOR	0xffff
#define BACK_COLOR	0x0000
#define DIM_COLOR	0x6666

typedef enum {
    _3D_FLAT = 0,
    _3D_UPPER = 1,
    _3D_LOWER = 2
} _3D_EFFECT;

typedef struct {
    GC              foreGC;
    GC              backGC;
    XColor          backColor;
    XColor          foreColor;
} WINDOW_COLOR;

typedef struct {
    GC              gc;
    XColor          color;
} MESSAGE_COLOR;

typedef struct {
    char           *pcStr;
    int             iPixel;
} StrPixel;

Bool            InitX (void);
void            Draw3DEffect (Window window, int x, int y, int width, int height, _3D_EFFECT effect);
void            InitGC (Window window);
void            MyXEventHandler (XEvent * event);
Bool            IsInBox (int x0, int y0, int x1, int y1, int x2, int y2);

/*void		SetLocale (void);*/

void OutputString (cairo_t* c, char *str, char *font, int fontSize, int x, int y, cairo_color_t* color);
void OutputStringWithContext (cairo_t *c, char *str, int x, int y);
int  StringWidth (char *str, char *font, int fontSize);
int             StringWidthWithContext (cairo_t *c, char *str);
int             FontHeight (char *font);
int             FontHeightWithContext (cairo_t *c);

Bool            MouseClick (int *x, int *y, Window window);
Bool		IsWindowVisible(Window window);

/*
int             FillImageByXPMData (XImage * pImage, char **apcData);
void            WaitButtonRelease (XPoint * point);
void		OutputAsUTF8(char *str);
*/

#endif