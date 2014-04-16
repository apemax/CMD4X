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
// Copyright (C) 2014 Peter Wright
// author: Peter (apemax) Wright
// version: 0.0.1
// CMD4X

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include "global.h"
using namespace std;

string File_contents;

ifstream cfg_file("options.cfg", ios::in);

void options()
{
    cout << "Starting CFG File Function..." << endl;

    cout << "Opening CFG file... ";

    if (cfg_file.is_open()) //Checks to see if it can open the file.
    {
        cout << "Done." << endl;

        cout << "Getting the line from the file..." << endl;

        opt1();

        cout << "Closing file..." << endl;

        cfg_file.close(); //Closes the file stream.
    }
    else cout << "Can't open file." << endl;
}

void opt1()
{
    for(char i = 0; i < 3; i++)
    {
        int n = 0;

        cout << "Getting file contents..." << endl;

        getline(cfg_file, File_contents);

        cout << "Loaded line from file" << endl;

        cout << File_contents.substr(0, 8) << endl;

        if(File_contents.substr(0, 8) == "username")
        {
            cout << "setting n to 1" << endl;

            n = 1;
        }

        if(File_contents.substr(0, 8) == "firstrun")
        {
            cout << "Setting n to 2" << endl;

            n = 2;
        }

        if(File_contents.substr(0, 4) == "GVT3")
        {
            cout << "Setting n to 3" << endl;

            n = 3;
        }

        cout << n << endl;

        switch(n)
        {
            case 1:
            {
                cout << "Contents of GVT1" << endl;

                cout << File_contents << endl;

                string T1 = File_contents.substr(9, 20);

                GVT1 = GVT1 + T1;

                break;
            }

            case 2:
            {
                cout << File_contents << endl;

                string T2 = File_contents.substr(9, 10);

                GVT2 = GVT2 + T2;

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
                cout << "exiting..." << endl;

                exit(0);

                break;
            }
        }

    }
}
