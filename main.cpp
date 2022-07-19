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

int main()
{
  string Mopt;
  string Oopt;
  bool Mainloop = true;
  bool Optionsloop = true;

  loadoptions();

  cout << "Welcome to CMD4X." << endl;

  while (Mainloop == true)
  {
    cout << "new - Start a new game." << endl;
    cout << "load - Load a saved game." << endl;
    cout << "options - Open the options menu." << endl;
    cout << "exit - Exit the game." << endl;
    cout << "> ";
    cin >> Mopt;

    if (Mopt == "new")
      {
        cout << "Please enter a username:" << endl;

        cout << "> ";
        cin >> Username;

        cout << "Please enter a save name for this game:" << endl;
        cout << "> ";
        cin >> Gamename;

        ofstream Savefile(Gamename, ios::out | ios::app);

        Savefile.close();

        gameloop();
      }
    else if (Mopt == "load")
      {
        load();
      }
    else if (Mopt == "options")
      {
        if (Debug == 1)
        {
          cout << "Debug options enabled. Type debug to enter debug menu." << endl;
        }

        cout << "save - Save options to the config file." << endl;
        cout << "exit - Exit the options menu." << endl;

        while (Optionsloop == true)
        {
          cout << "> ";
          cin >> Oopt;

          if (Oopt == "save")
          {
            saveoptions();
          }
          else if (Oopt == "debug")
          {
            cout << "Debug menu." << endl;
          }
          else if (Oopt == "exit")
          {
            Optionsloop = false;
          }
        }
      }
    else if (Mopt == "exit")
      {
        cout << "Exiting..." << endl;

        Mainloop = false;
      }
  }
}
