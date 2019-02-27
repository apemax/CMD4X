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

string File_contents;

ifstream cfg_file("options.cfg", ios::in);

void loadoptions()
{
    cout << "Loading options from file... " << endl;

    if (cfg_file.is_open()) //Checks to see if it can open the file.
    {
        opt1();

        cfg_file.close();
    }
    else cout << "Can't open file." << endl;
}

void opt1()
{
    for(char i = 0; i < 3; i++)
    {
        int n = 0;

        getline(cfg_file, File_contents);

        if(File_contents.substr(0, 8) == "firstrun")
        {
            n = 1;
        }

        if(File_contents.substr(0, 8) == "username")
        {
            n = 2;
        }

        if(File_contents.substr(0, 4) == "GVT3")
        {
            n = 3;
        }

        switch(n)
        {
            case 1:
            {
                cout << "Checking Firstrun status..." << endl;


                string T1 = File_contents.substr(9, 15);

                Firstrun.clear();

                Firstrun = Firstrun + T1;

                cout << "Firstrun status is " << Firstrun << endl;

                break;
            }

            case 2:
            {
                cout << "Loading username from options file..." << endl;


                string T2 = File_contents.substr(9, 20);

                username = username + T2;

                cout << "Username set to " << username << endl;

                break;
            }

            case 3:
            {
                cout << File_contents << endl;

                char T3 = File_contents[5];

                GVT3 = GVT3 + T3;

                break;
            }

            default:
            {
                cout << "finishing up..." << endl;

                break;
            }
        }

    }
}
