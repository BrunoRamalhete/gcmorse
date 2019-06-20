/*
    gcmorse - simple text to Morse code converter
    Copyright (C) 2019  Bruno Ramalhete <bram.512@gmail.com>

    This file is part of gcmorse.

    GCmorse is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    GCmorse is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>

#ifndef DEBUG_ENABLED
#define DEBUG_ENABLED 0
#endif

#ifndef DEBUG_OUT
#define DEBUG_OUT printf
#endif

#if DEBUG_ENABLED == 1
#define DEBUG( format, expr ) DEBUG_OUT( "'%s' => '"format"'\n", #expr, ( expr ) )
#else
#define DEBUG( format, expr )
#endif
