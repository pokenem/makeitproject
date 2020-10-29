difference() 
{
   cube ([90,90,0.8]); 
for (i =[0:1:4]) {
for (j =[0:1:4])
{
    translate([78.3-i*16.4,83-j*19.6,0])
       cube([6,6,0.8]);
}
}
}