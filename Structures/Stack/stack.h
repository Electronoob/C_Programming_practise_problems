
struct student {
  char name[10];
  char area_of_interest[15];
  struct student *next;

};

void push(char *, char *, struct student **);
void pop(struct student **);
void display(struct student **);

