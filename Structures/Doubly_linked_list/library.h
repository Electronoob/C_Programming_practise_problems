struct student {
    struct student *previous, *next;             //to store the previous node address
    char register_number[10];
    char area_of_interest[10];
                   //to store the next node address
};

void doubly_linked_list_creation(struct student **head, struct student **tail);
void insert_new_entry(struct student **start_addr);
int delete_given_entry(struct student **star_addr);
void display_entries(struct student *start_addr, struct student *tail);



