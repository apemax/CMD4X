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
// Copyright (C) 2014 - 2024 Peter Wright
// author: Peter (apemax) Wright
// CMD4X

#include <stdlib.h>
#include <time.h>
#include "faction.h"


Faction::Faction()
{
  int value = 0;
  int systemNumber = 1;
  std::string systemName = "System";
  std::string systemNameNumber;

  for (int x = 0; x < 16; x++)
  {
    for (int y = 0; y < 16; y++)
    {
      systemNameNumber = systemName + std::to_string(systemNumber);

      mapSystems[x][y][value] = systemNameNumber;

      systemNumber++;
    }
  }

  srand (time(NULL));

  homeSystemX = rand() % 16;
  homeSystemY = rand() % 16;

  homeSystem = mapSystems[homeSystemX][homeSystemY][value];
}