#pragma once

int NWD(int lhs, int rhs) {
    // euclidean implementation
    int i = 2;
    while (rhs != 0) {
        if (lhs > rhs) {
            lhs %= rhs;
            std::swap(lhs, rhs);
        } else {
            rhs %= lhs;
            std::swap(lhs, rhs);
        }
    }
    return lhs;
}

int NWW(int lhs, int rhs) {  // kinda lazy but works
    return lhs * rhs / (NWD(lhs, rhs));
}
