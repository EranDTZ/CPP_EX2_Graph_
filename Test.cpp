// #include "doctest.h"
// #include "Algorithms.hpp"
// #include "Graph.hpp"

// using namespace std;

// TEST_CASE("Test graph addition")
// {
//     Graph g1;
//     vector<vector<int>> graph = {
//         {0, 1, 0},
//         {1, 0, 1},
//         {0, 1, 0}};
//     g1.loadGraph(graph);
//     Graph g2;
//     vector<vector<int>> weightedGraph = {
//         {0, 1, 1},
//         {1, 0, 2},
//         {1, 2, 0}};
//     g2.loadGraph(weightedGraph);
//     Graph g3 = g1 + g2;
//     vector<vector<int>> expectedGraph = {
//         {0, 2, 1},
//         {2, 0, 3},
//         {1, 3, 0}};
//     CHECK(g3.printGraph() == "[0, 2, 1]\n[2, 0, 3]\n[1, 3, 0]");
// }

// TEST_CASE("Test graph multiplication")
// {
//     Graph g1;
//     vector<vector<int>> graph = {
//         {0, 1, 0},
//         {1, 0, 1},
//         {0, 1, 0}};
//     g1.loadGraph(graph);
//     Graph g2;
//     vector<vector<int>> weightedGraph = {
//         {0, 1, 1},
//         {1, 0, 2},
//         {1, 2, 0}};
//     g2.loadGraph(weightedGraph);
//     Graph g4 = g1 * g2;
//     vector<vector<int>> expectedGraph = {
//         {0, 0, 2},
//         {1, 0, 1},
//         {1, 0, 0}};
//     CHECK(g4.printGraph() == "[0, 0, 2]\n[1, 0, 1]\n[1, 0, 0]");
// }

// TEST_CASE("Invalid operations")
// {
//     Graph g1;
//     vector<vector<int>> graph = {
//         {0, 1, 0},
//         {1, 0, 1},
//         {0, 1, 0}};
//     g1.loadGraph(graph);
//     Graph g2;
//     vector<vector<int>> weightedGraph = {
//         {0, 1, 1, 1},
//         {1, 0, 2, 1},
//         {1, 2, 0, 1}};
//     g2.loadGraph(weightedGraph);
//     Graph g5;
//     vector<vector<int>> graph2 = {
//         {0, 1, 0, 0, 1},
//         {1, 0, 1, 0, 0},
//         {0, 1, 0, 1, 0},
//         {0, 0, 1, 0, 1},
//         {1, 0, 0, 1, 0}};
//     g5.loadGraph(graph2);
//     CHECK_THROWS(g5 * g1);
//     CHECK_THROWS(g1 * g2);

//     // Addition of two graphs with different dimensions
//     Graph g6;
//     vector<vector<int>> graph3 = {
//         {0, 1, 0, 0, 1},
//         {1, 0, 1, 0, 0},
//         {0, 1, 0, 1, 0},
//         {0, 0, 1, 0, 1},
//         {1, 0, 0, 1, 0}};
//     g6.loadGraph(graph3);
//     CHECK_THROWS(g1 + g6);
// }