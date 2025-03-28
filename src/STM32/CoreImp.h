#ifndef CORE_IMP_H
#define CORE_IMP_H
#include <Core.h>
#ifdef __cplusplus
#include <CoreIO.h>
#endif
#include <PeripheralPins.h>
#include <pinmap.h>

#ifdef __STM32MP__ //IWDG not in HAL for some reason
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