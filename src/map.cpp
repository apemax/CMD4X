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

#include "faction.h"
#include "global.h"

void map(std::string mapInput)
{
  int sectorCount = 0;
  int mapSectorsXMin[4] = {0, 4, 8, 12};
  int mapSectorsXMax[4] = {3, 7, 11, 16};
  int mapSectorsYMin[4] = {0, 4, 8, 12};
  int mapSectorsYMax[4] = {3, 7, 11, 16};

  std::istringstream mapInputStream(mapInput);

  do
  {
    std::string mapInputOption;
    
    mapInputStream >> mapInputOption;
    
    if(mapInputOption == "home")
    {
      for (int x = 0; x < 5; x++)
      {
        if (player.homeSystemX >= mapSectorsXMin[x] && player.homeSystemX <= mapSectorsXMax[x])
        {
          for (int y = 0; y < 5; y++)
          {
            if (player.homeSystemY >= mapSectorsYMin[y] && player.homeSystemY <= mapSectorsYMax[y])
            {
              for (int sx = mapSectorsXMin[x]; sx < mapSectorsXMax[x] + 1; sx++)
              {
                for (int sy = mapSectorsYMin[y]; sy < mapSectorsYMax[y] + 1; sy++)
                {
                  if (player.mapSystems[sx][sy][0] == player.homeSystem)
                  {
                    std::cout << " | " << player.mapSystems[sx][sy][0] << "*";
                  }
                  else
                  {
                    std::cout << " | " << player.mapSystems[sx][sy][0];
                  }

                  sectorCount++;

                  if (sectorCount == 4)
                  {
                    std::cout << " | " << std::endl;

                    sectorCount = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (mapInputOption == "help")
    {
      std::cout << "List of map commands:" << std::endl;
      std::cout << "map home - Show home system sector." << std::endl; 
    }
  }
  while (mapInputStream);
}