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

// Expires header

#ifndef _HDR_MIN_EXPIRES_LENGTH
#define _HDR_MIN_EXPIRES_LENGTH

#include <string>
#include "header.h"

using namespace std;

class t_hdr_min_expires : public t_header {
public:
	unsigned long time; // expiry time in seconds

	t_hdr_min_expires();
	void set_time(unsigned long t);

	string encode_value(void) const;
};

#endif
