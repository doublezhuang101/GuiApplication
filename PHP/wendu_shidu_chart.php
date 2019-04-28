<?php
require_once ('C:/php7/jpgraph/jpgraph.php');
require_once ('C:/php7/jpgraph/jpgraph_line.php');
require_once 'sql_connect.php';

$query="
SELECT * FROM `c++_course_design`.`studentinformation` LIMIT 0,1000
";
$Data1 =  mysqli_query($conn,$query);
$Data2 =  mysqli_query($conn,$query);
$Data3 =  mysqli_query($conn,$query);
$Data4 =  mysqli_query($conn,$query);
$y=array();
$x=array();
$x1=array();
$x2=array();
while($row = mysqli_fetch_array($Data1)){
    $y[]=$row["number"];
}
while($row1 = mysqli_fetch_array($Data2)){
    $x[]=$row1["C_score"];
}
while($row2 = mysqli_fetch_array($Data3)){
    $x1[]=$row2["math_score"];
}
while($row3 = mysqli_fetch_array($Data4)){
    $x2[]=$row3["english_score"];
}

$graph = new Graph(1990,610);//创建新的Graph对象
$graph->SetScale("textlin");//设置刻度样式
$graph->img->SetMargin(70,50,50,70);//设置图表边界
$graph->title->Set(iconv("UTF-8","GB2312//IGNORE",""));//设置图表标题
$graph->title->SetFont(FF_SIMSUN,FS_BOLD,14);//标题字体
$graph->xaxis->title->Set(iconv("UTF-8","GB2312//IGNORE","学号"));//设置X轴
$graph->xaxis->title->SetFont(FF_SIMSUN,FS_BOLD,16);//设置X轴样式
$graph->xaxis->title->SetMargin(20);
$graph->xaxis->SetTickLabels($y);//设置X轴坐标值
$graph->yaxis->title->Set(iconv("UTF-8","GB2312//IGNORE","C++/Math/English"));//设置Y轴
$graph->yaxis->title->SetFont(FF_SIMSUN,FS_BOLD,16);//设置Y轴样式
$graph->yaxis->title->SetMargin(20);
$graph->title->SetColor("blue");
$graph->title->SetMargin(20);//设置标题空间

// Create the linear plot
$line_plot=new LinePlot($x);// 创建新的LinePlot对象
$line_plot->SetColor("red"); //设置曲线颜色
$line_plot->SetLegend(iconv("UTF-8","GB2312//IGNORE","C++"));
$line_plot->SetWeight(5);
$line_plot->value->show(true);//显示值

$line2_plot=new LinePlot($x1);// 创建新的LinePlot对象
$line2_plot->SetColor("red"); //设置曲线颜色
$line2_plot->SetLegend(iconv("UTF-8","GB2312//IGNORE","Math"));
$line2_plot->SetWeight(5);
$line2_plot->value->show(true);//显示值


$line3_plot=new LinePlot($x2);// 创建新的LinePlot对象
$line3_plot->SetColor("red"); //设置曲线颜色
$line3_plot->SetLegend(iconv("UTF-8","GB2312//IGNORE","English"));
$line3_plot->SetWeight(5);
$line3_plot->value->show(true);//显示值

// Add the plot to the graph
$graph->Add($line_plot);//在统计图上绘制曲线
$graph->Add($line2_plot);
$graph->Add($line3_plot);

// Display the graph
$graph->Stroke();//输出图像
?>