

#include <TFT_HX8357.h>
#include "max6675.h"

TFT_HX8357 tft = TFT_HX8357();
#define TFT_GREY 0x5AEB

int16_t x0=29, x1=450, yy0=50,yy1=50;
int16_t x2=250  , x3= 250  ,yy2=90   ,yy3=300  ;

 float T1;
 float T2;
 float T3;
 float T4;
 float T5;
 float T6;

 
 float ktcSO1=21;
 float ktcCS1=20;
 float ktcCLK1=19;
 MAX6675 ktc1(ktcCLK1,ktcCS1,ktcSO1);

 float ktcSO2=18;
 float ktcCS2=17;
 float ktcCLK2=16;
 MAX6675 ktc2(ktcCLK2,ktcCS2,ktcSO2);

 float ktcSO3=15;
 float ktcCS3=14;
 float ktcCLK3=13;
 MAX6675 ktc3(ktcCLK3,ktcCS3,ktcSO3);

 float ktcSO4=12;
 float ktcCS4=11;
 float ktcCLK4=10;
 MAX6675 ktc4(ktcCLK4,ktcCS4,ktcSO4);

 float ktcSO5=9;
 float ktcCS5=8;
 float ktcCLK5=7;
 MAX6675 ktc5(ktcCLK5,ktcCS5,ktcSO5);

 float ktcSO6=3;
 float ktcCS6=2;
 float ktcCLK6=1;
 MAX6675 ktc6(ktcCLK6,ktcCS6,ktcSO6);

 
 void setup(void) {
  
  
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);

  tft.drawLine(x0,yy0,x1,yy1,TFT_GREEN);
  tft.drawLine(x2,yy2,x3,yy3,TFT_RED);

  tft.setCursor(280,150,4);
  tft.setTextColor(TFT_RED,TFT_BLACK);
  tft.setTextSize(1);
  tft.print("Temperature ");
  tft.setCursor(295,180,4);
  tft.setTextColor(TFT_RED,TFT_BLACK);
  tft.setTextSize(1);
  tft.print("in Celsius ");
  
  tft.setCursor(35,20,4);
  tft.setTextColor(TFT_RED,TFT_BLACK);
  tft.setTextSize(1);
  tft.print("THERMOCOUPLE TEMPERATURES ");

  tft.setCursor(50,100,4);
  tft.setTextColor(TFT_GREEN,TFT_BLACK);
  tft.setTextSize(1);
  tft.print("T1 =     ");

  tft.setCursor(50,130,4);
  tft.setTextColor(TFT_GREEN,TFT_BLACK);
  tft.setTextSize(1);
  tft.print("T2 =     ");

  tft.setCursor(50,160,4);
  tft.setTextColor(TFT_GREEN,TFT_BLACK);
  tft.setTextSize(1);
  tft.print("T3 =     ");

  tft.setCursor(50,190,4);
  tft.setTextColor(TFT_GREEN,TFT_BLACK);
  tft.setTextSize(1);
  tft.print("T4 =     ");

  tft.setCursor(50,220,4);
  tft.setTextColor(TFT_GREEN,TFT_BLACK);
  tft.setTextSize(1);
  tft.print("T5 =     ");

  tft.setCursor(50,250,4);
  tft.setTextColor(TFT_GREEN,TFT_BLACK);
  tft.setTextSize(1);
  tft.print("T6 =     ");

   
 
 }
 void loop(){
  T1=(ktc1.readCelsius());
  T2=(ktc2.readCelsius());
  T3=(ktc3.readCelsius());
  T4=(ktc4.readCelsius());
  T5=(ktc5.readCelsius());
  T6=(ktc6.readCelsius());
 
   tft.setCursor(100,100,4);
   tft.setTextSize(1);
   tft.setTextColor(TFT_CYAN,TFT_BLACK);
   tft.print(T1);

   tft.setCursor(100,130,4);
   tft.setTextSize(1);
   tft.setTextColor(TFT_CYAN,TFT_BLACK);
   tft.print(T2);

   tft.setCursor(100,160,4);
   tft.setTextSize(1);
   tft.setTextColor(TFT_CYAN,TFT_BLACK);
   tft.print(T3);

   tft.setCursor(100,190,4);
   tft.setTextSize(1);
   tft.setTextColor(TFT_CYAN,TFT_BLACK);
   tft.print(T4);

   tft.setCursor(100,220,4);
   tft.setTextSize(1);
   tft.setTextColor(TFT_CYAN,TFT_BLACK);
   tft.print(T5);

   tft.setCursor(100,250,4);
   tft.setTextSize(1);
   tft.setTextColor(TFT_CYAN,TFT_BLACK);
   tft.print(T6);

   
   delay(200);
  }
