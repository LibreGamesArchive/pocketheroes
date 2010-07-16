/*
 * This file is a part of Pocket Heroes Game project
 * 	http://www.pocketheroes.net
 *	https://code.google.com/p/pocketheroes/
 *
 * Copyright 2004-2010 by Robert Tarasov and Anton Stuk (iO UPG)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */ 

/*****************************************************************************

 [Pa]lladium XML library

 Uses: Gnome libxml2 parser
 
*****************************************************************************/

#ifndef IOLIB_PA_EXCEPT_H
#define IOLIB_PA_EXCEPT_H

#include "he\he.std.h"
#include "he\he.string.h"

class Exception
{
public:
	virtual const iCharT* What() const
	{
		return _T("Generic exception");
	}
};


#endif //IOLIB_PA_EXCEPT_H

