#pragma once

/**
 * @file types.h
 * @brief Contains fundamental type definitions for chess logic.
 *
 * Defining core types like Square, Color, Piece, and Move here helps
 * prevent circular dependencies between other headers like board.h and move.h.
 */

#include <cstdint>

// Example type definitions. Adapt as needed for your engine.
using Square = int8_t;
using Color = int8_t;
using PieceType = int8_t;
using Piece = int8_t;
using Move = uint16_t;

enum : Square {
    A1, B1, C1, D1, E1, F1, G1, H1,
    A2, B2, C2, D2, E2, F2, G2, H2,
    // ... and so on for all 64 squares
    NO_SQUARE = 64
};

enum : Color {
    WHITE, BLACK, NO_COLOR
};

// ... add more core definitions here