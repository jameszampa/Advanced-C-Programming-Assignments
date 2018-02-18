#include <stdio.h>

typedef struct _TreeNode {
	long int amount;
	int ascii;
	struct _TreeNode* left;
	struct _TreeNode* right;
} TreeNode;

typedef struct _Node {
   struct _Node* next;
   struct _TreeNode* tree;
} Node;

void _output_file_1();
long int _ascii_occurances(char, FILE*);
void _output_file_2();
void _print_node();
void _pq_enqueue();
void _destroy_node();
Node * _pq_dequeue();
void _output_file_3();
void _print_output3();
void _destroy_tree_node();