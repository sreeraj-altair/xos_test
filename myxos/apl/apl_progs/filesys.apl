decl
	integer a;
enddecl

integer main()
{
	integer fd1,fd2,i,k,n,j,flag;
	
	print ("Enter n:");
	read (n);
	
	a = Create ("newfile5.dat");
	print ("Created File");
	
	fd1 = Open ("newfile5.dat");
	
	i = 0;
	while (i < n) do
		a = Write (fd1,i);
		i = i+1;
	endwhile;
	
	fd2 = Open ("newfile5.dat");
	
	//i = 0;
	//while (i < 512) do
		//a = Read (fd2,k);
		//print(k);
		//i = i + 1;
	//endwhile;
	
	return 0;
}
	
	
