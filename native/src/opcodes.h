#ifndef _OPCODES_H_
#define _OPCODES_H_

// Opcode masks
#define OPCODE_MASK_TO_SECOND 0xF0

// Arithmetic opcodes
#define OPCODE_MATRIX_IDENTITY 0x01
#define OPCODE_MATRIX_MUL_MATRIX 0x02
#define OPCODE_MATRIX_TRANSPOSE 0x03
#define OPCODE_ROTATEX 0x04
#define OPCODE_ROTATEY 0x05
#define OPCODE_ROTATEZ 0x06
#define OPCODE_MATRIX_TRANSLATE 0x07
#define OPCODE_MATRIX_SCALE 0x08
#define OPCODE_MATRIX_INVERT 0x09
#define OPCODE_MATRIX_TRANSFORM_VECTOR 0x0A
#define OPCODE_MATRIX_ROTATE_QUATERNION = 0x0B
#define OPCODE_MATRIX_TRANSLATION_ROTATE_SCALE 0x0C
#define OPCODE_VECTOR_NEGATE 0x0D

// Memory management opcodes
#define OPCODE_STORE_FIRST 0xC0
#define OPCODE_STORE_SECOND 0xC1
#define OPCODE_LOAD_FIRST 0xC2
#define OPCODE_LOAD_SECOND 0xC3
#define OPCODE_EXCHANGE 0xC4
#define OPCODE_COPY_FIRST_FROM_SECOND 0xC5

#endif