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

int main()
{
  std::string menuInput;
  std::string optionsInput;
  bool mainMenuLoop = true;
  bool optionsMenuLoop = true;

  loadOptions();

  std::cout << "Welcome to CMD4X." << std::endl;

  while (mainMenuLoop == true)
  {
    std::cout << "new - Start a new game." << std::endl;
    std::cout << "load - Load a saved game." << std::endl;
    std::cout << "options - Open the options menu." << std::endl;
    std::cout << "exit - Exit the game." << std::endl;
    std::cout << "> ";
    std::getline(std::cin, menuInput);

    if (menuInput == "new")
      {
        newGame = true;

        gameLoop();
      }
    else if (menuInput == "load")
      {
        newGame = false;

        gameLoop();
      }
    else if (menuInput == "options")
      {
        if (debug == 1)
        {
          std::cout << "Debug options enabled. Type debug to enter debug menu." << std::endl;
        }

        std::cout << "save - Save options to the config file." << std::endl;
        std::cout << "exit - Exit the options menu." << std::endl;

        while (optionsMenuLoop == true)
        {
          std::cout << "> ";
          std::cin >> optionsInput;

          if (optionsInput == "save")
          {
            saveOptions();
          }

          else if (optionsInput == "debug")
          {
            std::cout << "Debug menu." << std::endl;
          }
          else if (optionsInput == "exit")
          {
            optionsMenuLoop = false;
          }
        }
      }
    else if (menuInput == "exit")
      {
        std::cout << "Exiting..." << std::endl;

        mainMenuLoop = false;
      }
  }
}
