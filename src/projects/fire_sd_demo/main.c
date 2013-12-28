/******************** (C) COPYRIGHT 2011 野火嵌入式开发工作室 ********************
 * 文件名       ：main.c
 * 描述         ：SD卡带文件系统实验
 *
 * 实验平台     ：野火kinetis开发板
 * 库版本       ：
 * 嵌入系统     ：
 *
 * 作者         ：野火嵌入式开发工作室
 * 淘宝店       ：http://firestm32.taobao.com
 * 技术支持论坛 ：http://www.ourdev.cn/bbs/bbs_list.jsp?bbs_id=1008
**********************************************************************************/



#include "common.h"
#include "include.h"
#include "ff.h"



#define BUFF_SIZE   100


void main(void)
{
    FIL fdst,fdst2;  //文件
    FATFS fs;  //文件系统
    FRESULT res;
   
    uint32 size, sizetmp;
    char *str = "我是张盛平\n";
    printf(str);
    f_mount(&fs,0,1);
    res = f_open(&fdst,"0:/data1.txt",FA_OPEN_ALWAYS|FA_WRITE);
    f_printf(&fdst,"hello.Working");
    f_printf(&fdst,"succed\n哈哈");
    f_close(&fdst);
  


}




//    Light_init;
//    printf("串口通信正在");
//
//    for(size = 0; size < BUFF_SIZE; size++)buff[size] = 0;
//
//    f_mount(0, &fs);		                                                       //SD卡系统初始化
//
//    res = f_open(&fdst, "0:/FireDemod.txt", FA_OPEN_ALWAYS | FA_WRITE | FA_READ);  //打开文件，如果没有就创建，带读写打开
//
//    if( res == FR_DISK_ERR)
//    {
//        printf( "\n没插入SD卡？？\n" );
//        return;
//    }
//    else if ( res == FR_OK )
//    {
//        printf( "\n文件打开成功 \n" );
//        Light1_on;
//    }
//    else
//    {
//        printf("\n返回值异常");
//    }
//
//
//    f_puts(str, &fdst);                     //往文件里写入字符串
//    f_puts("hello,\nI am ok",&fdst);
//
//    size = f_size(&fdst);                   //获取文件的大小
//   
//
//    printf( "\n文件大小为：%d \n" , size);  //串口打印文件的大小
//
//    if(size > BUFF_SIZE)size = BUFF_SIZE;   //防止溢出
//
//    f_lseek(&fdst, 0);                      //把指针指向文件顶部
//    f_read (&fdst, buff, size, (UINT *)&sizetmp);   //读取
//
//
//    printf("文件内容为：%s", (char const *)buff);
//
//    f_close(&fdst);                         //关闭文件
//    f_open(&fdst2, "0:/size.txt", FA_OPEN_ALWAYS | FA_WRITE | FA_READ);
//    f_printf(&fdst2,"%d",size);
//    f_close(&fdst2);

