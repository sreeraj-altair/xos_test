decl
	integer a;
enddecl

integer main()
{
	integer fd, k;
	k = 10000;
	
	
	a = Create("sample.dat");
	print(a);
	
	fd = Open ("sample.dat");
	print(fd);
	
	a = Write (fd, k);
	print (a);
	
	a = Seek (fd, 10);
	print (a);
	k = 2000;
	a = Write (fd, k);
	print (a);
	return 0;
}
