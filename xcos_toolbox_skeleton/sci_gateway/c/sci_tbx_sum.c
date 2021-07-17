/* This file is released under the 3-clause BSD license. See COPYING-BSD. */

#include "business.h"
#include "api_scilab.h"
#include "Scierror.h"

int sci_tbx_sum(scilabEnv env, int nin,scilabVar *in, int nopt, scilabOpt opt, int nout, scilabVar *out)
{
    if (nin != 2) {
        Scierror(999, "Expected 2 input arguments but got %d.\n", nin);
        return STATUS_ERROR;
    }
    if (nout != 1) {
        Scierror(999, "Expected 1 output arguments but got %d.\n", nout);
        return STATUS_ERROR;
    }
    if (scilab_isDouble(env, in[0]) == 0 || scilab_isScalar(env, in[0]) == 0)
    {
        Scierror(999, "Wrong type for input argument #%d: A double expected.\n", 1);
        return STATUS_ERROR;
    }
    if (scilab_isDouble(env, in[1]) == 0 || scilab_isScalar(env, in[1]) == 0)
    {
        Scierror(999, "Wrong type for input argument #%d: A double expected.\n", 2);
        return STATUS_ERROR;
    }
    double in1 = 0, in2 = 0, out1 = 0;
    scilab_getDouble(env, in[0], &in1);
    scilab_getDouble(env, in[1], &in2);
    out1 = business_sum(in1, in2);
    out[0] = scilab_createDouble(env, out1);
    return STATUS_OK;
}
