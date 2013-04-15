integer main()
{
	integer childpid,retval;
	string name;
	while(1 == 1) do
		read (name);
		breakpoint;
		breakpoint;
		breakpoint;
		if(name == "exit") then
			break;
		endif;

		
		if(name != "c") then
			childpid = Fork();
			if(childpid == -2) then
				retval=Exec(name);
				if(retval == -1) then
					breakpoint;
					print("Exsc Failed");
				endif;
			endif;
			if(childpid == -1) then
				print("Fork Failed");
			endif;
		endif;
		retval = 0;
		while(retval < 25) do
			retval = retval + 1;
		endwhile;
		name = "c";
	endwhile;

	return 0;
}
