Node *reverseDLL(Node *head)
{
    // Your code here
    Node *forward = NULL;
    Node *curr = head;
    Node *prev = NULL;

    while (curr->next)
    {

        forward = curr->next;
        curr->next = curr->prev;
        curr->prev = forward;
        curr = forward;
    }
    curr->next = curr->prev;
    curr->prev = NULL;
    return curr;
}