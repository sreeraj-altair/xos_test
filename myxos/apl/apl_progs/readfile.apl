decl
	integer a;
enddecl

integer main()
{

	integer fd,i,k;
	k = 2000;
	
	a = Create("file.dat");
	print(a);
	
	fd = Open ("file.dat");
	print(fd);
	
	i = 0;
	
	while (i < 5000) do
		a = Write (fd,k);
		k = k+1;
		i = i+1;
	endwhile;
	
	a = Seek(fd, 300);
	integer s;
	i = 0;
	while (	i < 1000) do
		a = Read(fd,s);
		print(s);
		i = i+1;
	endwhile;
	
	a=Close(fd);
	a = Delete("file.dat");
	print(a);
	return 0;
}
