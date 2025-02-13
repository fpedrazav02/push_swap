<h1 align="center">
	🔀 push_swap
</h1>

<p align="center">
	<b><i>An algorithmic sorting project</i></b><br>
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about-the-project">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-how-to-use-push_swap">How to use push_swap</a>
</h3>

---

## 💡 About the project

> _The goal of this project is to sort a stack of integers using a limited set of operations and achieving the most efficient algorithm possible._

**Key Learning Points:**
- Algorithmic thinking.
- Complexity analysis.
- Optimization strategies.
- Stack manipulation.

## 🛠️ How to use push_swap

### Requirements

To compile and execute `push_swap`, you will need:
- `make`
- `cc` compiler
- Standard C libraries

### Instructions

**1. Compilation**

To compile the project, run:

```sh
make
```

**2. Running the program**

To test the program, execute the following command:

```sh
./bin/push_swap <list_of_integers>
```

The program will output a sequence of instructions that, when executed, sort the given integers in ascending order.

### Example

```sh
$> ./bin/push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
```

This sequence of instructions will correctly sort the integers: `2 1 3 6 5 8`.

### Performance requirements

- For **100 random integers**, the program should perform **fewer than 700 operations**.
- For **500 random integers**, the program should perform **fewer than 5500 operations**.

## ⚙️ Operations Overview

The following operations are available:

| Operation | Description |
|-----------|-------------|
| `sa` | Swap the first two elements of stack A |
| `sb` | Swap the first two elements of stack B |
| `ss` | Swap the first two elements of both stacks |
| `pa` | Push the first element from stack B to stack A |
| `pb` | Push the first element from stack A to stack B |
| `ra` | Rotate stack A upwards (first becomes last) |
| `rb` | Rotate stack B upwards (first becomes last) |
| `rr` | Rotate both stacks upwards |
| `rra` | Reverse rotate stack A (last becomes first) |
| `rrb` | Reverse rotate stack B (last becomes first) |
| `rrr` | Reverse rotate both stacks |

## ⚠️ Error Handling

- Non-integer arguments.
- Integer overflow or underflow.
- Duplicate integers.
- Incorrect operation input.

The program will print `Error` followed by a newline on `stderr` if any of these issues occur.

## 🧠 Algorithmic Approach
//TODO
