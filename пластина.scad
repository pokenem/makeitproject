difference() 
{
   cube ([90,90,1]); 
for (i =[1:1:5]) {
for (j =[1:1:5])
{
    translate([100-i*20,100-j*20,0])
       cube([5,5,1]);
}
}
}