#ifndef HEADEREX2_H_
#define HEADEREX2_H_
void set_FLASH_BIUCR(unsigned short *FLASH_BIUCR,unsigned char APC,unsigned char WWSC,unsigned char RWSC,unsigned char DPFEN,unsigned char IPFEN,unsigned char PFLIM,unsigned char BFEN);
void afisare_FLASH_BIUCR(unsigned short *FLASH_BIUCR);
void set_PFLIM(unsigned short *FLASH_BIUCR,unsigned char PFLIM);
void set_IPFEN(unsigned short *FLASH_BIUCR,unsigned char IPFEN);
void set_DPFEN(unsigned short *FLASH_BIUCR,unsigned char DPFEN);
void set_RWSC(unsigned short *FLASH_BIUCR,unsigned char RWSC);
void set_WWSC(unsigned short *FLASH_BIUCR,unsigned char WWSC);
void set_APC(unsigned short *FLASH_BIUCR,unsigned char APC);
#endif 