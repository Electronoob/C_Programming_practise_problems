struct student {
    char register_number[10];
    char area_of_interest[15];
    struct student *next;

};

void singly_linked_list_creation(struct student **head, struct student **temp, char *register_number_input, char *area_of_interest, uint8_t *index);
void display_details(struct student *temp, struct student *head);


