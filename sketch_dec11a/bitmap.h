// KADİR AYDINLI

// 128X64
const unsigned char PROGMEM splashLogo [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x0F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x01, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x07, 0x80, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0xFC, 0x00, 0x0C, 0x31, 0x8E, 0x1F, 0xE3, 0xF6, 0x18,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0xCE, 0x00, 0x06, 0x71, 0x8E, 0x03, 0x06, 0x06, 0x18,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0xF0, 0xC6, 0x00, 0x06, 0x73, 0x0F, 0x03, 0x0C, 0x06, 0x18,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x01, 0xB0, 0xC6, 0x00, 0x06, 0x7B, 0x1B, 0x03, 0x0C, 0x06, 0x18,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x01, 0xB0, 0xCC, 0x00, 0x06, 0xDB, 0x1B, 0x03, 0x18, 0x07, 0xF8,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x98, 0xFC, 0x0E, 0x02, 0xDA, 0x19, 0x83, 0x18, 0x07, 0xF8,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x03, 0xF8, 0xCC, 0x0F, 0x03, 0xDE, 0x3F, 0x83, 0x08, 0x06, 0x18,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x03, 0x18, 0xC4, 0x00, 0x03, 0x8E, 0x31, 0x83, 0x0C, 0x06, 0x18,
0x07, 0x19, 0xC1, 0x9C, 0xE0, 0x03, 0x0C, 0xC6, 0x00, 0x03, 0x8E, 0x30, 0xC3, 0x0E, 0x06, 0x18,
0x07, 0x08, 0x48, 0x94, 0xE0, 0x06, 0x0C, 0xC6, 0x00, 0x01, 0x8C, 0x60, 0xC3, 0x07, 0xE6, 0x18,
0x07, 0x08, 0xC8, 0x9C, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x07, 0x0C, 0x48, 0xC4, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x07, 0x1D, 0xC9, 0xC4, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x1C, 0x0E, 0x70, 0x38, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x38, 0x07, 0xE0, 0x1C, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x70, 0x03, 0xC3, 0x0E, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x71, 0xE3, 0xC7, 0x8E, 0x00, 0x00, 0x00, 0x00,
0x07, 0x80, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x70, 0x03, 0xC3, 0x0E, 0x00, 0x00, 0x00, 0x00,
0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x70, 0x07, 0xE0, 0x0E, 0x00, 0x00, 0x00, 0x00,
0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x38, 0x07, 0xE0, 0x1C, 0x00, 0x00, 0x00, 0x00,
0x01, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x1C, 0x1E, 0x78, 0x38, 0x00, 0x00, 0x00, 0x00,
0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x0F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 24X24
const unsigned char PROGMEM whatsapp [] = {
0x00, 0x7E, 0x00, 0x03, 0xFF, 0xC0, 0x07, 0x80, 0xE0, 0x0E, 0x00, 0x38, 0x18, 0x00, 0x18, 0x38,
0x00, 0x0C, 0x30, 0x80, 0x06, 0x61, 0xC0, 0x06, 0x61, 0xC0, 0x02, 0x63, 0xC0, 0x03, 0x41, 0xC0,
0x03, 0xC1, 0xC0, 0x03, 0x40, 0xE0, 0x03, 0x40, 0x71, 0x03, 0x60, 0x3B, 0xC3, 0x60, 0x1F, 0xC6,
0x70, 0x07, 0x86, 0x30, 0x00, 0x0C, 0x30, 0x00, 0x1C, 0x20, 0x00, 0x38, 0x67, 0x00, 0x70, 0x7F,
0xE7, 0xE0, 0x78, 0xFF, 0x80, 0x80, 0x00, 0x00, 
};

// 24X24
const unsigned char PROGMEM SMS [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F,
0xFF, 0xFC, 0x1F, 0xFF, 0xF8, 0x6F, 0xFF, 0xF6, 0x73, 0xFF, 0xCE, 0x7D, 0xFF, 0xBE, 0x7E, 0xFE,
0x7E, 0x7E, 0x3C, 0xFE, 0x7D, 0xDB, 0x7E, 0x7D, 0xE7, 0xBE, 0x7B, 0xFF, 0xDE, 0x77, 0xFF, 0xEE,
0x6F, 0xFF, 0xF6, 0x5F, 0xFF, 0xFA, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

// 24X24
const unsigned char PROGMEM battery [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x30, 0x00, 0x03, 0x27, 0x9E, 0x79, 0x27,
0x9E, 0x79, 0xE7, 0x9E, 0x79, 0xE7, 0x9E, 0x79, 0xE7, 0x9E, 0x79, 0xE7, 0x9E, 0x79, 0x27, 0x9E,
0x79, 0x27, 0x9E, 0x79, 0x30, 0x00, 0x03, 0x3F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

// 128X60
const unsigned char PROGMEM phoneLowBattery [] = {
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00,
0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 48X48
const unsigned char PROGMEM call [] = {
0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
0xE0, 0x00, 0x03, 0x80, 0x00, 0x07, 0xF0, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0xFC, 0x00, 0x1F, 0xF0,
0x00, 0x00, 0x3E, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x0F, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x07, 0x80,
0x7F, 0xFC, 0x00, 0x00, 0x03, 0xC0, 0xFF, 0xFC, 0x00, 0xF0, 0x01, 0xE0, 0xFF, 0xFC, 0x00, 0xFE,
0x00, 0xF0, 0xFF, 0xFC, 0x00, 0xFF, 0x00, 0x70, 0xFF, 0xFE, 0x00, 0x1F, 0xC0, 0x38, 0xFF, 0xFE,
0x00, 0x03, 0xE0, 0x3C, 0xFF, 0xFE, 0x00, 0x01, 0xF0, 0x1C, 0xFF, 0xFE, 0x00, 0x00, 0xF0, 0x1C,
0x7F, 0xFE, 0x00, 0x00, 0x78, 0x0E, 0x7F, 0xFC, 0x00, 0x00, 0x3C, 0x0E, 0x7F, 0xFC, 0x00, 0xC0,
0x1C, 0x0E, 0x7F, 0xF8, 0x00, 0xF0, 0x1C, 0x07, 0x7F, 0xF0, 0x00, 0xF8, 0x1E, 0x07, 0x3F, 0xF0,
0x00, 0x38, 0x0E, 0x07, 0x3F, 0xF0, 0x00, 0x1C, 0x0E, 0x07, 0x3F, 0xF8, 0x00, 0x1C, 0x0E, 0x07,
0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00,
0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF,
0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00,
0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x01, 0xF0, 0x00, 0x00, 0x7F, 0xFE, 0x07,
0xFF, 0x00, 0x00, 0x3F, 0xFF, 0x8F, 0xFF, 0xC0, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x0F,
0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xF8,
0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xFF,
0xFF, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
0x00, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00
};