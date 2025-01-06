#ifndef HOOKAPI_H
#define HOOKAPI_H

#include <stdint.h>
#include <string.h>

void accept(const uint8_t *message, int line);

void rollback(const uint8_t *message, int line);

uint64_t otxn_amount(void);

void etxn_reserve(uint32_t count);

int emit(uint8_t *emithash, uint8_t *txblob, size_t txblob_size);

uint32_t ledger_seq(void);

uint32_t FLIP_ENDIAN(uint32_t value);

#define SBUF(x) x, sizeof(x)

#endif
