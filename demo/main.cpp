#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    // basic printf demo = 16 by 18 characters on screen
    uLCD.background_color(WHITE); 
    uLCD.text_width(2); //4X size text
    uLCD.text_height(2);
    uLCD.color(BLUE);
    uLCD.textbackground_color(WHITE);
    uLCD.printf("\n106061181\n"); //Default Green on black text
   uLCD.background_color(WHITE); 
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);
    uLCD.color(GREEN);
    uLCD.textbackground_color(WHITE);
    while(1)
    {
        for (int i=30; i>=0; --i) 
        {
            uLCD.locate(1,2);
            uLCD.printf("%2d",i);
            ThisThread::sleep_for(1s);
        }
    }
    
}