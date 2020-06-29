///////////////////////////////////////////////////////////////////////////////
// C1Driver.h

#ifndef __C1DRIVER_H__
#define __C1DRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define C1DRV_NAME        "C1"
#define C1DRV_Major       1
#define C1DRV_Minor       0

#define DEVICE_CLASS CC1Driver

#include "ObjDriver.h"

class CC1Driver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl C1DRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(C1DRV)
	VxD_Service( C1DRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __C1DRIVER_H__