fruits= [4,2,5];
baskets= [3,5,4];
for i in range(fruits)
{
    for j in range(baskets)
    {
        if(fruits(i)<=baskets(j))
        {
            fruits(i)=baskets(j);
             
        }
    }
}