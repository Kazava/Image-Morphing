#ifndef SCALE_H
#define SCALE_H

#include "image.h"
#include "kernel.h"
#include "discrete.h"
#include "extension.h"

namespace nehab
{

int scale(int hout, int wout, const kernel::base *pre,
    const kernel::discrete::base *fir, const kernel::discrete::base *ifir,
    const extension::base *ext, image::rgba<float> *rgba,
    rod::dimage<float> &output);

}

#endif
