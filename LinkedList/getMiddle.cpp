int getMiddle(Node *head)
{
    // Your code
    Node *slow = head;
    Node *fast = head;

    while (fast and fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}