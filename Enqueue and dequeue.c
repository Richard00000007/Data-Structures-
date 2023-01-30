    size++;

    
    queue[rear] = data;

    
    return 1;
}



int dequeue()
{
    int data = INT_MIN;

    
    if (isEmpty())
    {
        return INT_MIN;
    }

    
    data = queue[front];


    front = (front + 1) % CAPACITY;

    size--;

    return data;
}


int isFull()
{
    return (size == CAPACITY);
}



int isEmpty()
{
    return (size == 0);
}


int getFront()
{
    return (isEmpty())
            ? INT_MIN
            : queue[front];
}
int getRear()
{
    return (isEmpty())
            ? INT_MIN
            : queue[rear];
}
