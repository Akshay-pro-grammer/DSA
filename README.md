# Data Structures and Algorithms

This repository is a personal collection of Data Structures and Algorithms (DSA) implementations in Python, Java, and C++. It serves as a practical reference and a log of my learning journey.

## File Organization

To make navigation easier, files are organized into subfolders by topic:

-   [`advanced-data-structures/`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/advanced-data-structures): Advanced data structures like Segment Tree, Fenwick Tree, and Policy Based Data Structures.
-   [`algorithms/`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/algorithms): Miscellaneous algorithmic patterns (e.g., Line Sweep, Moore's Voting).
-   [`good-practices-extras/`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/good-practices-extras): Code quality examples, optimizations, and utility functions.
-   [`graphs/`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs): Graph algorithms (Shortest Paths, MST, DSU, Topological Sort, SCC, Euler Paths).
-   [`math/`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/math): Mathematical algorithms (Sieve of Eratosthenes, Modulo Arithmetic, nCr).
-   [`searching/`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/searching): Searching algorithms (Binary Search).
-   [`sorting/`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/sorting): Sorting algorithms (Bubble, Insertion, Selection, Merge, Counting Sort).
-   [`stack/`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/stack): Stack implementations and Monotonic Stack queries.
-   [`trie/`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/trie): Trie data structure and applications.

Within these folders, the files follow a language-specific naming convention:
-   **Python:** Files start with a number (e.g., `1stack.py`).
-   **Java:** Files start with an uppercase letter (e.g., `BinarySearch.java`).
-   **C++:** Files start with a lowercase letter (e.g., `dijkstraAlgo.cpp`).

## Algorithms and Data Structures

This repository contains implementations for the following topics:

### Advanced Data Structures
-   [`fenwick_tree.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/advanced-data-structures/fenwick_tree.cpp): Fenwick Tree (Binary Indexed Tree).
-   [`pbds_cpp_orderedset_example_codeforces1915F.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/advanced-data-structures/pbds_cpp_orderedset_example_codeforces1915F.cpp): Policy-Based Data Structure (ordered set) example.
-   [`Multiset.java`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/advanced-data-structures/Multiset.java): A custom multiset implementation using a HashMap.
-   [`segment-tree/`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/advanced-data-structures/segment-tree):
    -   [`RangeSumQueryMutable.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/advanced-data-structures/segment-tree/RangeSumQueryMutable.cpp)
    -   [`buildTree.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/advanced-data-structures/segment-tree/buildTree.cpp)
    -   [`queryTree.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/advanced-data-structures/segment-tree/queryTree.cpp)
    -   [`updateTree.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/advanced-data-structures/segment-tree/updateTree.cpp)

### Algorithms (Miscellaneous)
-   [`LineSweepAlgorithm.java`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/algorithms/LineSweepAlgorithm.java): Line sweep algorithm for interval problems.
-   [`mooreVotingAlgo.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/algorithms/mooreVotingAlgo.cpp): Moore's Voting Algorithm to find the majority element.

### Good Practices & Extras
-   [`Avoid_tuple.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/good-practices-extras/Avoid_tuple.cpp): Demonstrates why using a `struct` is often more readable and maintainable than `std::tuple` in C++.
-   [`hashing_example.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/good-practices-extras/hashing_example.cpp): Custom hashing for `std::pair`.
-   [`split_function.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/good-practices-extras/split_function.cpp): Utility functions to split strings.
-   [`string_view_optimal.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/good-practices-extras/string_view_optimal.cpp): Demonstration of optimal string operations using `std::string_view`.

### Graphs
-   [`bellmanford.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/bellmanford.cpp): Bellman-Ford algorithm for single-source shortest paths.
-   [`dijkstraAlgo.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/dijkstraAlgo.cpp): Dijkstra's algorithm for single-source shortest paths.
-   [`dijkstraExample.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/dijkstraExample.cpp) / [`dijkstra_grid.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/dijkstra_grid.cpp): Grid-based shortest path search.
-   [`DisjointSet.java`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/DisjointSet.java) / [`dsu_by_size.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/dsu_by_size.cpp): Disjoint Set Union (DSU) implementations by rank and size.
-   [`dsu_cycle_detection.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/dsu_cycle_detection.cpp): Undirected graph cycle detection using DSU.
-   [`euler_path_construct_Hierholzer_Algo.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/euler_path_construct_Hierholzer_Algo.cpp): Hierholzer's Algorithm for Eulerian path construction.
-   [`eulerpath_eulercircuit.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/eulerpath_eulercircuit.cpp): Detection of Eulerian paths/circuits.
-   [`floydwarshal_shortestPath.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/floydwarshal_shortestPath.cpp): Floyd-Warshall algorithm for all-pairs shortest paths.
-   [`kahns_Algo_toposort.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/kahns_Algo_toposort.cpp): Kahn's algorithm for topological sorting.
-   [`kahns_algo_cycle_detection.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/kahns_algo_cycle_detection.cpp): Cycle detection in directed graphs using Kahn's algorithm.
-   [`kruskal_example.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/kruskal_example.cpp): Kruskal's Minimum Spanning Tree (MST) algorithm.
-   [`Multisource-BFS.java`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/Multisource-BFS.java): Breadth-First Search from multiple source nodes.
-   [`prims_using_minheap.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/prims_using_minheap.cpp): Prim's Minimum Spanning Tree (MST) algorithm.
-   [`strongly_connected_component_kosaraju_algo.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/strongly_connected_component_kosaraju_algo.cpp): Kosaraju's algorithm for finding SCCs.
-   [`topologicalSortDfs.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/graphs/topologicalSortDfs.cpp): DFS-based topological sort.

### Math
-   [`SieveofEratosthenes.java`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/math/SieveofEratosthenes.java): Sieve of Eratosthenes to find primes.
-   [`fermat_little_theorem_with_nCr.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/math/fermat_little_theorem_with_nCr.cpp): Modular combinations (nCr) via Fermat's Little Theorem.
-   [`ncr.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/math/ncr.cpp): nCr calculation functions.
-   [`powerUsingBinaryExponentiation.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/math/powerUsingBinaryExponentiation.cpp): Binary exponentiation implementation.

### Searching
-   [`BinarySearch.java`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/searching/BinarySearch.java): Standard binary search.

### Sorting
-   [`bubblesort.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/sorting/bubblesort.cpp): Bubble sort.
-   [`insertionsort.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/sorting/insertionsort.cpp): Insertion sort.
-   [`selectionsort.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/sorting/selectionsort.cpp): Selection sort.
-   [`CountingSort.java`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/sorting/CountingSort.java): Counting sort.
-   [`MergeSort.java`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/sorting/MergeSort.java): Merge sort.
-   [`ComparatorForSorting.java`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/sorting/ComparatorForSorting.java): Custom comparators for sorting in Java.

### Stack
-   [`1stack.py`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/stack/1stack.py): Basic stack implementation.
-   [`MonotonicDecreasingStack.java`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/stack/MonotonicDecreasingStack.java): Monotonic decreasing stack.
-   [`MonotonicIncreasingStack.java`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/stack/MonotonicIncreasingStack.java): Monotonic increasing stack.
-   [`nse_nge_pse_pge.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/stack/nse_nge_pse_pge.cpp): Next/Previous Smaller/Greater Element queries.

### Trie
-   [`Trie-Implementation.java`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/trie/Trie-Implementation.java): Java Trie implementation.
-   [`trie.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/trie/trie.cpp): C++ Trie implementation.
-   [`trie_in_numbers.cpp`](file:///c:/Users/hp/Desktop/coding/dsa/DSA/trie/trie_in_numbers.cpp): Trie implementations optimized for number prefixes (binary trie).
