# push_swap

This project is about sorting data on a stack, with a limited set of instructions, and the smallest number of moves possible. To succeed, I implemented the **Greedy "Turk" Algorithm**, which calculates the most cost-effective move at every step.

---

## Performance Benchmarks
My implementation is optimized for the 42 Common Core evaluation criteria:

| Numbers | Average Moves | 42 Limit (Full Points) | Status |
| :--- | :--- | :--- | :--- |
| **3** | 2 | 3 | ✅ Pass |
| **5** | 9 | 12 | ✅ Pass |
| **100** | ~630 | 700 | ✅ 5/5 |
| **500** | ~5400 | 5500 | ✅ 5/5 |

---

## The Algorithm: Turk Sort
The logic behind this sorter isn't just "push and pray." It's based on **calculation and greed**:

1.  **Push to B**: We push everything from Stack A to Stack B (except for three nodes) while maintaining a descending order in B.
2.  **Cost Analysis**: For every node in A, we calculate how many moves it takes to get to its correct spot in B. 
    * *Moves in A* + *Moves in B* = *Total Cost*.
3.  **Optimization**: The algorithm specifically looks for **combined rotations** (`rr`, `rrr`). If both the node and its target are above their respective medians, we rotate both stacks simultaneously to save moves.
4.  **The Final Push**: Once A has only 3 nodes left, we sort them and then push everything back from B to A, ensuring each node lands in its perfect position.

---

## Installation & Usage

### Build
```bash
make
./push_swap 4 67 3 1 8 // Standard testing
ARG="4 67 3 1 8"; ./push_swap $ARG | ./checker_OS $ARG // Testing with checker
valgrind --leak-check=full --show-leak-kinds=all ./push_swap $ARG // Testing with Valgrind (do it after one of those commands aforementioned!)
```

