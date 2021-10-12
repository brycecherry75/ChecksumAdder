#include "ChecksumAdder.h"

uint8_t ChecksumAdderClass::addWordToByte(uint8_t InputValue, uint16_t ValueToAdd) {
  for (uint8_t i = 0; i < 2; i++) {
    InputValue += ((ValueToAdd >> (8 * i)) & 0xFF);
  }
  return InputValue;
}

uint8_t ChecksumAdderClass::addDwordToByte(uint8_t InputValue, uint32_t ValueToAdd) {
  for (uint8_t i = 0; i < 4; i++) {
    InputValue += ((ValueToAdd >> (8 * i)) & 0xFF);
  }
  return InputValue;
}

uint8_t ChecksumAdderClass::addQwordToByte(uint8_t InputValue, uint64_t ValueToAdd) {
  for (uint8_t i = 0; i < 8; i++) {
    InputValue += ((ValueToAdd >> (8 * i)) & 0xFF);
  }
  return InputValue;
}

uint16_t ChecksumAdderClass::addDwordToWord(uint16_t InputValue, uint32_t ValueToAdd) {
  for (uint8_t i = 0; i < 2; i++) {
    InputValue += ((ValueToAdd >> (16 * i)) & 0xFFFF);
  }
  return InputValue;
}

uint16_t ChecksumAdderClass::addQwordToWord(uint16_t InputValue, uint64_t ValueToAdd) {
  for (uint8_t i = 0; i < 4; i++) {
    InputValue += ((ValueToAdd >> (16 * i)) & 0xFFFF);
  }
  return InputValue;
}

uint32_t ChecksumAdderClass::addQwordToDword(uint32_t InputValue, uint64_t ValueToAdd) {
  for (uint8_t i = 0; i < 2; i++) {
    InputValue += ((ValueToAdd >> (32 * i)) & 0xFFFFFFFF);
  }
  return InputValue;
}

uint8_t ChecksumAdderClass::addByteArrayToByte(uint8_t InputValue, uint8_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    InputValue += ValueToAdd[i];
  }
  return InputValue;
}

uint8_t ChecksumAdderClass::addWordArrayToByte(uint8_t InputValue, uint16_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    uint8_t temp = addWordToByte(InputValue, ValueToAdd[i]);
    InputValue += temp;
  }
  return InputValue;
}

uint8_t ChecksumAdderClass::addDwordArrayToByte(uint8_t InputValue, uint32_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    uint8_t temp = addDwordToByte(InputValue, ValueToAdd[i]);
    InputValue += temp;
  }
  return InputValue;
}

uint8_t ChecksumAdderClass::addQwordArrayToByte(uint8_t InputValue, uint64_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    uint8_t temp = addQwordToByte(InputValue, ValueToAdd[i]);
    InputValue += temp;
  }
  return InputValue;
}

uint16_t ChecksumAdderClass::addByteArrayToWord(uint16_t InputValue, uint8_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    InputValue += ValueToAdd[i];
  }
  return InputValue;
}

uint16_t ChecksumAdderClass::addWordArrayToWord(uint16_t InputValue, uint16_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    InputValue += ValueToAdd[i];
  }
  return InputValue;
}

uint16_t ChecksumAdderClass::addDwordArrayToWord(uint16_t InputValue, uint32_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    uint16_t temp = addDwordToWord(InputValue, ValueToAdd[i]);
    InputValue += temp;
  }
  return InputValue;
}

uint16_t ChecksumAdderClass::addQwordArrayToWord(uint16_t InputValue, uint64_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    uint16_t temp = addQwordToWord(InputValue, ValueToAdd[i]);
    InputValue += temp;
  }
  return InputValue;
}

uint32_t ChecksumAdderClass::addByteArrayToDword(uint32_t InputValue, uint8_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    InputValue += ValueToAdd[i];
  }
  return InputValue;
}

uint32_t ChecksumAdderClass::addWordArrayToDword(uint32_t InputValue, uint16_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    InputValue += ValueToAdd[i];
  }
  return InputValue;
}

uint32_t ChecksumAdderClass::addDwordArrayToDword(uint32_t InputValue, uint32_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    InputValue += ValueToAdd[i];
  }
  return InputValue;
}

uint32_t ChecksumAdderClass::addQwordArrayToDword(uint32_t InputValue, uint64_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    uint32_t temp = addQwordToDword(InputValue, ValueToAdd[i]);
    InputValue += temp;
  }
  return InputValue;
}

uint64_t ChecksumAdderClass::addByteArrayToQword(uint64_t InputValue, uint8_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    InputValue += ValueToAdd[i];
  }
  return InputValue;
}

uint64_t ChecksumAdderClass::addWordArrayToQword(uint64_t InputValue, uint16_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    InputValue += ValueToAdd[i];
  }
  return InputValue;
}

uint64_t ChecksumAdderClass::addDwordArrayToQword(uint64_t InputValue, uint32_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    InputValue += ValueToAdd[i];
  }
  return InputValue;
}

uint64_t ChecksumAdderClass::addQwordArrayToQword(uint64_t InputValue, uint64_t *ValueToAdd, uint16_t ArraySize) {
  for (uint16_t i = 0; i < ArraySize; i++) {
    InputValue += ValueToAdd[i];
  }
  return InputValue;
}

#if defined(EEPROM_ENABLED_ChecksumAdder)
uint8_t ChecksumAdderClass::calculateEEPROMchecksum_8(uint16_t StartAddress, uint16_t BytesToCheck) {
  uint8_t value = 0;
  for (uint16_t i = 0; i < BytesToCheck; i++) {
    value += EEPROM.read((StartAddress + i));
  }
  return value;
}

uint16_t ChecksumAdderClass::calculateEEPROMchecksum_16(uint16_t StartAddress, uint16_t BytesToCheck) {
  uint16_t value = 0;
  for (uint16_t i = 0; i < BytesToCheck; i++) {
    value += EEPROM.read((StartAddress + i));
  }
  return value;
}

uint32_t ChecksumAdderClass::calculateEEPROMchecksum_32(uint16_t StartAddress, uint16_t BytesToCheck) {
  uint32_t value = 0;
  for (uint16_t i = 0; i < BytesToCheck; i++) {
    value += EEPROM.read((StartAddress + i));
  }
  return value;
}
#endif

ChecksumAdderClass ChecksumAdder;