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
using namespace std;

void loadoptions()
{
  string File_contents;
  string LoadLine;
  int i = 1;

  ifstream cfg_file("options.cfg", ios::in);

  cout << "Loading options from file... " << endl;

  if (cfg_file.is_open())
  {
    for(; i < 2; i++)
    {
      getline(cfg_file, LoadLine);

      switch(i)
      {
        case 1:
        {
          Debug = stoi(LoadLine.substr(6, 1));

          break;
        }
      }
    }

    cfg_file.close();
  }
  else
  {
    cout << "Failed to open file." << endl;
  }
}
