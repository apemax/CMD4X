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
  bool Mainloop = true;

  loadoptions();

  cout << "Welcome to CMD4X." << endl;

  if(Firstrun == "true")
  {
    cout << "Please enter a username:" << endl;

    cout << "> ";
    cin >> username;

    Firstrun = "false";
  }

  while(Mainloop == true)
  {
    cout << "new - Start a new game." << endl;
    cout << "load - Load a saved game." << endl;
    cout << "options - Open the options menu." << endl;
    cout << "exit - Exit the game." << endl;
    cout << "> ";
    cin >> Mopt;

    if (Mopt == "new")
      {
        cout << "Please enter a save name for this game:" << endl;
        cout << "> ";
        cin >> Gamename;

        ofstream Savefile(Gamename, ios::out | ios::app);

        Savefile.close();

        gameloop();
      }
    else if(Mopt == "load")
      {
        load();
      }
    else if(Mopt == "options")
      {
        cout << "username: " << username << endl;
      }
    else if (Mopt == "exit")
      {
        cout << "Exiting..." << endl;

        Mainloop = false;
      }
  }
}
