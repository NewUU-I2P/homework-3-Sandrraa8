void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
float water;
cin>>water;
    switch (water>0&&water<=30) {
        case 1:
            cout<<water*0.4+13<<endl;
            break;
        case 0:
            switch (water>30&&water<=50) {
                case 1:
                    cout<<13+(30*0.4)+((water-30)*0.12)<<endl;
                    break;
                case 0:
                    switch (water>50&&water<=60) {
                        case 1:
                            cout<<13+(30*0.4)+(20*0.12)+((water-50)*1.4)<<endl;
                            break;
                        case 0:
                            switch (water>60) {
                                case 1:
                                    cout<<13+(30*0.4)+(20*0.12)+(10*1.4)+((water-60)*1.5)<<endl;
                                    break;
                                case 0:
                                    cout<<"Inappropriate value"<<endl;
                            }
                    }

            }
    }
    return cost;
}
