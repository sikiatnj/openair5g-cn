#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#include "TLVEncoder.h"
#include "TLVDecoder.h"
#include "GPRSTimer3.h"

int encode_gprs_timer3 ( GPRSTimer3 gprstimer3, uint8_t iei, uint8_t * buffer, uint32_t len  ) 
{
    uint8_t *lenPtr;
    uint32_t encoded = 0;
    int encode_result;
    CHECK_PDU_POINTER_AND_LENGTH_ENCODER (buffer,GPRS_TIMER3_MINIMUM_LENGTH , len);
    

       if( iei >0  )
       {
           *buffer=iei;
               encoded++;
       }



    lenPtr = (buffer + encoded);
    encoded++;



    if ((encode_result = encode_bstring (gprstimer3, buffer + encoded, len - encoded)) < 0)//加密,实体,首地址,长度
        return encode_result;
    else
        encoded += encode_result;

    *lenPtr = encoded - 1 - ((iei > 0) ? 1 : 0);    
    return encoded;
}

int decode_gprs_timer3 ( GPRSTimer3 * gprstimer3, uint8_t iei, uint8_t * buffer, uint32_t len  ) 
{
	int decoded=0;
	uint8_t ielen=0;
	int decode_result;

    if (iei > 0)
    {
        CHECK_IEI_DECODER (iei, *buffer);
        decoded++;
    }


    ielen = *(buffer + decoded);
    decoded++;
    CHECK_LENGTH_DECODER (len - decoded, ielen);


    if((decode_result = decode_bstring (gprstimer3, ielen, buffer + decoded, len - decoded)) < 0)
        return decode_result;
    else
        decoded += decode_result;
            return decoded;
}

