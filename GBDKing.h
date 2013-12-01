/*=========================================
==HOMSAR47'S GDDKing PROJECT===============
==DESIGNED TO ADD BETTER FUNCTIONALITY=====
TO GBDK, A PROGRAM MADE TO PROGRAM=========
GAME BOY GAMES IN C========================
=========================================*/

/*==BELOW ARE ALL THE BUTTONS.==========
====WHEN WRITING JOYPAD() TO AN=========
====INTEGER, THESE ARE THE GIVEN========
====VALUES.===========================*/

#define I_A       16
#define I_B       32
#define I_UP      4
#define I_DOWN    8
#define I_LEFT    2
#define I_RIGHT   1
#define I_START   -128
#define I_SELECT  64

/*WAITJOY = WAITS FOR ANY GIVEN VALUE, NOT JUST J_A OR J_B*/
int waitjoy()
{
waitloop:
if (joypad() == 0)
{
goto waitloop;
}
return joypad();
}
