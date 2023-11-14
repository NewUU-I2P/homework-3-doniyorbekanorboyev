float problemSolution1(float consumed_water) {
    float cost;
    // write your code here

    float fixed = 13;
    float limit1 = 30;
    float limit2 = 20;
    float limit3 = 10;
    float add = consumed_water - limit1 - limit2 - limit3;

    float rate1 = 0.4;
    float rate2 = 0.12;
    float rate3 = 1.4;
    float rate5 = 1.5;

    if (consumed_water <= limit1) {
        cost = fixed + consumed_water*rate1;
    }
    else if (consumed_water <= limit2 + limit1) {
        cost = fixed + (consumed_water - limit1) *rate2 + limit1*rate1;
    }
    else if (consumed_water <= limit1 + limit2 + limit3) {
        cost = fixed + limit1 * rate1 + limit2 * rate2 + (consumed_water - (limit1 + limit2)) * rate3;
    }
    else{
        cost = fixed + limit1 * rate1 + limit2 * rate2 + limit3*rate3 + add*rate5;
    }




    return cost;
}
