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
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>
 */
 
#include "close.hpp"

#include "../../core/yahtzeeset.hpp"

#include <vector>
#include <string>
#include <iostream>

bool yahtzee::cli::command::help(yahtzee::core::yahtzeeSet &set, std::vector<std::string> arg){
	std::cout	<< "close"																											<< std::endl
				<< "deselect [1-5]" 																								<< std::endl
				<< "print [all|categories|dices|stats]"																				<< std::endl
				<< "randomize [all|selected]"																						<< std::endl
				<< "select [1-5]"																									<< std::endl
				<< "set [aces|twos|threes|fours|fives|sixes|[three|four]OfAKind|chance|fullHouse|[small|large]straight|yahtzee]" 	<< std::endl
				<< "show [w|c]" 																									<< std::endl;
	std::cout << std::endl;
	return false;
}