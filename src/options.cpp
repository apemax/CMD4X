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

void loadOptions()
{
  std::string loadLine;
  int lineNumber = 1;

  std::ifstream ConfigFile("options.cfg", std::ios::in);

  std::cout << "Loading options from file... " << std::endl;

  if (ConfigFile.is_open())
  {
    for (; lineNumber < 2; lineNumber++)
    {
      std::getline(ConfigFile, loadLine);

      switch(lineNumber)
      {
        case 1:
        {
          debug = std::stoi(loadLine.substr(6, 1));

          break;
        }
      }
    }

    ConfigFile.close();
  }
  else
  {
    std::cout << "Failed to open file." << std::endl;
  }
}

void saveOptions()
{
  std::ofstream ConfigFile("options.cfg", std::ios::out | std::ios::trunc);

  if (ConfigFile.is_open())
  {
    ConfigFile << "debug=" << debug << std::endl;

    ConfigFile.close();

    std::cout << "Options saved." << std::endl;
  }
  else
  {
    std::cout << "Failed to open config file." << std::endl;
  }
}
