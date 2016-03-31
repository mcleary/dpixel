#ifndef FILTER_H
#define FILTER_H

#include "Image.h"

class Filter
{
public:
    Filter( Image* inputImage, Image* outputImage );
    Filter( Image* inputImage );
    ~Filter();
    virtual void apply() = 0;

protected:
    void fillBufferBGRA( u_char* inputBuffer );
    void fillImageBGRA( u_char* outputBuffer );

    void fillBufferRGB( u_char* inputBuffer );
    void fillImageRGB( u_char* outputBuffer );

    Image* _inputImage;
    Image* _outputImage;
};

#endif // FILTER_H