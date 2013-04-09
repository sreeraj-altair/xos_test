integer main()
{
	integer childpid,retval;
	childpid = Fork();
	if(childpid == -2) then
		retval=Exec("vmem.xsm");
	else
		while(childpid != -1) do
			if(childpid > 17) then
				breakpoint;
			endif;
			print(childpid);
		endwhile;
	endif;
	return 0;
}
