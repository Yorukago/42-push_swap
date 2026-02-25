*This project has been created as part of the 42 curriculum by jzorreta*

# push_swap

## Description
push_swap is a sorting project that challenges the student to sort a random set of ints using 2 stacks and a restricted set of operations:

### push moves
pa (push a) - takes the first element of b and puts it on a
pb (push b) - takes the first element of a and puts it on b

### swap moves
sa (swap a) - swaps the first 2 elements at the top of stack a
sb (swap b) - swaps the first 2 elements at the top of stack b
ss (swap a/b) - does both at the same time

### rotate moves
ra (rotate a) - shifts all elements by 1 on stack a (first element becomes the last one)
rb (rotate b) - shifts all elements by 1 on stack b (first element becomes the last one)
rr (rotate a/b) - does both at the same time

### reverse rotate moves
rra (rev rotate a) - shifts all elements by 1 on stack a (last element becomes the first one)
rrb (rev rotate b) - shifts all elements by 1 on stack b (last element becomes the first one)
rrr (rev rotate both) - does both at the same time

The main objective is to calculate and execute a minimal instruction sequence, and usures the process is optimized for both move count and algorithmic complexity
Each instruction is printed directly on stdout as "pa, pb, sa, sb, ss, ra, rb, rr, rra, rrb, rrr" for the checker to analyze.

Rather than implementing other algorithms, I decided to use the "Greedy Cost-Analysis Algorithm", also known as Turk Sort!


## The strategy
Let's suppose we have these numbers to sort: ```[10, 2, 45, 1, 6, 9]```

1 - The initial push (A → B)
No matter how many numbers it has on the stack (after 5 numbers), every number gets pushed to stack B and only the remaining 3 gets to stay on stack A, and then gets sorted with a hardocded sort_3

2 - Finding the target nodes + costs
Once stack A gets sorted, it starts looking for the "smallest bigger" number, it holds the number from stack B, and looks for a number on stack A that's bigger than itself, but not the biggest in stack A. Afterwards, the greedy part of the algorithm starts kicking in, so in very simple terms, 1 move = 1 cost point... So to push things back to stack A we need to calculate how many moves we need to do to put the number on top of stack B, and then also pushing it and sorting it on stack A, so the actual math (simplified) is Total Cost = Moves for B + Moves for A

3 - Calculating the nodes
This goes in tandem with Step 2, so this also checks whether the node is above or below the median line to find the cheapest path to go, to find whether the node is above or below the median line, the math is as follows ``ìndex <= nº of nodes / 2``, if the value ends up being bigger, then the node is above the median line, else...its at the bottom median, also this has to do with how turk makes its moves, if the nodes are above median, it does rotate moves, if its at the bottom, it does reverse rotate moves

4 - Rinse and repeat...
This algorithm is...relatively simple at how it does its thing, it just stops when its sorted (obviously)


## Instructions
This project is pretty simple to run, execute and test around, here are the steps!

Run make!

```make```

And then you can test it with various flavors...

```./push_swap 4 67 3 1 8 // Standard testing```

```ARG="4 67 3 1 8"; ./push_swap $ARG | ./checker_OS $ARG // Testing with checker```

```valgrind --leak-check=full --show-leak-kinds=all ./push_swap $ARG // Testing with Valgrind (do it after one of those commands aforementioned!)```

Checker_OS is provided by 42... So its easier to test!

## Resources 
This project, in my opinion was pretty complex, it also didnt help that I did the entire project 2 months ago and I didnt evaluate it right away...But I used a plethora of resources such as:
- Wikipedia about stacks https://en.wikipedia.org/wiki/Stack_(abstract_data_type)
- Friends with already some knowledge of stacks in other languages 

While choosing an algorithm, one of my colleagues said to try out turk sort, so I followed this documentation and repositories:
- https://pure-forest.medium.com/push-swap-turk-algorithm-explained-in-6-steps-4c6650a458c0
- https://github.com/alx-sch/push_swap
- https://github.com/cole-k/turksort?tab=readme-ov-file (more specifically, the pdf)

I used AI in this project, more specifically, to dumb down some things for my dumb brain to understand, more specifically, the part of the target nodes. And AI was also used to aid in compilation errors that were...at best very dumb, and at worst the AI would be disappointed in me.
