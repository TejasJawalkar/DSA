#include<stdio.h>
#include<stdlib.h>  // Include stdlib.h for malloc and exit
#include<conio.h>   // conio.h is non-standard and not necessary for basic operations

struct node {
    struct node *right;
    int value;
    struct node *left;
};

struct node *root = NULL;  // Global variable for the root of the binary search tree

// Function declarations
void insert();
void show();
void inorderTraversal(struct node *root);

void insert() {
    int val;
    struct node *newdata;
    
    printf("\nEnter the value to insert: ");
    scanf("%d", &val);
    
    newdata = (struct node *)malloc(sizeof(struct node));
    if (newdata == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newdata->value = val;
    newdata->left = NULL;
    newdata->right = NULL;
    
    if (root == NULL) {
        root = newdata;
    } else {
        struct node *temp = root;
        struct node *parent;
        
        while (temp != NULL) {
            parent = temp;
            if (val < temp->value) {
                temp = temp->left;
            } else {
                temp = temp->right;
            }
        }
        
        if (val < parent->value) {
            parent->left = newdata;
        } else {
            parent->right = newdata;
        }
    }
}

void inorderTraversal(struct node *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->value);
        inorderTraversal(root->right);
    }
}

void show() {
    if (root == NULL) {
        printf("\nTree is empty.\n");
    } else {
        printf("\nIn-order traversal of the tree:\n");
        inorderTraversal(root);
        printf("\n");
    }
}

int main() {
    int ch;
    
    do {
        printf("\nSelect Operation\n1. Insert\t2. Show\t3. Exit\n");
        scanf("%d", &ch);
        
        switch (ch) {
            case 1:
                insert();
                break;
            case 2:
                show();
                break;
            case 3:
                exit(0);
            default:
                printf("\nWrong Choice...\n");
        }
    } while (ch != 3);

    return 0;
}
