# ChecksumAdder
Discrete adder function for calculating a checksum using arrays and/or elements of different sizes

Revisions:

1.0.0	First release

## Usage

(add(Word/Dword/Qword)ToByte/add(Dword/Qword)ToWord/addQwordToDword)(InputValue, ValueToAdd) - returns InputValue plus ValueToAdd

add(Byte/Word/Dword/Qword)ArrayTo(Byte/Word/Dword/Qword)(InputValue, *ValueToAdd, ArraySize) - returns InputValue plus the contents of the *ValueToAdd array defined by ArraySize

calculateEEPROMchecksum_(8/16/32)(StartAddress, BytesToCheck) - returns uint8_t/uint16_t/uint32_t sum of internal EEPROM contents defined by StartAddress and BytesToCheck - available only on Uno/Mega/Leonardo/Zero/ATmega8 and derivatives and supports up to 64 KBytes of internal EEPROM

Quad word (uint64_t/long long) is currently untested and requires compiler support including bitshift operations.