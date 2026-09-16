#pragma once

int NWD(int lhs, int rhs) {  // euclidean implementation
    if (lhs < 0) {
        lhs *= -1;
    }
    if (rhs < 0) {
        rhs *= -1;
    }

    if (rhs == lhs) {
        return lhs;
    }

    while (rhs != 0) {
        lhs %= rhs;

        std::swap(lhs, rhs);
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    if (lhs < 0) {
        lhs *= -1;
    }
    if (rhs < 0) {
        rhs *= -1;
    }
    if (rhs == lhs) {
        return lhs;
    }

    // kinda lazy but works
    return lhs * rhs / (NWD(lhs, rhs));
}
