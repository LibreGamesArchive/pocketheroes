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

/** @file
 *	@brief Popup window class implementation
 */
/** @addtogroup iolib_si
 *  @{
 */
#ifndef _IOLIB_SILICON_POPUP_WINDOW_H_
#define _IOLIB_SILICON_POPUP_WINDOW_H_


/// Popup window notifycations subscriber interface
class iPopupNotifySubscriber
{
public:
	virtual void OnPopupNotify(uint32 uMsg, sint32 lParam) = NULL;
};

/// Popup window class
class iPopupWindow : public iBaseWindowNW
{
public:
	/// Creates popup window with given params
	bool CreatePopupWindow(iPopupNotifySubscriber *pwns, const iRect &rect, uint32 style=WS_POPUP, uint32 exstyle=0, bool layered=true);

protected:
	iPopupNotifySubscriber *m_PopupNotifySubscriber;
};

#endif //_IOLIB_SILICON_POPUP_WINDOW_H_
/** @} */ // iolib_si
