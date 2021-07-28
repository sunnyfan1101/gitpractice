#include <LedControl.h>   // 需下載 LedControl 函式庫
#define DIN 8   // 定義接DIN的腳位在8
#define CS 7    // 定義接CS的腳位在7
#define CLK 6   // 定義接CLK的腳位在6
#define Width 8   // 8*8矩陣
#define Height 8 

LedControl LC = LedControl(DIN,CLK,CS,1); 
// data pin/ clock pin/ 
// 決定是否要傳資料/ 連接幾個led矩陣

// 設定每個燈的亮暗 8*8次 
void Update(int Map[Height][Width])
{
  for(int i=0; i<Height; i++)
  {
    for(int j=Width-1; j>=0; j--)
    {
      LC.setLed(0,j,i,Map[7-i][j]); // 更新亮暗
    }
  }
}

// 設定圖案
int On[8][8]={{0,0,1,1,1,1,0,0},
              {0,1,0,0,0,0,1,0},
              {1,0,1,0,0,1,0,1},
              {1,0,0,0,0,0,0,1},
              {1,0,1,0,0,1,0,1},
              {1,0,0,1,1,0,0,1},
              {0,1,0,0,0,0,1,0},
              {0,0,1,1,1,1,0,0}};
              
void setup() 
{
  pinMode(DIN,OUTPUT);  // 設定DIN腳位為輸出模式
  pinMode(CS,OUTPUT);   // 設定CS腳位為輸出模式
  pinMode(CLK,OUTPUT);  // 設定CLK腳位為輸出模式

  LC.shutdown(0,false); // 供電
  LC.setIntensity(0,5); // 設定亮暗 (0~15)

  Update(On); // 更新圖案到顯示器上
}

void loop()
{  
  // 如果只想讓他亮 → 進入迴圈，但不跑任何程式
}
