///////////////////////////////////////////////////////////////////////////////
// C1Driver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "C1Driver.h"
#include "C1ClassFactory.h"

DECLARE_GENERIC_DEVICE(C1DRV)

IOSTATUS CC1Driver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CC1ClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CC1Driver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CC1Driver::C1DRV_GetVersion( )
{
	return( (C1DRV_Major << 8) | C1DRV_Minor );
}

