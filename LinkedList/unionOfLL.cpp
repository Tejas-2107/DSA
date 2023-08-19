class Solution
{
public:
    struct Node *makeUnion(struct Node *head1, struct Node *head2)
    {
        // code here
        map<int, int> m;
        while (head1)
        {
            ++m[head1->data];
            head1 = head1->next;
        }
        while (head2)
        {
            ++m[head2->data];
            head2 = head2->next;
        }
        struct Node *ans = new Node(-1);
        head1 = ans;
        for (auto i : m)
        {
            Node *temp = new Node(i.first);
            ans->next = temp;
            ans = temp;
        }
        return head1->next;
    }
};
