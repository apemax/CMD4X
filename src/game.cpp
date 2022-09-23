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

void gameloop()
{
  bool Sgameloop = true;
  bool Soptionsloop = true;
  string Gopt1;
  string Oopt1;

  cout << "Starting game..." << endl;

  cout << "mil / military - Manage military." << endl;
  cout << "dip / diplomacy - Manage diplomacy." << endl;
  cout << "man / manufacturing - Manage manufacturing" << endl;
  cout << "res / research - Manage Research." << endl;
  cout << "map - View map." << endl;
  cout << "sta / status - View status and progress overview." << endl;
  cout << "opt / options - Go to the options menu." << endl;
  cout << "end - End turn." <<endl;

  while (Sgameloop == true)
  {
    cout << "> ";
    cin >> Gopt1;

    if (Gopt1 == "mil" || Gopt1 == "military")
      {
        cout << "Test." << endl;
      }

    else if (Gopt1 == "dip" || Gopt1 == "diplomacy")
      {
        cout << "Test." << endl;
      }
    else if (Gopt1 == "man" || Gopt1 == "manufacturing")
      {
        cout << "Test." << endl;
      }

    else if (Gopt1 == "res" || Gopt1 == "research")
      {
        cout << "Test." << endl;
      }

    else if (Gopt1 == "map" || Gopt1 == "map")
      {
        cout << "Test." << endl;
      }

    else if (Gopt1 == "sta" || Gopt1 == "status")
      {
        cout << "Test." << endl;
      }

    else if (Gopt1 == "opt" || Gopt1 == "options")
      {
        cout << "Options menu." << endl;

        cout << "load - Load a saved game." << endl;
        cout << "save - Save game." << endl;
        cout << "set / settings - Go to settings menu." << endl;
        cout << "back - Return to game." << endl;
        cout << "exit - Exit the game." << endl;

        Soptionsloop = true;

        while (Soptionsloop == true)
        {
          cout << "> ";
          cin >> Oopt1;

          if (Oopt1 == "load")
            {
              cout << "Load game..." << endl;
            }

          else if (Oopt1 == "save")
            {
              cout << "Save game..." << endl;
            }

          else if (Oopt1 == "set" || Gopt1 == "settings")
            {
              cout << "Some options go here..." << endl;
            }

          else if (Oopt1 == "back")
            {
              Soptionsloop = false;
            }

          else if (Oopt1 == "exit")
            {
              Soptionsloop = false;

              Sgameloop = false;
            }
        }
      }
    else if (Gopt1 == "end")
    {
      cout << "Turn ended." << endl;

      Turn++;
    }
  }
}
