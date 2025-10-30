#pragma once

/**
 * @file bitboard.h
 * @brief Contains helper functions for bitboard manipulation.
 *
 * Centralizing these highly-optimized, low-level functions makes them reusable
 * across your move generator, evaluation, and other modules.
 */

#include <cstdint>
#include "types.h"

using Bitboard = uint64_t;

namespace Bitboards {
    // Function to set a bit on a bitboard
    inline void set_bit(Bitboard& bb, Square s) {
        bb |= (1ULL << s);
    }

    // Add other common helpers:
    // - pop_bit(Bitboard& bb)
    // - get_lsb_index(Bitboard bb)
    // - count_bits(Bitboard bb)
    // - print_bitboard(Bitboard bb)
}