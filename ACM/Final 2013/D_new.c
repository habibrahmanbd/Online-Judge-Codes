#include<stdio.h>
int main()
{
    int cases, caseno;
	int r, g, b, w;
	int groups;

    scanf("%d", &cases);
    for(caseno=1; caseno<=cases; caseno++)
    {
        scanf("%d %d %d %d", &r, &g, &b, &w);

		groups = 0;

		while (1)
		{
			if ((r > 0) && (g > 0) && (b > 0))
			{
				groups = groups + 1;
				r = r - 1;
				g = g - 1;
				b = b - 1;
			}
			else
			{
				if (w == 0) { break; }
				if ((r == 0) && (w > 0)) { r = r + 1; w = w - 1; }
				if ((g == 0) && (w > 0)) { g = g + 1; w = w - 1; }
				if ((b == 0) && (w > 0)) { b = b + 1; w = w - 1; }
			}
		}

		printf("Case %d: %d\n", caseno, groups);
    }

    return 0;
}
