decl
	integer status,fd[4];
enddecl

integer main()
{
	status = Create("myfile1.dat");
	//print(status);
	print("Created file");
	
	status = Create("myfile2.dat");
	status = Create("myfile3.dat");
	
	
	fd[0] = Open("myfile1.dat");
	print(fd[0]);
	
	fd[1] = Open("myfile2.dat");
	print(fd[1]);
	
	fd[2] = Open("myfile4.dat");
	print(fd[2]);
	
	fd[3] = Open("myfile3.dat");
	print(fd[3]);
	
	status = Close(fd[0]);
	print(status);
	status = Close(fd[1]);
	print(status);
	status = Close(fd[2]);
	print(status);
	
	print("deletion");
	status = Delete("myfile1.dat");
	print(status);
	status = Delete("myfile2.dat");
	print(status);
	status = Delete("myfile3.dat");
	print(status);
	
	return 0;
}
