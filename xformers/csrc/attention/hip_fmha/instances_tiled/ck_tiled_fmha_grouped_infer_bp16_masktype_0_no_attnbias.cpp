#include <ck/ck.hpp>

#include "ck_fmha_grouped_infer.h"

template void run_grouped_infer_masktype_attnbias_dispatched<
    ck::bhalf_t,
    0,
    false>(GroupedForwardParams& param, hipStream_t stream);
