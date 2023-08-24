int getLength(Node *head)
{
    int len = 0;
    while (head)
    {
        ++len;
        head = head->next;
    }
    return len;
}
int intersectPoint(Node *head1, Node *head2)
{
    // Your Code Here
    int len1 = getLength(head1);
    int len2 = getLength(head2);
    int diff = abs(len1 - len2);
    if (len1 > len2)
    {
        while (diff--)
        {
            head1 = head1->next;
        }
    }
    else
    {
        while (diff--)
        {
            head2 = head2->next;
        }
    }
    while (head1 and head2)
    {
        if (head1 == head2)
            return head1->data;
        head1 = head1->next;
        head2 = head2->next;
    }
    return -1;
}