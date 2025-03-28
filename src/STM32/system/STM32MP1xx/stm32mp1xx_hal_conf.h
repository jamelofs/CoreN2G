#ifndef __STM32MP1xx_HAL_CONF_DEFAULT__H
#define __STM32MP1xx_HAL_CONF_DEFAULT_H

#include "variant.h"
/* STM32L4xx specific HAL configuration options. */
#if __has_include("hal_conf_custom.h")
#include "hal_conf_custom.h"
#else
#if __has_include("hal_conf_extra.h")
#include "hal_conf_extra.h"
#endif
#include "stm32mp1xx_hal_conf_default.h"
#endif

#endif /* __STM32L4xx_HAL_CONF_H */
