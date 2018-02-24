struct Fraction
{
    int up, down;
};

int gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}

Fraction reduction(Fraction result)
{
    if(result.down < 0)
    {
        result.up = -result.up;
        result.down = -result.down;
    }
    if(result.up == 0)
    {
        result.down = 1;
    }
    else
    {
        int d = gcd(abs(result.up), result.down);
        result.up /= d;
        result.down /= d;
    }
    return result;
}

Fraction add(Fraction a, Fraction b)
{
    Fraction result;
    result.up = a.up * b.down + a.down * b.up;
    result.down = a.down * b.down;
    result = reduction(result);
    return result;
}

Fraction minu(Fraction a, Fraction b)
{
    Fraciton result;
    result.up = a.up * b.down - a.down * b.up;
    result.down = a.down * b.down;
    result = reduction(result);
    return result;
}

Fraction multi(Fraction a, Fraction b)
{
    Fraction result;
    result.up = a.up * b.up;
    result.down = a.down * b.down;
    return reduction(result);
}

void showResult(Fraction r)
{
    r = reduction(r);
    if(r.down == 1)
        printf("%lld", r.up);
    else if(abs(r.up) > r.down)
    {
        printf("%d %d/%d", r.up / r.down, abs(r.up) % r.down, r.down);
    }
    else
    {
        printf("%d/%d", r.up, r.down);
    }
}
