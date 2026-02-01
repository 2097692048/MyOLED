 //
// Created by 20976 on 2026/1/31.
//

#ifndef PROJECT_OLED_H
#define PROJECT_OLED_H

HAL_StatusTypeDef Oled_Test(void);
void Oled_Init(void);
void OLED_SetCursor(uint8_t x, uint8_t Page);
void OLED_Clear(void);
void OLED_ClearArea(uint8_t x, uint8_t y, uint8_t width,uint8_t Height);
void OLED_ShowChar(uint8_t x, uint8_t y, uint8_t chr);
void OLED_ShowString(uint8_t x, uint8_t y, uint8_t *chr);
void OLED_UpData(void);
void OLED_ShowImage(uint8_t x, uint8_t y, uint8_t width,uint8_t Height,uint8_t *buff);
void OLED_DrawPoint(uint8_t x, uint8_t y);
uint8_t OLED_GetPoint(uint8_t x, uint8_t y);
void OLED_ShowNum(uint8_t x, uint8_t y, uint32_t Number, uint8_t Length);

uint32_t OLED_Numexponent(uint8_t base, uint8_t frequency);

#endif //PROJECT_OLED_H