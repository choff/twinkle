/*
    Copyright (C) 2005-2009  Michel de Boer <michel@twinklephone.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

// Route header

#ifndef _H_HDR_ROUTE
#define _H_HDR_ROUTE

#include <list>
#include <string>
#include "route.h"
#include "header.h"
#include "parameter.h"

using namespace std;

class t_hdr_route : public t_header {
public:
	list<t_route>	route_list;

	// If route_to_first_route == true, then the request must be routed
	// to the first route in the list. Otherwise to the request URI.
	bool		route_to_first_route;

	t_hdr_route();
	void add_route(const t_route &r);
	string encode(void) const;
	string encode_multi_header(void) const;
	string encode_value(void) const;
};

#endif
