#pragma once

#include "defs.h"

namespace NModBalancer {
    IBackEnds* CreateWeighted(const TModuleParams& mp);
}
