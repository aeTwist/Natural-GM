/**
 *  @file Map.hpp
 *	@section License
 *
 *      Copyright (C) 2013-2014 Daniel Hrabovcak
 *
 *      This file is part of the Natural GM IDE.
 *
 *      This program is free software: you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation, either version 3 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program.  If not, see <http://www.gnu.org/licenses/>.
**/
#ifndef NGM__MAP__HPP
#define NGM__MAP__HPP
#include <map>
namespace NGM
{
	template <class T, class V> using Pair = std::pair<T, V>;
	template <class T, class V> using Map = std::map<T, V>;
	template <class T, class V> using Multimap = std::multimap<T, V>;
}
#endif // NGM__MAP__HPP
