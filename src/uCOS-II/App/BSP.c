/******************** (C) COPYRIGHT 2011 野火嵌入式开发工作室 ********************
 * 文件名       ：BSP.c
 * 描述         ：与开发板相关的函数
 *          
 * 实验平台     ：野火kinetis开发板
 * 库版本       ：
 * 嵌入系统     ：uC/OS-II V2.92
 *
 * 作者         ：野火嵌入式开发工作室
 * 淘宝店       ：http://firestm32.taobao.com
 * 技术支持论坛 ：http://www.ourdev.cn/bbs/bbs_list.jsp?bbs_id=1008   
**********************************************************************************/	

#include <BSP.h>
#include <LED.h>
#include "exti.h"
#include "nokia_5110.h"
#include "LED_CORE.h"


/*************************************************************************
*                             野火嵌入式开发工作室
*  
*  函数名称：BSP_Init
*  功能说明：开发板初始化函数
*  参数说明：无
*  函数返回：无
*  修改时间：2012-2-10
*  备    注：最好将所有的初始化在这个函数内实现
*************************************************************************/
void BSP_Init()
{
  LED_INIT();
  Light_init;
   gpio_init(PORTB,0,GPO,1);
  input_init();
  LCD_init();
//  LCD_write_english_string(0, 0, "LCD Inited!");
  Light1_on;
  Light2_on;
  Light3_on;
  Light4_on;
  exti_init(PORTE, 0, rising_down);//使能E口中断
}

void input_init()
{
  gpio_init(PORTC, 2, GPI, 0);
}

