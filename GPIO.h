/*
 * GPIO.h
 *
 * This library is destined to manipule the GPIO ports on Tiva C-Series TM4C123G
 *
 *  Created on: 29 de abr de 2018
 *      Author: Igor G. Custodio
 */

#ifndef GPIO_H_
#define GPIO_H_

#define PORT_A 0b00000001
#define PORT_B 0b00000010
#define PORT_C 0b00000100
#define PORT_D 0b00001000
#define PORT_E 0b00010000
#define PORT_F 0b00100000

#define PA0 0b00000001
#define PA1 0b00000010
#define PA2 0b00000100
#define PA3 0b00001000
#define PA4 0b00010000
#define PA5 0b00100000
#define PA6 0b01000000
#define PA7 0b10000000

#define PB0 0b00000001
#define PB1 0b00000010
#define PB2 0b00000100
#define PB3 0b00001000
#define PB4 0b00010000
#define PB5 0b00100000
#define PB6 0b01000000
#define PB7 0b10000000

#define PC0 0b00000001
#define PC1 0b00000010
#define PC2 0b00000100
#define PC3 0b00001000
#define PC4 0b00010000
#define PC5 0b00100000
#define PC6 0b01000000
#define PC7 0b10000000

#define PD0 0b00000001
#define PD1 0b00000010
#define PD2 0b00000100
#define PD3 0b00001000
#define PD4 0b00010000
#define PD5 0b00100000
#define PD6 0b01000000
#define PD7 0b10000000

#define PE0 0b00000001
#define PE1 0b00000010
#define PE2 0b00000100
#define PE3 0b00001000
#define PE4 0b00010000
#define PE5 0b00100000

#define PF0 0b00000001
#define PF1 0b00000010
#define PF2 0b00000100
#define PF3 0b00001000
#define PF4 0b00010000

#define USR_SW_1    PF4
#define USR_SW_2    PF0
#define LED_RED     PF1
#define LED_BLUE    PF2
#define LED_GREEN	PF3

#define INPUT   0
#define OUTPUT  1

#define HIGH    1
#define LOW     0

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

#endif /* GPIO_H_ */
