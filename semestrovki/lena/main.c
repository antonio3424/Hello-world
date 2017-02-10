#include "qdbmp.h"
#include <stdio.h>

int main(void)
{
    BMP*    bmp;
    UCHAR   r, g, b;
    UINT    width, height;
    UINT    x, y, RGB;

    bmp = BMP_ReadFile( "lena.bmp" );
    BMP_CHECK_ERROR( stderr, -1 ); /* If an error has occurred, notify and exit */

    width = BMP_GetWidth( bmp );
    height = BMP_GetHeight( bmp );

    for ( x = 0 ; x < width ; ++x )
    {
        for ( y = 0 ; y < height ; ++y )
        {
            /* Get pixel's RGB values */
            BMP_GetPixelRGB( bmp, x, y, &r, &g, &b );

            RGB = (r+ g + b) /3;

            /* Invert RGB values */
            BMP_SetPixelRGB( bmp, x, y, RGB,  RGB, RGB );
        }
    }

    BMP_WriteFile( bmp, "output.bmp");
    BMP_CHECK_ERROR( stderr, -2 );

    BMP_Free( bmp );

    return 0;
}
