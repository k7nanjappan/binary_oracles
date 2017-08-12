<?php
if(isset($_POST['b3'])){
	$name=$_POST['name'];
	$pno=$_POST['pno'];
	$locality=$_POST['locality'];
	$group=$_POST['group'];
	$weight=$_POST['weight'];
	$uid=$_POST['uid'];
	$pass=$_POST['pass'];
	
	$data=array("$name,$pno,$locality,$group,$weight,$uid,$pass");
	$file=fopen("contacts.csv","a+");
	foreach($data as $line)
	{
		fputcsv($file,explode(',',$line));
	}
	fclose($file);
	function getdata($csvFile){
		$file_handle=fopen("$csvFile","r");
		while(!feof($file_handle)){
			$line_of_text[]=fgetcsv($file_handle,1024);
		}
		//fclose($file_handle);
		return $line_of_text;
		}
		$csvFile='contacts.csv';
		$csv=getdata($csvFile);
		echo '<pre>';
		//$a=$csv[0];
		//echo $a;
		//$b=$csv[6];
		}
if(isset($_POST['b1'])){
	$cuid=$_POST['cuid'];
	$cpass=$_POST['cpass'];
	$x=0;
	$y=6;
	$i=0;
/*while(feof)
{
	$a=$csv[i][x];
	$b=$csv[i][y];
	if(strcmp($cuid,$a)==0)
	{
		if(strcmp($cpass,$b)==0)
		{
			window.open("donor.html");
			break;
		}
		else
		{
			echo "invalid username or password";
		}
	}
	else
		{
			echo "invalid username or password";
		}
		$x+=7;
		$y+=6;
		$i++;
}*/
while(feof($file_handle))
{
	$a=$csv[x];
	$b=$csv[y];
	if(strcmp($cuid,$a)==0)
	{
		if(strcmp($cpass,$b==0))
		{
			window.open("donor.html");
			break;
		}
		else
		{
				echo "invalid user-id od password"; 
		}
	}
	else
	{
		echo "invalid unsername or password";
	}
	$x+=7;
	$y+=6;
}

fclose($file_handle);
}
?>