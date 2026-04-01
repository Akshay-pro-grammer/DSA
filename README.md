# Data Structures and Algorithms

This repository is a personal collection of Data Structures and Algorithms (DSA) implementations in Python, Java, and C++. It serves as a practical reference and a log of my learning journey.

## File Organization

To make navigation easier, the files follow a specific naming convention:

-   **Python:** Files start with a number (e.g., `1stack.py`).
-   **Java:** Files start with an uppercase letter (e.g., `BinarySearch.java`).
-   **C++:** Files start with a lowercase letter (e.g., `dijkstraAlgo.cpp`).

## Algorithms and Data Structures

This repository contains implementations for the following topics:

### Java

-   `BinarySearch.java`: Standard binary search.
-   `ComparatorForSorting.java`: Custom comparators for sorting using lambda expressions.
-   `CountingSort.java`: Counting sort algorithm.
-   `DisjointSet.java`: Disjoint Set Union (DSU) by rank.
-   `LineSweepAlgorithm.java`: Line sweep algorithm for interval problems.
-   `MergeSort.java`: Merge sort algorithm.
-   `MonotonicDecreasingStack.java`: Monotonic decreasing stack.
-   `MonotonicIncreasingStack.java`: Monotonic increasing stack.
-   `Multiset.java`: A custom multiset implementation using a HashMap.
-   `Multisource-BFS.java`: Breadth-First Search from multiple source nodes.
-   `SieveofEratosthenes.java`: Sieve of Eratosthenes for finding prime numbers.
-   `Trie-Implentation.java`: Trie data structure.

### C++

-   `bellmanford.cpp`: Bellman-Ford algorithm for single-source shortest paths with negative weights.
-   `dijkstraAlgo.cpp`: Dijkstra's algorithm for single-source shortest paths.
-   `dijkstraExample.cpp` / `dijkstra_grid.cpp`: Examples of Dijkstra's algorithm on grids.
-   `dsu_by_size.cpp`: Disjoint Set Union optimized by size.
-   `dsu_cycle detection.cpp`: Cycle detection in undirected graphs using DSU.
-   `euler_path_construct_Hierholzer_Algo.cpp`: Eulerian path construction using Hierholzer's Algorithm.
-   `eulerpath_eulercircuit.cpp`: Detection of Eulerian paths and circuits.
-   `fenwik_tree.cpp`: Fenwick Tree (Binary Indexed Tree).
-   `fermat_little_theorem_with_nCr.cpp`: Calculating nCr modulo a prime using Fermat's Little Theorem.
-   `floydwarshal_shortestPath.cpp`: Floyd-Warshall algorithm for all-pairs shortest paths.
-   `hashing_example.cpp`: Custom hashing for `std::pair`.
-   `kahns_Algo_toposort.cpp`: Kahn's algorithm for topological sorting.
-   `kahns_algo_cycle_detection.cpp`: Cycle detection in directed graphs using Kahn's algorithm.
-   `kruskal_example.cpp`: Kruskal's algorithm for Minimum Spanning Tree (MST).
-   `mooreVotingAlgo.cpp`: Moore's Voting Algorithm to find the majority element.
-   `nse_nge_pse_pge.cpp`: Algorithms for Next/Previous Smaller/Greater Element.
-   `prims_using_minheap.cpp`: Prim's algorithm for Minimum Spanning Tree (MST) using a min-heap.
-   `split_function.cpp`: Utility functions to split strings.
-   `strongly_connected_component_kosaraju_algo.cpp`: Kosaraju's algorithm to find Strongly Connected Components (SCCs).
-   `topologicalSortDfs.cpp`: DFS-based topological sort.
-   `trie.cpp`: Trie data structure.

### Python

-   `1stack.py`: Basic stack implementation.

## Good Practices & Extras

This repository also includes practical advice for writing better code.

-   `Good_practices_Extras/Avoid_tuple.cpp`: Demonstrates why using a `struct` is often more readable and maintainable than `std::tuple` for handling complex, related data in C++.
