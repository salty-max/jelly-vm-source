/**
 * Instruction set for Jelly VM.
 */

#ifndef OpCode_h
#define OpCode_h

/**
 * Stops the program.
 */
#define OP_HALT 0x00

/**
 * Pushes a const onto the stack.
 */
#define OP_CONST 0x01

/**
 * Math instructions.
 */
#define OP_ADD 0x02
#define OP_SUB 0x03
#define OP_MUL 0x04
#define OP_DIV 0x05

#endif