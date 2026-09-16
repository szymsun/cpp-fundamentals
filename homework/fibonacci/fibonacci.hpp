#pragma once

// https://pl.wikipedia.org/wiki/Ci%C4%85g_Fibonacciego

int fibonacci_iterative(int sequence) {
    if (sequence == 0) {
        return 0;
    }
    if (sequence == 1) {
        return 1;
    }

    int f0 = 0;
    int f1 = 1; 
    
    int current = 1;
    
    for (std::size_t i = 2; i < sequence + 1; ++i)
    {
        current = f1 + f0;   
        f0 = f1;
        f1 = current;
    }
    return f1; // Fn = F(n-1) + F (n-2)
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 0) {
        return 0;
    }
    if (sequence == 1) {
        return 1;
    }
    else {
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2); 
    }
}
