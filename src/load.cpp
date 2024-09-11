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

void load(std::string saveFileName)
{
  std::string loadLine;
  int lineNumber = 1;

  std::ifstream LoadFile(saveFileName, std::ios::in);

  if (LoadFile.is_open())
  {
    for (; lineNumber < 2; lineNumber++)
    {
      std::getline(LoadFile, loadLine);

      switch (lineNumber)
      {
        case 1:
        {
          turn = std::stoi(loadLine);

          break;
        }
        case 2:
        {
          player.rulerName = loadLine;

          break;
        }
        case 3:
        {
          player.factionName = loadLine;

          break;
        }
        case 4:
        {
          player.homeSystem = loadLine;

          break;
        }
      }
    }
    LoadFile.close();
  }
  else
  {
    std::cout << "Error: Unable to load save game file." << std::endl;
  }
}
