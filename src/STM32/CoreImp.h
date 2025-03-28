#ifndef CORE_IMP_H
#define CORE_IMP_H
#include <Core.h>
#ifdef __cplusplus
#include <CoreIO.h>
#endif
#include <PeripheralPins.h>
#include <pinmap.h>

#ifdef __STM32MP1__ //IWDG not in HAL for some reason
#include "stm32mp157fxx_cm4.h"
typedef struct
{
  uint32_t Prescaler;  /*!< Select the prescaler of the IWDG.
                            This parameter can be a value of @ref IWDG_Prescaler */

  uint32_t Reload;     /*!< Specifies the IWDG down-counter reload value.
                            This parameter must be a number between Min_Data = 0 and Max_Data = 0x0FFF */

} IWDG_InitTypeDef;


/**
 * @brief  IWDG Handle Structure definition
 */
typedef struct
{
    IWDG_TypeDef                 *Instance;  /*!< Register base address    */

    IWDG_InitTypeDef             Init;       /*!< IWDG required parameters */
} IWDG_HandleTypeDef;

#endif
#endif