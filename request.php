<?php
 if(isset($_POST['b1']))
{
 $name=$_POST['name'];
 $pno=$_POST['pno'];
 $locality=$_POST['locality'];
 $group=$_POST['group'];
 $urgency=$_POST['urgency'];
 
 $data=array("$name,$pno,$locality,$group,$urgency");
 $file=fopen("login1.csv","a+");
 foreach($data as $line)
 {
 fputcsv($file,explode(',',$ine));
 }
 fclose($file);
 echo "Message sent to Donors";
 }
 ?>