#pragma once
#include "GitLoglistBase.h"

class CGitLogListBase;

class CGitLogList : public CGitLogListBase
{
	DECLARE_DYNAMIC(CGitLogList)
public:
	void ContextMenuAction(int cmd,int FirstSelect, int LastSelect);
};