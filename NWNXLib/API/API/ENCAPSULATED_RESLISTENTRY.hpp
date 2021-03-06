#pragma once
#include "nwn_api.hpp"



#ifdef NWN_API_PROLOGUE
NWN_API_PROLOGUE(ENCAPSULATED_RESLISTENTRY)
#endif





struct ENCAPSULATED_RESLISTENTRY
{
    uint32_t nOffsetToResource;
    uint32_t nResourceSize;



#ifdef NWN_CLASS_EXTENSION_ENCAPSULATED_RESLISTENTRY
    NWN_CLASS_EXTENSION_ENCAPSULATED_RESLISTENTRY
#endif
};


#ifdef NWN_API_EPILOGUE
NWN_API_EPILOGUE(ENCAPSULATED_RESLISTENTRY)
#endif

