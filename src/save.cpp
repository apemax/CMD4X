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

#include <fstream>
#include "global.h"
#include "faction.h"

void save(std::string saveFileName)
{
  std::ofstream SaveFile(saveFileName, std::ios::out | std::ios::trunc);

  if (SaveFile.is_open())
  {
    SaveFile << turn << std::endl;
    SaveFile << player.rulerName << std::endl;
    SaveFile << player.factionName << std::endl;
    SaveFile << player.homeSystem << std::endl;

    SaveFile.close();
  }
  else
  {
    std::cout << "Error: Unable to save to save game file." << std::endl;
  }
}
