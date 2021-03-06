#pragma once

#include "API/Types.hpp"
#include "Common.hpp"

namespace Experimental {

class AsyncLogFlush
{
public:
    AsyncLogFlush(NWNXLib::Services::HooksProxy* hooker, NWNXLib::Services::TasksProxy* tasker);

private:
    static void FlushLogFile_Hook(CExoDebugInternal*);
    static NWNXLib::Services::TasksProxy* s_tasker;
};

}
