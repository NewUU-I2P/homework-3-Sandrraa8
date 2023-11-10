void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
float water;
cin>>water;
float cost;
if (water>0&&water<=30){
    cout<<water*0.4+13<<endl;
}else if(water>30&&water<=50){
    cout<<13+(30*0.4)+((water-30)*0.12)<<endl;
}else if(water>50&&water<=60){
    cout<<13+(30*0.4)+(20*0.12)+((water-50)*1.4)<<endl;
}else if(water>50&&water<=60){
    cout<<13+(30*0.4)+(20*0.12)+((water-50)*1.4)<<endl;
}else if(water>60){
    cout<<13+(30*0.4)+(20*0.12)+(10*1.4)+((water-60)*1.5)<<endl;
}else{
    cout<<"Inappropriate value"<<endl;
}
    return cost;
}
