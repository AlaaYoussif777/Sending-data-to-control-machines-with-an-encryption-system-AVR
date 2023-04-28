/*
 * ExtInterrupt.h
 *
 *  Created on: Sep 10, 2022
 *      Author: HFCS
 */

#ifndef EXTINTERRUPT_H_
#define EXTINTERRUPT_H_

typedef enum {
    EXT_INTERRUPT_INT0,
    EXT_INTERRUPT_INT1,
    EXT_INTERRUPT_INT2
} ExtInterrupt_ChannelType;

void ExtInterrupt_Init(void);
void ExtInterrupt_EnableNotification(ExtInterrupt_ChannelType channel, void (*callback) (void));
void ExtInterrupt_DisableNotification(ExtInterrupt_ChannelType channel);


#endif /* EXTINTERRUPT_H_ */
