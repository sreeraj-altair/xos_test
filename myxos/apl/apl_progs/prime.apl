decl
	integer i,j,n,flag;
enddecl

integer main()
{
	print("Enter n:");
	read(n);
	i = 2;
	while (i <= n) do
		j = 2;
		flag=0;
		while (j <= (i/2)) do
			if (i%j == 0) then
				flag = 1;
				break;
			endif;
			j = j+1;
		endwhile;
		if (flag==0) then
			print(i);
		endif;
		i = i+1;
	endwhile;
	return 0;
}
