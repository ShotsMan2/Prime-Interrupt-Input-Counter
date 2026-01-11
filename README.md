# Prime Interrupt Input Counter

This project implements a dynamic input processing utility in C that monitors a user-provided integer stream. It demonstrates **event-driven termination logic** where the stop condition is defined by a mathematical property (Primality) rather than a fixed character.

## ⚙️ Algorithm Logic

The system operates on an infinite loop structure (`for(;;)`), performing the following operations per cycle:

1.  **Input Acquisition:** Captures an integer from the standard input.
2.  **Counter Increment:** Tracks the cumulative number of data entries.
3.  **Real-Time Validation:**
    * The input $n$ is immediately tested for primality.
    * **Logic:** Checks divisibility from $2$ to $n/2$.
4.  **Conditional Interrupt:**
    * **IF Prime:** The loop is broken (`break`), and the session statistics are printed.
    * **IF Composite:** The loop continues, prompting for the next input.

## 🚀 Usage Scenario

This pattern is useful for understanding **Sentinel Values** in data processing, where the sentinel is not a hardcoded constant (like `-1`) but a value satisfying a specific complex condition.

1.  Compile the code:
    ```bash
    gcc main.c -o prime_counter
    ```
2.  Run the executable:
    ```bash
    ./prime_counter
    ```
3.  Enter non-prime numbers to test the loop, then enter a prime number (e.g., 7, 13) to terminate.

---
*This repository showcases flow control and algorithmic validation in C.*
