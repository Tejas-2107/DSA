struct Node *reverseList(struct Node *head)
{
    // code here
    // return head of reversed list

    struct Node *curr = head;
    struct Node *forward = NULL;
    struct Node *prev = NULL;

    while (curr)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// using recursion

void reverseUtil(Node *curr, Node *prev, Node *&head)
{

    if (!curr->next)
    {
        head = curr;
        curr->next = prev;
        return;
    }

    Node *next = curr->next;
    curr->next = prev;
    reverseUtil(next, curr, head);
}

struct Node *reverseList(struct Node *node)
{
    struct Node *curr = node;
    reverseUtil(curr, NULL, node);
    return node;
}