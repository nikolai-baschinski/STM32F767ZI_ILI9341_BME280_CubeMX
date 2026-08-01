#ifndef PROCESSIMAGE_H_
#define PROCESSIMAGE_H_

#include "bme.h"

struct ProcessImage {
  struct BME280_for_LCD bme280;
  struct BME280_for_LCD bme280_memory;
};

#endif /* PROCESSIMAGE_H_ */
