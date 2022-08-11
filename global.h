/*
    This file is part of CMD4X.

    CMD4X is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    CMD4X is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with CMD4X.  If not, see <http://www.gnu.org/licenses/>.
*/
// Copyright (C) 2014 - 2022 Peter Wright
// author: Peter (apemax) Wright
// CMD4X

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string>
using namespace std;

#ifndef GLOBAL_H
#define GLOBAL_H

extern int Debug;
extern int Turn;
extern string Username;
extern string Gamename;

void loadoptions();
void saveoptions();
void opt1();
void gameloop();
void save(string SaveFileName);
void load(string SaveFileName);

#endif // GLOBAL_H
