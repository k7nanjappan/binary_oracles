<?php
if(isset($_POST['b1'])){
	$name=$_POST['name'];
	$pno=$_POST['pno'];
	$locality=$_POST['locality'];
	$group=$_POST['group'];
	$weight=$_POST['weight'];
	
	$data=array("$name,$pno,$locality,$group,$weight");
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
		fclose($file_handle);
		return $line_of_text;
		}
		$csvFile='contacts.csv';
		$csv=getdata($csvFile);
		echo '<pre>';
		($a=$csv[0]);
		print $a[0];
		echo '</pre>';
	}
?>