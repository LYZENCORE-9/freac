 /* BonkEnc version 0.9
  * Copyright (C) 2001-2003 Robert Kausch <robert.kausch@gmx.net>
  *
  * This program is free software; you can redistribute it and/or
  * modify it under the terms of the "GNU General Public License".
  *
  * THIS PACKAGE IS PROVIDED "AS IS" AND WITHOUT ANY EXPRESS OR
  * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
  * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE. */

#ifndef _H_CDDB_SUBMIT_
#define _H_CDDB_SUBMIT_

#include <smooth.h>
#include <main.h>

using namespace smooth;
using namespace smooth::GUI;

class cddbSubmitDlg : public Application
{
	private:
		Divider		*divbar;

		Window		*mainWnd;
		Titlebar	*mainWnd_titlebar;

		Button		*btn_cancel;
		Button		*btn_ok;

		bonkEncConfig	*currentConfig;

		Void		 OK();
		Void		 Cancel();
	public:
				 cddbSubmitDlg();
				~cddbSubmitDlg();

		Int		 ShowDialog();
};

#endif
