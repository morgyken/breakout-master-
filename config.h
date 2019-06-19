

#ifndef ogamalBreakout_config_h
#define ogamalBreakout_config_h

// Force Redraw timer
#define TIMER 16.6         

// Window settings
#define WINTITLE "Breakout Game ~ By Osama Attia"
const int WINWIDTH  = 800;
const int WINHEIGHT = 600;

// Wall settings
const int WALLWIDTH = 700;                         
const int WALLHEIGHT = 180;                         
const float WALLX = (WINWIDTH - WALLWIDTH) / 2.0f; 
const float WALLY = WALLX + 40;                     
const int WALLSPACE = 3;                           
const int WALLCOLS = 15;                          
const int WALLROWS = 10;                            

// Pedal Settings
const float PEDALWIDTH = 150.0f;
const float PEDALHEIGHT = 12.0f;

// Ball settings
const float BALL_RADIUS = 6.0f;
const int CIRCLE_SEGMENTS = 50; 

#endif
