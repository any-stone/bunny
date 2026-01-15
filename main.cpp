//Drawing a bunny program
//Annie Kuxa
//January 14, 2026

#include "SSDL.h"

int main (int argc, char** argv)
{
    SSDL_SetWindowTitle ("Just a little bunny");

    //Setting up colors for the picture
    const  SSDL_Color LILAC_SKY = SSDL_CreateColor (200, 190, 230);
    const SSDL_Color CREAM_FUR = SSDL_CreateColor (255, 253, 240);
    const SSDL_Color INDIGO    = SSDL_CreateColor (75, 0, 130); 

    //Paint the backrgound
    SSDL_RenderClear (LILAC_SKY);

    //Bunny's body
    SSDL_SetRenderDrawColor     (CREAM_FUR);
    SSDL_RenderFillCircle       (300, 320, 80);

    //Bunny's head
    SSDL_RenderFillCircle       (300, 220, 60);

    //Bunny's tail
    SSDL_RenderFillCircle       (370, 360, 15);

    //Bunny's ears
    SSDL_RenderFillRect         (260, 120, 25, 60);
    SSDL_RenderFillRect         (320, 120, 25, 60);

    //Top parts of bunny's ears
    SSDL_RenderFillCircle       (272, 120, 12);
    SSDL_RenderFillCircle       (332, 120, 12);

    //Bunny's face
    SSDL_SetRenderDrawColor     (INDIGO);

    //Eyes
    //Left
    SSDL_RenderDrawLine         (260, 200, 270, 190);
    SSDL_RenderDrawLine         (270, 190, 280, 200);

    //Right
    SSDL_RenderDrawLine         (310, 200, 320, 190);
    SSDL_RenderDrawLine         (320, 190, 330, 200);

    //Mouth
    SSDL_RenderDrawCircle       (290, 230, 10);
    
    //Change color to bunny's fur color to create overlapping rectangle
    SSDL_SetRenderDrawColor     (CREAM_FUR);
    SSDL_RenderFillRect         (280, 220, 25, 10);

    SSDL_WaitKey (); //Waiting for user to hit any key
    
    return 0;
}
