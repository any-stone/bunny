//Drawing a bunny program
//Annie Kuxa
//January 14, 2026

#include "SSDL.h"

int main (int argc, char** argv)
{
    SSDL_SetWindowTitle ("Just a little bunny");

    //Setting up colors for the picture
    SSDL_Color LILAC_SKY = SSDL_CreateColor (200, 190, 230);
    SSDL_Color CREAM_FUR = SSDL_CreateColor (255, 253, 240); 

    //Paint the backrgound
    SSDL_RenderClear (LILAC_SKY);

    //Bunny's body
    SSDL_SetRenderDrawColor     (CREAM_FUR);
    SSDL_RenderFillCircle       (300, 320, 80);

    //Bunny's head
    SSDL_RenderFillCircle       (300, 220, 60);

    //Bunny's tail
    SSDL_RenderFillCircle       (370, 360, 15);

    SSDL_WaitKey (); //Waiting for user to hit any key
    
    return 0;
}
