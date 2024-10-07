

#if 0
#include <vector>
int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
    int totalTank=0, totalTankCheck=0;
    int startPosition = 0;

    for (int i=0; i<gas.size(); i++) {
        totalTankCheck += gas[i]-cost[i];
        totalTank += gas[i]-cost[i];

        if (totalTank<0) {
            startPosition = i+1;
            totalTank = 0;
        }

    }

    return (totalTankCheck < 0) ? -1 : startPosition;

}



#endif








#if 0 //BAD APPROACH
#include <vector>
int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {

    for (int i=0; i<gas.size(); i++) {

        if (gas[i] >= cost[i]) {

            int gasTank = 0;
            int circleSize = gas.size();
            int counter=0;

            int beginnerGas = i;
            int currentGas = i;

            do {
                gasTank = gas[currentGas] + gasTank;
                if (gasTank >= cost[currentGas]) {
                    gasTank -= cost[currentGas];

                    if (currentGas==circleSize-1) {
                        currentGas=0;
                    }else {
                        currentGas++;
                    }

                }else {
                    break;
                }

            }
            while (beginnerGas != currentGas && counter < circleSize);

            if (currentGas == beginnerGas) {
                return beginnerGas;
            }
        }


    }

    return -1;

}



#endif