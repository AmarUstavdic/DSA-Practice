# Data Structures and Algorithms - Hands-On Learning

Welcome to my central hub for university coursework on Data Structures and Algorithms (DSA). This repository is a place for me to implement data structures and algorithms from scratch, mainly ones that are covered by my university course on Data Structures and Algorithms, fostering a deeper understanding of these fundamental concepts. Just to make things a bit more interesting I took another challange here which is all the code is going to be written in C++, just for the sake of learning that language since it is not covered by any course at the university where I am studing currently.

## Table of Contents
- [Introduction](#introduction)
- [Currently Working On](#currently-working-on)
- [Data Structures](#data-structures)
- [Algorithms](#algorithms)
- [How to Use](#how-to-use)
- [Contributing](#contributing)

## Introduction

In the world of computer science and programming, a solid grasp of data structures and algorithms is essential. This repository serves as a practical resource to supplement my university DSA coursework. By building data structures and implementing algorithms from the ground up, I aim to gain a comprehensive understanding of these foundational concepts.

## Currently Working On
- Binary Search Tree (BST)



## Data Structures

- **Linked Lists:**
    - Unordered List
        - [`insert(int key)`](/MyDSALibrary/UnorderedList/UnorderedList.cpp/#L14)
        - [`find(int key)`](/MyDSALibrary/UnorderedList/UnorderedList.cpp/#L21)
        - [`remove(int key)`](/MyDSALibrary/UnorderedList/UnorderedList.cpp/#L30)
        - `print()`
    - Ordered List
        - `insert(int key)`
        - `find(int key)`
        - `remove(int key)`
        - `print()`
- **Binary Trees:**
    - Binary Search Tree (BST)
        - `insert(int key)`
        - `find(int key)`
        - `remove(int key)` to be implemented
        - `preorder()`
        - `inorder()`
        - `postorder()` to be implemented
        - `height()`

## Algorithms


I will keep this list updated as I progress through my coursework, adding code implementations.

## How to Use

Feel free to explore the code and examples in this repository. Since I am also learning C++ and CMake while making all these implementations, you'll find all the implementations within the "MyDSALibrary" directory. Inside this directory, you'll discover a static library that can be built using CMake and Make.

To build and use the library, follow these steps:

1. **Navigate to the "MyDSALibrary" directory:**

    ```
    cd MyDSALibrary
    ```

2. **Generate the build system using CMake:**

    ```
    cmake .
    ```

3. **Build the static library using Make:**

    ```
    make
    ```

4. **Now you can use the library in your C++ projects. For example, you can include the header files and link against the static library in your CMake project to utilize the data structures and algorithms implemented here.**

Make sure to adapt these steps to your specific development environment and project requirements.

## Contributing

I welcome contributions, suggestions, and corrections from the community. If you find any issues, have ideas for improvements, or want to add your own implementations, please open an issue or submit a pull request. Let's learn and grow together.

Happy coding and exploring the fascinating world of data structures and algorithms! 🚀
