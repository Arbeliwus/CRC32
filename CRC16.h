#ifndef CRC_H_
#define CRC_H_

#include "Arduino.h"

class CRC16 {
public:
  static unsigned int crc_chk(unsigned char* crc_data, int length);
};

#endif
