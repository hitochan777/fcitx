/***************************************************************************
 *   Copyright (C) 2005 by Yunfan                                          *
 *   yunfan_zg@163.com                                                     *
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

/* A very simple About Window for FCITX */

#ifndef _ABOUT_WINDOW_H
#define _ABOUT_WINDOW_H

#include <X11/Xlib.h>
#include "ui/skin.h"

#define ABOUT_WINDOW_HEIGHT	150

typedef struct AboutWindow
{
    Window window;
    cairo_surface_t* surface;
    ConfigColor color;
    ConfigColor fontColor;
    int width;
    int fontSize;
    Atom     about_protocol_atom;
    Atom     about_kill_atom;
} AboutWindow;

extern AboutWindow aboutWindow;

Bool            CreateAboutWindow (void);
void            DisplayAboutWindow (void);
void            DrawAboutWindow (void);

#endif
