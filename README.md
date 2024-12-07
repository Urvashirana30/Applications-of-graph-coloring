# Applications-of-graph-coloring
Project Description:

This project implements a Graph Coloring Algorithm in C to assign colors (or resources) to the vertices of a graph such that no two adjacent vertices share the same color. The graph coloring problem is widely applicable in fields such as scheduling, resource allocation, and network optimization.

The program takes the following inputs from the user:

Number of vertices (nodes in the graph).
Number of edges (connections between the vertices).
Graph edges (pairs of connected vertices).
Number of colors (representing time slots, resources, etc.).

Key Features:
Graph Representation: The graph is represented using an adjacency matrix, where 1 denotes an edge between two vertices and 0 denotes no edge.
Color Assignment: The program uses a greedy approach to assign colors to vertices, ensuring no two adjacent vertices have the same color.
Coloring Output: The program prints the colors assigned to each vertex in a tabular format, showing the vertex index and the corresponding color.

Approach:
Greedy Coloring Algorithm:
Initially, no colors are assigned to any vertices.
The first vertex is assigned color 0.
For each subsequent vertex, it checks which colors are already used by adjacent vertices and assigns the first available color.
Adjacency Checking: The adjacency matrix is used to check which vertices are adjacent to each other, helping to identify the colors that cannot be used by the current vertex.

Applications:
Scheduling Problems: Assigning time slots to tasks or exams so that no two conflicting tasks share the same time slot.
Register Allocation: In compilers, ensuring that no two variables that are live at the same time share the same register.
Frequency Assignment: Ensuring that adjacent mobile towers or communication systems don’t use the same frequency.

Usage:
Clone or download the project to your local machine.
Compile the code using a C compiler (e.g., gcc graph_coloring.c -o graph_coloring).
Run the program and provide the required inputs:
Number of vertices.
Number of edges.
List of edges.
Number of colors/resources/time slots.
The program will output the color assigned to each vertex.
