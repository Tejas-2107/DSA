bool detectLoop(Node *head)
{
    // your code here
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

