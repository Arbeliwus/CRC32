#include "CRC.h"



unsigned int CRC16::crc_chk(unsigned char* crc_data, int length)
{
  unsigned int reg_crc=0xFFFF;
  while(length--)
  {
    reg_crc ^= *crc_data++;
    for(int i=0; i<8; i++)
    {
      if(reg_crc & 0x01) /* LSB(b0)=1 */
        reg_crc = (reg_crc >> 1) ^ 0xA001;
      else
        reg_crc = reg_crc >> 1;
    }
  }
  
  return reg_crc;
}
