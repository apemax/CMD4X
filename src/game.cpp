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

#include "global.h"

void gameLoop()
{
  bool gameLoop = true;
  bool optionsLoop = true;
  bool firstStart = true;
  std::string gameInput;
  std::string optionsInput;

  if (newGame == false && firstStart == true)
  {
    std::cout << "Please enter the save file name you would like to load:" << std::endl;
    std::cout << "> ";
    std::cin >> saveName;

    load(saveName);

    firstStart = false;
  }
  else if (newGame == true && firstStart == true)
  {
    std::cout << "Please enter a userName:" << std::endl;

    std::cout << "> ";
    std::cin >> userName;

    std::cout << "Please enter a save name for this game:" << std::endl;
    std::cout << "> ";
    std::cin >> saveName;

    save(saveName);

    firstStart = false;
  }

  std::cout << "Starting game..." << std::endl;

  std::cout << "mil / military - Manage military." << std::endl;
  std::cout << "dip / diplomacy - Manage diplomacy." << std::endl;
  std::cout << "man / manufacturing - Manage manufacturing" << std::endl;
  std::cout << "res / research - Manage Research." << std::endl;
  std::cout << "map - View map." << std::endl;
  std::cout << "sta / status - View status and progress overview." << std::endl;
  std::cout << "opt / options - Go to the options menu." << std::endl;
  std::cout << "end - End turn." <<std::endl;

  while (gameLoop == true)
  {
    std::cout << "> ";
    std::cin >> gameInput;

    if (gameInput == "mil" || gameInput == "military")
      {
        std::cout << "Test." << std::endl;
      }

    else if (gameInput == "dip" || gameInput == "diplomacy")
      {
        std::cout << "Test." << std::endl;
      }
    else if (gameInput == "man" || gameInput == "manufacturing")
      {
        std::cout << "Test." << std::endl;
      }

    else if (gameInput == "res" || gameInput == "research")
      {
        std::cout << "Test." << std::endl;
      }

    else if (gameInput == "map" || gameInput == "map")
      {
        std::cout << "Test." << std::endl;
      }

    else if (gameInput == "sta" || gameInput == "status")
      {
        std::cout << "Test." << std::endl;
      }

    else if (gameInput == "opt" || gameInput == "options")
      {
        std::cout << "Options menu." << std::endl;

        std::cout << "load - Load a saved game." << std::endl;
        std::cout << "save - Save game." << std::endl;
        std::cout << "set / settings - Go to settings menu." << std::endl;
        std::cout << "back - Return to game." << std::endl;
        std::cout << "exit - Exit the game." << std::endl;

        optionsLoop = true;

        while (optionsLoop == true)
        {
          std::cout << "> ";
          std::cin >> optionsInput;

          if (optionsInput == "load")
            {
              std::cout << "Load game..." << std::endl;
            }

          else if (optionsInput == "save")
            {
              std::cout << "Save game..." << std::endl;
            }

          else if (optionsInput == "set" || gameInput == "settings")
            {
              std::cout << "Some options go here..." << std::endl;
            }

          else if (optionsInput == "back")
            {
              optionsLoop = false;
            }

          else if (optionsInput == "exit")
            {
              optionsLoop = false;

              gameLoop = false;
            }
        }
      }
    else if (gameInput == "end")
    {
      std::cout << "turn ended." << std::endl;

      turn++;
    }
  }
}
