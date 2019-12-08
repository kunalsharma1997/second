#include<stdio.h>
struct Box
{
  int length;
  int breadth;
  int height;
};

int main() {
  struct Box b1 = { 10, 12, 5 };
  struct Box* ptr;
  ptr=&b1;
  ++ptr->height;
  int volume = ptr->length * ptr->breadth * ptr->height;
  print("%d,%d,%d\n",ptr->length, ptr->breadth, ptr->height);
  printf("%d\n",volume);
  return 0;
}
