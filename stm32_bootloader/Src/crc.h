/*
 * crc.h
 *
 *  Created on: 2019��11��6��
 *      Author: taiqiang.cao
 */

#ifndef CRC_H_
#define CRC_H_

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus  */

uint32_t crc32(const char* s, int len);

#ifdef __cplusplus
}
#endif /* __cplusplus  */

#endif /* CRC_H_ */
