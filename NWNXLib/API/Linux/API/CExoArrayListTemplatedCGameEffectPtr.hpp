#pragma once

#include <cstdint>

namespace NWNXLib {

namespace API {

// Forward class declarations (defined in the source file)
struct CGameEffect;

struct CExoArrayListTemplatedCGameEffectPtr
{
    CGameEffect** element;
    int32_t num;
    int32_t array_size;

    void Add(CGameEffect*);
    CExoArrayListTemplatedCGameEffectPtr& operator=(const CExoArrayListTemplatedCGameEffectPtr&);
};

void CExoArrayListTemplatedCGameEffectPtr__Add(CExoArrayListTemplatedCGameEffectPtr* thisPtr, CGameEffect*);
CExoArrayListTemplatedCGameEffectPtr& CExoArrayListTemplatedCGameEffectPtr__OperatorAssignment(CExoArrayListTemplatedCGameEffectPtr* thisPtr, const CExoArrayListTemplatedCGameEffectPtr&);

}

}
