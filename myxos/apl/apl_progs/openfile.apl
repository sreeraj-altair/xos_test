decl
	integer status;
enddecl

integer main()
{
	status = Create("myfile1.dat");
	print(status);
	print("Created file");
	
	status = Create("myfile2.dat");
	status = Create("myfile3.dat");
	
	status = Open("myfile1.dat");
	print(status);
	print("Opened file 1");
	
	//status = Open("myfile2.dat");
	//print(status);
	//print("Opened file 2");
	
	status = Open("myfile3.dat");
	print(status);
	print("Opened file 3");
	
	status = Open("sample.dat");
	print(status);
	
	print("file deletion");
	status = Delete("myfile1.dat");
	print(status);
	status = Delete("myfile2.dat");
	print(status);
	status = Delete("myfile3.dat");
	print(status);
	return 0;
}
