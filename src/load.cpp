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

#include "global.h"

void load(string SaveFileName)
{
  string LoadLine;
  int LineNumber = 1;

  ifstream LoadFile(SaveFileName, ios::in);

  if (LoadFile.is_open())
  {
    for (; LineNumber < 2; LineNumber++)
    {
      getline(LoadFile, LoadLine);

      switch (LineNumber)
      {
        case 1:
        {
          Username = LoadLine;

          break;
        }
        case 2:
        {
          Turn = stoi(LoadLine);

          break;
        }
      }
    }
    LoadFile.close();
  }
  else
  {
    cout << "Error: Unable to load save game file." << endl;
  }
}
