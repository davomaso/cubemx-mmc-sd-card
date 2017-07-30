/*
 *  File: spi_io.c
 *  Author: Hammond Pearce
 *  Year: 2017
 *  e-mail: 
 *  
 */

#include "spi_io.h"

/**
    \brief Initialize SPI hardware
 */
void SPI_Init (void);

/**
    \brief Read/Write a single byte.
    \param d Byte to send.
    \return Byte that arrived.
 */
BYTE SPI_RW (BYTE d);

/**
    \brief Flush of SPI buffer.
 */
void SPI_Release (void);

/**
    \brief Selecting function in SPI terms, associated with SPI module.
 */
void SPI_CS_Low (void);

/**
    \brief Deselecting function in SPI terms, associated with SPI module.
 */
void SPI_CS_High (void);

/**
    \brief Setting frequency of SPI's clock to maximun possible.
 */
void SPI_Freq_High (void);

/**
    \brief Setting frequency of SPI's clock equal or lower than 400kHz.
 */
void SPI_Freq_Low (void);

/**
    \brief Start a non-blocking timer.
    \param ms Milliseconds.
 */
void SPI_Timer_On (WORD ms);

/**
    \brief Check the status of non-blocking timer.
    \return Status, TRUE if timeout is not reach yet.
 */
BOOL SPI_Timer_Status (void);

/**
    \brief Stop of non-blocking timer. Mandatory.
 */
void SPI_Timer_Off (void);