decl
	integer status;
enddecl

integer main()
{
	status = Create("myfile1.dat");
	print(status);
	print("Created file");
	
	status = Delete("myfile13.dat");
	print(status);
	
	return 0;
}
