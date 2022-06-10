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
    int Gopt1;
    int Oopt1;

    cout << "Starting game..." << endl;

    cout << "To save/load, get to the options menu or exit type in 7 on the main menu" << endl;

    while (Sgameloop == true)
    {

        cout << "1) Offensive." << endl;
        cout << "2) Defensive." << endl;
        cout << "3) Diplomacy." << endl;
        cout << "4) Factory." << endl;
        cout << "5) Research" << endl;
        cout << "6) Status" << endl;

        cin >> Gopt1;

        switch(Gopt1)
        {
            case 1:
                {
                    cout << "Test." << endl;

                    break;
                }

            case 2:
                {
                    cout << "Test." << endl;

                    break;
                }

            case 3:
                {
                    cout << "Test." << endl;

                    break;
                }

            case 4:
                {
                    cout << "Test." << endl;

                    break;
                }

            case 5:
                {
                    cout << "Test." << endl;

                    break;
                }

            case 6:
                {
                    cout << "Test." << endl;

                    break;
                }

            case 7:
                {
                    cout << "Options menu." << endl;

                    Soptionsloop = true;

                    while (Soptionsloop == true)
                    {
                        cout << "1) Save/Load." << endl;
                        cout << "2) Settings." << endl;
                        cout << "3) Back to game." << endl;
                        cout << "4) exit game." << endl;

                        cin >> Oopt1;

                        switch(Oopt1)
                        {
                        case 1:
                            {
                                cout << "1) Save game." << endl;
                                cout << "2) Load game." << endl;

                                break;
                            }

                        case 2:
                            {
                                cout << "Some options go here..." << endl;

                                break;
                            }

                        case 3:
                            {
                                Soptionsloop = false;

                                break;
                            }

                        case 4:
                            {
                                Soptionsloop = false;

                                Sgameloop = false;

                                break;
                            }
                        }
                    }

                    break;
                }
        }

    }
}
