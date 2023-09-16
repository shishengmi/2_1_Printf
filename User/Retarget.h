/*十分的感谢稚晖君大大提供的printf重定向代码
 *
 * 该代码需要注释掉编译过程中Src文件中重复定义的部分
 * 在主函数中使用RetargetInit(&huart1);函数对串口进行重定向
 *
 *
 * */
#ifndef _RETARGET_H__
#define _RETARGET_H__

#include "stm32f4xx_hal.h"
#include <sys/stat.h>
#include <stdio.h>

void RetargetInit(UART_HandleTypeDef *huart);

int _isatty(int fd);

int _write(int fd, char *ptr, int len);

int _close(int fd);

int _lseek(int fd, int ptr, int dir);

int _read(int fd, char *ptr, int len);

int _fstat(int fd, struct stat *st);

#endif //#ifndef _RETARGET_H__