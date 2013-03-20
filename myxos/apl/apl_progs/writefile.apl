decl
	integer status;
enddecl

integer main()
{
	integer fd,d;
	string s;
	status = Create("newfile.dat");
	print(status);
	
	s="hello";
	d = 100;
	fd = Open("newfile.dat");
	print(fd);
	
	integer i;
	i=0;
	while (i < 3089 ) do
		status = Write (fd,d);
		d = d + 1;
		i = i + 1;
	endwhile;
	status = Write(fd,s);
	print(status);
	return 0;
}
