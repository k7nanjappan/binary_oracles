<?php
if(isset($_POST['b3']))
{
	$name=$_POST['name'];
	$pno=$_POST['pno'];
	$locality=$_POST['locality'];
	$group=$_POST['group'];
	$weight=$_POST['weight'];
	$uid=$_POST['uid'];
	$pass=$_POST['pass'];
	
	$data=array("$name,$pno,$locality,$group,$weight,$uid,$pass");
	$file=fopen("login.csv","a+");
	foreach($data as $line)
	{
		fputcsv($file,explode(',',$line));
	}
	fclose($file);
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
		 //echo $csv[1][3];
		 
		 //echo '</pre>';

if(isset($_POST['b1']))
{
		$cuid=$_POST['cuid'];
		$cpass=$POST['cpass'];
	$n=sizeof($csv);
	for($x=0;$x<n;$x++)
	{
		$a=$csv[x][0];
		$b=$csv[x][6];
		
			if(strcmp($a,uid)==0)
			{
				
				if(strcmp($b,cpass)==0)
				{
					echo "done";
					//$loaction=donor.html;
					//header("Location:$location");
					//exit();
					break;
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
}
?>