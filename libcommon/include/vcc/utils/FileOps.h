////////////////////////////////////////////////////////////////////////////////
//	Copyright 2015 by Joseph Forgione
//	This file is part of VCC (Virtual Color Computer).
//	
//	VCC (Virtual Color Computer) is free software: you can redistribute itand/or
//	modify it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or (at your
//	option) any later version.
//	
//	VCC (Virtual Color Computer) is distributed in the hope that it will be
//	useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
//	Public License for more details.
//	
//	You should have received a copy of the GNU General Public License along with
//	VCC (Virtual Color Computer). If not, see <http://www.gnu.org/licenses/>.
////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "vcc/detail/exports.h"
#include <Windows.h>


LIBCOMMON_EXPORT void PathStripPath(char*);
LIBCOMMON_EXPORT void ValidatePath(char* Path);
// FIXME-CHET: This does not look like it should force checking of the return value
// plus it's getting replaced with filesystem::path
/*[[nodiscard]]*/ LIBCOMMON_EXPORT BOOL PathRemoveFileSpec(char*);
[[nodiscard]] LIBCOMMON_EXPORT char* PathFindExtension(char*);

// FIXME-CHET: This should force checking of the return value but it's going away
// so we're just disable that requirement until that happens.
/*[[nodiscard]]*/ LIBCOMMON_EXPORT DWORD WritePrivateProfileInt(LPCTSTR, LPCTSTR, int, LPCTSTR);

