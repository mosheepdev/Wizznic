#ifndef HEADER_52AF292CB23E32AB
#define HEADER_52AF292CB23E32AB

/************************************************************************
 * This file is part of Wizznic.                                        *
 * Copyright 2009-2011 Jimmy Christensen <dusted@dusted.dk>             *
 * Wizznic is free software: you can redistribute it and/or modify      *
 * it under the terms of the GNU General Public License as published by *
 * the Free Software Foundation, either version 3 of the License, or    *
 * (at your option) any later version.                                  *
 *                                                                      *
 * Wizznic is distributed in the hope that it will be useful,           *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of       *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        *
 * GNU General Public License for more details.                         *
 *                                                                      *
 * You should have received a copy of the GNU General Public License    *
 * along with Foobar.  If not, see <http://www.gnu.org/licenses/>.      *
 ************************************************************************/

#ifndef CONTROL_H_INCLUDED
#define CONTROL_H_INCLUDED

#include "defs.h"

struct cursor_t
{
  int moving; //is cursor in travel
  int x,y;
  int dx,dy;
  int px,py;
  int lock; //If 1, a brick with curLock will update cursor pos
};

typedef struct cursor_t cursorType;

void updateCursor(cursorType* c); //Update cursor pixel pos if moving
int moveCursor(cursorType* c,int dirX, int dirY, int limit);
void initCursor(cursorType* c);
void setCursor(cursorType* c, int x, int y);

#endif // CONTROL_H_INCLUDED

#endif // header guard
