#pragma once

#include_next <mcuconf.h>

#undef RP_SPI_USE_SPI0
#undef RP_SPI_USE_SPI1
#define RP_SPI_USE_SPI0 FALSE
#define RP_SPI_USE_SPI1 TRUE
