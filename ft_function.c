int         count_nb(int nb)
{
    int count;

    count = 0;
    while ((nb / 10) > 0)
    {
        nb = nb / 10;
        count++;
    }
    return (nb);
}
