integer main()
{
	integer childpid,retval;
	childpid = Fork();
	if(childpid == -2) then
		retval=Exec("vmem.xsm");
	else
		while(childpid != -1) do
			print(childpid);
		endwhile;
	endif;
	return 0;
}
