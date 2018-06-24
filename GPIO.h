/*
 * GPIO.h
 *
 * This library is destined to manipule the GPIO ports on Tiva C-Series TM4C123G
 *
 *  Created on: 29 de abr de 2018
 *      Author: igorgcustodio
 */

#ifndef GPIO_H_
#define GPIO_H_

#define PORT_A 0b00000001
#define PORT_B 0b00000010
#define PORT_C 0b00000100
#define PORT_D 0b00001000
#define PORT_E 0b00010000
#define PORT_F 0b00100000

#define P0 0b00000001
#define P1 0b00000010
#define P2 0b00000100
#define P3 0b00001000
#define P4 0b00010000
#define P5 0b00100000
#define P6 0b01000000
#define P7 0b10000000

#define USR_SW_1    P4 // PORTF
#define USR_SW_2    P0 // PORTF
#define LED_RED     P1 // PORTF
#define LED_BLUE    P2 // PORTF
#define LED_GREEN	P3 // PORTF

#define INPUT   0
#define OUTPUT  1

#define HIGH    1
#define LOW     0

#define TRUE    1
#define FALSE   0

void interruptPortA(void);
void interruptPortB(void);
void interruptPortC(void);
void interruptPortD(void);
void interruptPortE(void);
void interruptPortF(void);


/**
 * Enables or disables the port
 */
void enablePort(uint32_t port);

/**
 * Setup the pin
 *
 * @param port      the port to be set
 * @param pin       the pin in the port to be set
 * @param direction the pin direction
 *
 */
void setPin(uint32_t port, uint32_t pin, int direction);

/**
 * Read the pin value
 *
 * @param port  the port
 * @param pin   the pin in the port
 *
 */
int readPin(uint32_t port, uint32_t pin);

/**
 * Write a digital value to pin
 *
 * @param port	the port
 * @param pin	the pin of the port
 * @param value	the digital value
 *
 */
void writePin(uint32_t port, uint32_t pin, int value);

/**
 * Setup the pin
 *
 * @param port  the port
 * @param pin   the pin in the port
 *
 */
int readPinDirection(uint32_t port, uint32_t pin);


/**
 * Enables the interruption on your uC
 *
 */
void enableInterruption(uint32_t port, uint32_t pin, int state, int sensibility, int event, int bothBorder);

#endif /* GPIO_H_ */
