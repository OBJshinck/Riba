    #include "TXlib.h"
    void kvadriba (int xco, int yco, int xct, int yct, int xk, int yk, int xwo, int ywo, int xwt, int ywt);
    int main()
    {
    txCreateWindow(1000, 800);
    txSetColor(TX_WHITE);
    txClear();
    txSetColor(TX_BLACK);
    COLORREF background = RGB(151, 151, 151);
    txSetFillColor(background);
    txSetColor(background);
    txRectangle(0, 0, 800, 800);
    bool stop = FALSE;
    bool riba = TRUE;
    int xco = 200;
    int yco = 200;
    int xct = 200;
    int yct = 200;
    int xk = 200;
    int yk = 210;
    int xwo = 200;
    int ywo = 200;
    int xwt = 100;
    int ywt = 300;
    while(1==1)
    {
    kvadriba (xco, yco, xct, yct, xk, yk, xwo, ywo, xwt, ywt);
    if ((300<=txMouseX()) and (500>=txMouseX()) and (700<=txMouseY()) and (750>=txMouseY()))
        {
        txSetFillColor(TX_WHITE);
        txSetColor(TX_BLACK);
        txRectangle(txMouseX(), txMouseY(), txMouseX()+200, txMouseY()+50);
        txTextOut(txMouseX()+10, txMouseY()+18, " ‚‡‰Ë·‡ Ì‡ ‡Á‚Â‰ÍÂ");
        }
    txSleep(100);
    txSetColor(TX_WHITE);
    txClear();
    txSetColor(TX_BLACK);
    txSetFillColor(background);
    txSetColor(background);
    txRectangle(0, 0, 800, 800);
    txSetFillColor(TX_WHITE);
    txSetColor(TX_WHITE);
    txRectangle(800, 0, 1000, 1000);
    if (stop==FALSE)
        {
        if ((820<=txMouseX()) and (980>=txMouseX()) and (320<=txMouseY()) and (480>=txMouseY()))
            {
            txSetColor(TX_BLACK);
            txSetFillColor(TX_GRAY);
            txRectangle(820, 320, 980, 480);
            txSetFillColor(TX_WHITE);
            txRectangle(850, 330, 885, 470);
            txRectangle(915, 330, 950, 470);
            if (txMouseButtons() & 1)
                {
                stop = TRUE;
                }
            }
        else
            {
            txSetColor(TX_BLACK);
            txSetFillColor(TX_WHITE);
            txRectangle(820, 320, 980, 480);
            txSetFillColor(TX_GRAY);
            txRectangle(850, 330, 885, 470);
            txRectangle(915, 330, 950, 470);
            }
        xco = xco-5;
        xct = xct-5;
        xwo = xwo-5;
        xwt = xwt-5;
        if (xco==60)
            {
            xco = 550;
            }
        if (xct==-150)
            {
            xct = 320;
            }
        if (yk==190)
            {
            riba = FALSE;
            }
        if (yk==210)
            {
            riba = TRUE;
            }
        if (riba==TRUE)
            {
            yk = yk-2;
            }
        else
            {
            yk = yk+2;
            }
        if (xwo==-120)
            {
            xwo = 430;
            }
        if (xwt==-130)
            {
            xwt = 400;
            }
        }
    else
        {
        if ((820<=txMouseX()) and (980>=txMouseX()) and (320<=txMouseY()) and (480>=txMouseY()))
            {
            txSetColor(TX_BLACK);
            txSetFillColor(TX_GRAY);
            txRectangle(820, 320, 980, 480);
            txSetFillColor(TX_WHITE);
            POINT start[3]={{860, 360}, {860, 440}, {940, 400}};
            txPolygon(start, 3);
            if (txMouseButtons() & 1)
                {
                stop = FALSE;
                }
            }
        else
            {
            txSetColor(TX_BLACK);
            txSetFillColor(TX_WHITE);
            txRectangle(820, 320, 980, 480);
            txSetFillColor(TX_GRAY);
            POINT start[3]={{860, 360}, {860, 440}, {940, 400}};
            txPolygon(start, 3);
            }
        }
    }

    return 0;
    }

    void kvadriba (int xco, int yco, int xct, int yct, int xk, int yk, int xwo, int ywo, int xwt, int ywt)
    {
    COLORREF frame = RGB(249, 223, 17);
    txSetFillColor(frame);
    txSetColor(frame);
    txRectangle(100, 100, 700, 700);
    COLORREF sky = RGB(123, 195, 241);
    txSetFillColor(sky);
    txSetColor(sky);
    txRectangle(200, 200, 600, 600);

    //SquareFish

    COLORREF riba = RGB(250, 69, 36);

    POINT tale[4]={{xk+125, yk+140}, {xk+150, yk+185}, {xk+150, yk+215},
    {xk+125, yk+260}};

    txSetFillColor(riba);
    txSetColor(TX_BLACK);
    txPolygon(tale, 4);
    txRectangle(xk+150, yk+170, xk+275, yk+230);

    txSetFillColor(TX_BLACK);
    txCircle(xk+263, yk+185, 3);

    //Sea

    COLORREF sea = RGB(6, 113, 211);
    txSetFillColor(sea);
    txSetColor(sea);
    txRectangle(200, 400, 600, 600);

    //Wave one
    COLORREF wave = RGB(104, 158, 226);
    txSetColor(wave, 3);

    txLine(xwo+180, ywo+240, xwo+205, ywo+230);
    txLine(xwo+205, ywo+230, xwo+225, ywo+245);
    txLine(xwo+225, ywo+245, xwo+240, ywo+245);
    txLine(xwo+240, ywo+245, xwo+260, ywo+230);
    txLine(xwo+260, ywo+230, xwo+275, ywo+230);
    txLine(xwo+275, ywo+230, xwo+300, ywo+240);
    txLine(xwo+300, ywo+240, xwo+320, ywo+233);

    //Wave two

    txLine(xwt+180, ywt+240, xwt+205, ywt+230);
    txLine(xwt+205, ywt+230, xwt+225, ywt+245);
    txLine(xwt+225, ywt+245, xwt+240, ywt+245);
    txLine(xwt+240, ywt+245, xwt+260, ywt+230);
    txLine(xwt+260, ywt+230, xwt+275, ywt+230);
    txLine(xwt+275, ywt+230, xwt+300, ywt+240);
    txLine(xwt+300, ywt+240, xwt+320, ywt+233);

    //Clouds

    POINT cloud_one[18]={{xco+45, yco+50}, {xco+40, yco+40}, {xco+65, yco+30},
    {xco+70, yco+25}, {xco+77, yco+28}, {xco+100, yco+25}, {xco+120, yco+30}, {xco+140, yco+28},
    {xco+138, yco+50}, {xco+140, yco+60}, {xco+125, yco+75}, {xco+125, yco+85}, {xco+90, yco+80},
    {xco+85, yco+95}, {xco+70, yco+95}, {xco+60, yco+75}, {xco+40, yco+75}, {xco+37, yco+60}};

    POINT cloud_two[18]={{xct+280, yct+100}, {xct+270, yct+100}, {xct+270, yct+90},
    {xct+275, yct+80}, {xct+278, yct+80}, {xct+280, yct+65}, {xct+310, yct+70}, {xct+310, yct+68},
    {xct+320, yct+68}, {xct+325, yct+75}, {xct+340, yct+75}, {xct+333, yct+95}, {xct+350, yct+100},
    {xct+350, yct+110}, {xct+325, yct+115}, {xct+320, yct+125}, {xct+300, yct+118}, {xct+280, yct+120}};

    txSetFillColor(TX_WHITE);
    txSetColor(TX_BLACK, 3);
    txPolygon(cloud_one, 18);
    txPolygon(cloud_two, 18);

    txSetFillColor(frame);
    txSetColor(frame);

    txRectangle(100, 100, 200, 700);
    txRectangle(600, 700, 700, 100);

    txSetColor(TX_BLACK);

    COLORREF background = RGB(151, 151, 151);
    txSetFillColor(background);
    txSetColor(background);
    txRectangle(0, 0, 100, 800);
    txRectangle(700, 0, 800, 800);

    //Fish leftup
    POINT riba_leftup[14]={{150, 150}, {125, 140}, {100, 125},
    {125, 125}, {140, 100}, {145, 125}, {150, 150}, {145, 160},
    {160, 180}, {180, 200}, {200, 200}, {200, 180}, {180, 160},
    {160, 150}};
    txSetFillColor(riba);
    txPolygon (riba_leftup, 14);
    txSetFillColor(TX_BLACK);
    txCircle(190, 185, 3);

    //Fish rightup
    POINT riba_rightup[14]={{650, 150}, {655, 125}, {660, 100},
    {675, 125}, {700, 125}, {675, 140}, {650, 150}, {640, 150},
    {615, 170}, {600, 190}, {600, 200}, {620, 200}, {655, 170},
    {655, 150}};
    txSetFillColor(riba);
    txPolygon (riba_rightup, 14);
    txSetFillColor(TX_BLACK);
    txCircle(613, 183, 3);

    //Fish leftdown
    POINT riba_leftdown[12]={{150, 650}, {140, 650}, {100, 675},
    {125, 675}, {140, 700}, {150, 650}, {165, 650}, {200, 610},
    {200, 600}, {180, 600}, {145, 630}, {145, 650}};
    txSetFillColor(riba);
    txPolygon (riba_leftdown, 12);
    txSetFillColor(TX_BLACK);
    txCircle(185, 610, 3);

    //Fish rightdown
    POINT riba_rightdown[12]={{650, 650}, {660, 650}, {700, 675},
    {675, 675}, {660, 700}, {650, 650}, {630, 650}, {600, 615},
    {600, 600}, {615, 600}, {655, 640}, {655, 650}};
    txSetFillColor(riba);
    txPolygon (riba_rightdown, 12);
    txSetFillColor(TX_BLACK);
    txCircle(610, 610, 3);

    //Decor up
    COLORREF decor = RGB(9, 112, 207);
    txSetColor(decor, 2);

    txLine(200, 200, 220, 150);
    txLine(220, 150, 250, 100);
    txLine(250, 100, 280, 150);
    txLine(280, 150, 300, 200);

    txLine(300, 200, 320, 150);
    txLine(320, 150, 350, 100);
    txLine(350, 100, 380, 150);
    txLine(380, 150, 400, 200);

    txLine(400, 200, 420, 150);
    txLine(420, 150, 450, 100);
    txLine(450, 100, 480, 150);
    txLine(480, 150, 500, 200);

    txLine(500, 200, 520, 150);
    txLine(520, 150, 550, 100);
    txLine(550, 100, 580, 150);
    txLine(580, 150, 600, 200);

    //Decor right
    txLine(600, 200, 650, 220);
    txLine(650, 220, 700, 250);
    txLine(700, 250, 650, 280);
    txLine(650, 280, 600, 300);

    txLine(600, 300, 650, 320);
    txLine(650, 320, 700, 350);
    txLine(700, 350, 650, 380);
    txLine(650, 380, 600, 400);

    txLine(600, 400, 650, 420);
    txLine(650, 420, 700, 450);
    txLine(700, 450, 650, 480);
    txLine(650, 480, 600, 500);

    txLine(600, 500, 650, 520);
    txLine(650, 520, 700, 550);
    txLine(700, 550, 650, 580);
    txLine(650, 580, 600, 600);

    //Decor down
    txLine(200, 600, 220, 650);
    txLine(220, 650, 250, 700);
    txLine(250, 700, 280, 650);
    txLine(280, 650, 300, 600);

    txLine(300, 600, 320, 650);
    txLine(320, 650, 350, 700);
    txLine(350, 700, 380, 650);
    txLine(380, 650, 400, 600);

    txLine(400, 600, 420, 650);
    txLine(420, 650, 450, 700);
    txLine(450, 700, 480, 650);
    txLine(480, 650, 500, 600);

    txLine(500, 600, 520, 650);
    txLine(520, 650, 550, 700);
    txLine(550, 700, 580, 650);
    txLine(580, 650, 600, 600);

    //Decor left
    txLine(200, 200, 150, 220);
    txLine(150, 220, 100, 250);
    txLine(100, 250, 150, 280);
    txLine(150, 280, 200, 300);

    txLine(200, 300, 150, 320);
    txLine(150, 320, 100, 350);
    txLine(100, 350, 150, 380);
    txLine(150, 380, 200, 400);

    txLine(200, 400, 150, 420);
    txLine(150, 420, 100, 450);
    txLine(100, 450, 150, 480);
    txLine(150, 480, 200, 500);

    txLine(200, 500, 150, 520);
    txLine(150, 520, 100, 550);
    txLine(100, 550, 150, 580);
    txLine(150, 580, 200, 600);

    //Frame

    txSetFillColor(TX_WHITE);
    txSetColor(TX_BLACK);
    txRectangle(300, 700, 500, 750);
    txSetFillColor(TX_BLACK);
    txTextOut(310, 710, "‡≥å0‡≥å‡≤¶‡≤æ‡≤∏‡≤ø");
    txTextOut(310, 720, "‡≥á‡≤ï‡≤ø‡≥å‡≤¶‡≤∞");
    }
