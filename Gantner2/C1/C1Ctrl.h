///////////////////////////////////////////////////////////////////////////////
// C1Ctrl.h

#ifndef __C1CTRL_H__
#define __C1CTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "C1W32.h"
#include "TcBase.h"
#include "C1ClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CC1Ctrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CC1Ctrl, &CLSID_C1Ctrl>
	, public IC1Ctrl
	, public ITcOCFCtrlImpl<CC1Ctrl, CC1ClassFactory>
{
public:
	CC1Ctrl();
	virtual ~CC1Ctrl();

DECLARE_REGISTRY_RESOURCEID(IDR_C1CTRL)
DECLARE_NOT_AGGREGATABLE(CC1Ctrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CC1Ctrl)
	COM_INTERFACE_ENTRY(IC1Ctrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __C1CTRL_H__
