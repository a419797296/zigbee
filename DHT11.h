#ifndef __DHT11_H__
#define __DHT11_H__
#include "SerialApp.h"
#ifdef ZIGBEE_SENSOR
#define uchar unsigned char
extern void Delay_ms(unsigned int xms);	//��ʱ����
extern void COM(void);                  // ��ʪд��
extern void DHT11(void);                //��ʪ��������

extern uchar shidu, wendu;

#endif
#endif