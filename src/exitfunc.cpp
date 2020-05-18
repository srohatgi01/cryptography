//! Libraries & Header Files
#include <iostream>
#include <graphics.h>
#include <stdio.h>
#include "welcomeScreen.h"
#include "r_l_screen.h"
#include "log_regs.h"
#include "introduction.h"
#include "encryptDecrypt.h"
#include "exitfunc.h"

void exitfunc() {
    //!To get the screen pixel count of x-axis & y-axis
    DWORD screenWidth = getScreenWidth();
    DWORD screenHeight = getScreenHeight();
    cleardevice();
    //! For the text
    settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
    int textHeightIntroduction = textheight("Thank You for using ");
    int textWidthIntroduction = textwidth("Thank You for using ");
    outtextxy(
              ((screenWidth - textWidthIntroduction)/2),
              ((screenHeight/4) - textHeightIntroduction/2),
              "Thank You for using "
             );

    settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
    int textHeightIntroduction1 = textheight("CRYPTOGRAPHY");
    int textWidthIntroduction1 = textwidth("CRYPTOGRAPHY");
    outtextxy(
              ((screenWidth - textWidthIntroduction1)/2),
              ((screenHeight/2)),
              "CRYPTOGRAPHY"
             );
    delay(5000);
    closegraph();
    exit(0);
}
