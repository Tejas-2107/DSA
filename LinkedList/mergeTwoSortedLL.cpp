Node *solve(Node *first, Node *second)
{
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }
    Node *currentNode1 = first;
    Node *nextNode1 = currentNode1->next;
    Node *currentNode2 = second;
    Node *nextNode2 = currentNode2->next;
    while (nextNode1 && currentNode2)
    {
        if (currentNode2->data >= currentNode1->data && currentNode2->data <= nextNode1->data)
        {
            currentNode1->next = currentNode2;
            nextNode2 = currentNode2->next;
            currentNode2->next = nextNode1;
            currentNode1 = currentNode2;
            currentNode2 = nextNode2;
        }
        else
        {
            currentNode1 = nextNode1;
            nextNode1 = nextNode1->next;
            if (nextNode1 == NULL)
            {
                currentNode1->next = currentNode2;
                return first;
            }
        }
    }
    return first;
}
Node *sortedMerge(Node *head1, Node *head2)
{
    // code here
    if (head1 == NULL)
        return head2;
    else if (head2 == NULL)
        return head1;
    else if (head1->data <= head2->data)
        return solve(head1, head2);
    else
        return solve(head2, head1);
}