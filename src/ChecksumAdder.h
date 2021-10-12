#ifndef ChecksumAdder_h
#define ChecksumAdder_h

#include <Arduino.h>

#define EEPROM_ENABLED_ChecksumAdder

#if defined(__AVR_ATmega328P__) || defined(__AVR_ATmega168__) || defined(__AVR_ATmega88__) || defined(__AVR_ATmega48__) || defined(__AVR_ATmega8__) || defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__) || defined(__AVR_ATmega16U4__) || defined(__AVR_ATmega32U4__) || defined(ARDUINO_SAMD_ZERO)
#if defined(EEPROM_ENABLED_ChecksumAdder)
#include <EEPROM.h> // will not consume program storage or global registers if unused
#define EEPROM_AVAILABLE_ChecksumAdder
#endif
#endif

class ChecksumAdderClass {
  public:
  uint8_t addWordToByte(uint8_t InputValue, uint16_t ValueToAdd);
  uint8_t addDwordToByte(uint8_t InputValue, uint32_t ValueToAdd);
  uint8_t addQwordToByte(uint8_t InputValue, uint64_t ValueToAdd);
  uint16_t addDwordToWord(uint16_t InputValue, uint32_t ValueToAdd);
  uint16_t addQwordToWord(uint16_t InputValue, uint64_t ValueToAdd);
  uint32_t addQwordToDword(uint32_t InputValue, uint64_t ValueToAdd);
  uint8_t addByteArrayToByte(uint8_t InputValue, uint8_t *ValueToAdd, uint16_t ArraySize);
  uint8_t addWordArrayToByte(uint8_t InputValue, uint16_t *ValueToAdd, uint16_t ArraySize);
  uint8_t addDwordArrayToByte(uint8_t InputValue, uint32_t *ValueToAdd, uint16_t ArraySize);
  uint8_t addQwordArrayToByte(uint8_t InputValue, uint64_t *ValueToAdd, uint16_t ArraySize);
  uint16_t addByteArrayToWord(uint16_t InputValue, uint8_t *ValueToAdd, uint16_t ArraySize);
  uint16_t addWordArrayToWord(uint16_t InputValue, uint16_t *ValueToAdd, uint16_t ArraySize);
  uint16_t addDwordArrayToWord(uint16_t InputValue, uint32_t *ValueToAdd, uint16_t ArraySize);
  uint16_t addQwordArrayToWord(uint16_t InputValue, uint64_t *ValueToAdd, uint16_t ArraySize);
  uint32_t addByteArrayToDword(uint32_t InputValue, uint8_t *ValueToAdd, uint16_t ArraySize);
  uint32_t addWordArrayToDword(uint32_t InputValue, uint16_t *ValueToAdd, uint16_t ArraySize);
  uint32_t addDwordArrayToDword(uint32_t InputValue, uint32_t *ValueToAdd, uint16_t ArraySize);
  uint32_t addQwordArrayToDword(uint32_t InputValue, uint64_t *ValueToAdd, uint16_t ArraySize);
  uint64_t addByteArrayToQword(uint64_t InputValue, uint8_t *ValueToAdd, uint16_t ArraySize);
  uint64_t addWordArrayToQword(uint64_t InputValue, uint16_t *ValueToAdd, uint16_t ArraySize);
  uint64_t addDwordArrayToQword(uint64_t InputValue, uint32_t *ValueToAdd, uint16_t ArraySize);
  uint64_t addQwordArrayToQword(uint64_t InputValue, uint64_t *ValueToAdd, uint16_t ArraySize);
#if defined(EEPROM_AVAILABLE_ChecksumAdder)
  uint8_t calculateEEPROMchecksum_8(uint16_t StartAddress, uint16_t BytesToCheck);
  uint16_t calculateEEPROMchecksum_16(uint16_t StartAddress, uint16_t BytesToCheck);
  uint32_t calculateEEPROMchecksum_32(uint16_t StartAddress, uint16_t BytesToCheck);
#endif
};

extern ChecksumAdderClass ChecksumAdder;

#endif