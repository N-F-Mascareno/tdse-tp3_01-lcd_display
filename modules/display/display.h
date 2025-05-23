//=====[#include guards - begin]===============================================
#include <stdint.h>
#ifndef _DISPLAY_H_
#define _DISPLAY_H_

//=====[Declaration of public defines]=========================================
#define SYSTEM_TIME_INCREMENT_MS   10
//=====[Declaration of public data types]======================================

typedef enum {
     DISPLAY_CONNECTION_GPIO_4BITS,
     DISPLAY_CONNECTION_GPIO_8BITS,
} displayConnection_t;

typedef struct {
   displayConnection_t connection;                                                 
} display_t;

//=====[Declarations (prototypes) of public functions]=========================

void displayInit( displayConnection_t connection );
 
void displayCharPositionWrite( uint8_t charPositionX, uint8_t charPositionY );

void displayStringWrite( const char * str );

//=====[#include guards - end]=================================================

#endif // _DISPLAY_H_