 //
// Created by 20976 on 2026/1/31.
//

#ifndef PROJECT_OLED_H
#define PROJECT_OLED_H

void OLED_SetCursor(uint8_t x, uint8_t Page);//OLED输出光标位置

HAL_StatusTypeDef OLED_Test(void);//I2C发送测试命令给OLED

void OLED_Init(void);    //OLED初始化
void OLED_Clear(void);   //OLED清屏
void OLED_UpData(void);  //OLED更新显存
void OLED_ClearArea(uint8_t x, uint8_t y, uint8_t width,uint8_t Height);   //OLED区域清屏

void OLED_ShowChar(uint8_t x, uint8_t y, uint8_t chr);    //OLED显示字符
void OLED_ShowString(uint8_t x, uint8_t y, uint8_t *chr); //OLED显示字符串
void OLED_ShowNum(uint8_t x, uint8_t y, uint32_t Number, uint8_t Length);  //OLED显示数字（10进制）
void OLED_ShowHexNum(uint8_t x, uint8_t y, uint32_t Number, uint8_t Length, uint8_t mode); //OLED显示数字(16进制)
void OLED_ShowSignedNum(uint8_t x, uint8_t y, int32_t Number, uint8_t Length);     //OLED显示数字（10进制,带符号）

void OLED_ShowImage(uint8_t x, uint8_t y, uint8_t width,uint8_t Height,uint8_t *buff);   //OLED显示图形
void OLED_DrawPoint(uint8_t x, uint8_t y);          //OLED显示像素点
uint8_t OLED_GetPoint(uint8_t x, uint8_t y);        //OLED像素点读取

uint32_t OLED_Numexponent(uint8_t base, uint8_t frequency);    //求次方数



#endif //PROJECT_OLED_H