<?php

if(isset($_POST['b1']))
{
	function getdata($csvFile)
	{
		$file_handle=fopen($csvFile,"r");
		while(!feof($file_handle))
		{
			$line_of_text[]=fgetcsv($file_handle,1024);
		}
		fclose($file_handle);
		return $line_of_text;
	}
		$csvFile='login.csv';
		$csv=getdata($csvFile);
		//echo '<pre>';
		 echo $csv[0][0];
		 
		 //echo '</pre>';
		$cuid=$_POST['cuid'];
		//echo $cuid;
		$cpass=$_POST['cpass'];
		//echo $cpass;
		$n=sizeof($csv);
		//echo strcmp(csv[0][0],cuid)
	for ( $x=0; $x <$n; $x++)
	{
		
			if(strcmp($csv[0][0],$cuid)==0)
			{
				
				if(strcmp($csv[0][6],$cpass)==0)
				{
					//echo "done";
					//$loaction=donor.html;
					//header("Location:$location");
					//exit();
					//window.location("donor.html");
					echo '<script>window.location="donor.html"</script>';
				}
				else
				{
					echo "invalid password";
				}
			}
			else
			{
				echo "invalid username";
			}
		
	}	
}

?>