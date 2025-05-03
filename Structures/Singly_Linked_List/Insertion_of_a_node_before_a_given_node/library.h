struct student {
    char register_number[10];
    char area_of_interest[15];
    struct student *next;

};

void singly_linked_list_creation(struct student **head, struct student **temp, struct student *new_node, char *register_number_input, char *area_of_interest);
void display_details(struct student *head); //new_update
void insertion_of_node(struct student *head);

