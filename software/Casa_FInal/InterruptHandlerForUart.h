#ifndef _INTERRUPTHANDLERFORUAR_H_
#define _INTERRUPTHANDLERFORUAR_H_

/************************************************** ***************************
 * Public function prototypes
 ************************************************** **************************/
void InitUart1(unsigned int BaudRate);
void IsrUart1();
unsigned char EmptyUart1();
unsigned char GetUart1(void);
unsigned char PutUart1(unsigned char in_char);

#endif //_INTERRUPTHANDLERFORUAR_H_
