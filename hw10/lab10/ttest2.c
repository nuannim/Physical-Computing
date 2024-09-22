// #include <stdio.h>

// struct Product {
//     char name[50];
//     double price;
//     int quantity;
// };

// int main() {
//     struct Product juice = {"Orange Juice", 2.49, 5};
//     struct Product *ptr_product = &juice;

//     struct Product *new_product = (struct Product*) malloc(sizeof(struct Product));

//     strcpy(new_product->name, "Bread");
//     new_product->price = 2.50;
//     new_product->quantity = 1;

//     // ... use the 'new_product'

//     free(new_product); // Remember to free the allocated memory
// }


// #include <stdio.h>
// #include <string.h>

// struct Point {
//   int x;
//   int y;
// };

// void move_point(struct Point *p, int dx, int dy) {
//   p->x += dx;
//   p->y += dy;
// }

// int main() {
//   struct Point p1 = {10, 20};
//   move_point(&p1, 5, -3); // Pass the address of 'p1'

//   printf("Point: (%d, %d)\n", p1.x, p1.y); 
//   return 0;
// }


#include <stdio.h>
#include <stdlib.h> // For malloc and free

struct Node {
  int data;
  struct Node *next;
};

int main() {
  struct Node *new_node01 = (struct Node*)malloc(sizeof(struct Node));
  new_node01->data = 10;
  new_node01->next = NULL;

  struct Node *new_node02 = (struct Node*)malloc(sizeof(struct Node));
  new_node02->data = 20;
  new_node02->next = NULL;
  new_node01->next = new_node02;

  struct Node *new_node03 = (struct Node*)malloc(sizeof(struct Node));
  new_node03->data = 30;
  new_node03->next = NULL;
  new_node02->next = new_node03;

  printf("new_node01 = %d\n\n", *new_node01);

  struct Node *p_new = new_node01;
  while (p_new != NULL) {
        printf("%d ", p_new->data);
        p_new = p_new->next;
  }
  printf("\n");
  // Free the list
  p_new = new_node01;
  struct Node *next_node;

  while (p_new != NULL) {
        next_node = p_new->next; // Save the next node
        free(p_new); // Free the current node
        p_new = next_node; // Move to the next node
  }
  return 0;
}