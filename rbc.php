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
		$csvFile='login1.csv';
		$csv=getdata($csvFile);
		$cuid=$_POST['cuid'];
		$cpass=$_POST['cpass'];
		$n=sizeof($csv);
	for ( $x=0; $x <$n; $x++)
	{
		if(strcmp($csv[$x][5],$cuid)==0)
			{
				if(strcmp($csv[$x][6],$cpass)==0)
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