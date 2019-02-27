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
// Copyright (C) 2014 - 2019 Peter Wright
// author: Peter (apemax) Wright
// CMD4X

#include "global.h"
using namespace std;

int main()
{
    int Mopt;
    string Mainloop = "running";

    loadoptions();

    cout << "Welcome to CMD4X." << endl;

    if(Firstrun == "true")
    {
        cout << "Please enter a username:" << endl;

        cout << ">";
        cin >> username;

        //Firstrun = "false";
    }

    while(Mainloop == "running")
    {
        cout << "1) New Game." << endl;
        cout << "2) Load Game." << endl;
        cout << "3) Options." << endl;
        cout << "4) Exit." << endl;

        cout << ">";
        cin >> Mopt;

        switch(Mopt)
        {
            case 1:
                {
                    cout << "Please enter a save name for this game:" << endl;

                    cout << ">";

                    cin >> Gamename;

                    ofstream Savefile(Gamename.c_str(), ios::out | ios::app);

                    Savefile.close();

                    gameloop();

                    break;
                }

            case 2:
                {
                    load();

                    break;
                }
            case 3:
                {
                    cout << "It works!" << endl;

                    cout << "username: " << username << endl;

                    break;
                }
            case 4:
                {
                    cout << "Exiting..." << endl;

                    Mainloop = "Stopped";
                }
        }

    }

}
