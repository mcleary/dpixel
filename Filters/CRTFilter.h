#ifndef CRTFILTER_H
#define CRTFILTER_H

#include "Filters/Filter.h"

class CRTFilter : public Filter
{
public:
    CRTFilter( Image* inputImage, float scaleFactor );
    ~CRTFilter();
    void apply();
    void applyTypeB();
};

#endif // CRTFILTER_H
