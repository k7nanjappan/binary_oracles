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
	$file=fopen("login1.csv","a+");
	foreach($data as $line)
	{
		fputcsv($file,explode(',',$line));
	}
	fclose($file);
	echo '<script>window.location="after_register.html"</script>';
}
?>