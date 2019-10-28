/* 
 * This file is part of Yahtzee (https://github.com/JolokHD/Yahtzee) 
 * Copyright (C) 2019  Jannes Althoff
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for mordde details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>
 */
#include <iostream>
#include <string>

bool parseInput(std::string in){
    if(in == "show w"){
        std::cout << "This program is free software: you can redistribute it and/or modify" << std::endl
                  << "it under the terms of the GNU General Public License as published by" << std::endl
                  << "the Free Software Foundation, either version 3 of the License, or"    << std::endl
                  << "(at your option) any later version."                                  << std::endl;
    } else if (in == "show c"){
        std::cout << "This program is free software: you can redistribute it and/or modify" << std::endl
                  << "it under the terms of the GNU General Public License as published by" << std::endl
                  << "the Free Software Foundation, either version 3 of the License, or"    << std::endl
                  << "(at your option) any later version."                                  << std::endl;
    }
    return false;
}