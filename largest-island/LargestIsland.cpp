#include "LargestIsland.h"

#include <vector>
#include <map>

int largestIsland(std::vector<std::vector<int> > map) 
{
    std::vector<std::vector<int> > mapCopy = map;
    int groupNo = 0;
    int highest = 0;
    std::map<int, int> totals;
    for (int r = 0; r < mapCopy.size(); ++r) {
        for (int c = 0; c < mapCopy[r].size(); ++c) {
            if (mapCopy[r][c] > 0) {
                if (c > 0 && mapCopy[r][c-1] > 0) {
                    mapCopy[r][c] = mapCopy[r][c-1];
                } else if (r > 0 && mapCopy[r-1][c] > 0) {
                    mapCopy[r][c] = mapCopy[r-1][c];
                } else if (r > 0 && c > 0 && mapCopy[r-1][c-1] > 0) {
                    mapCopy[r][c] = mapCopy[r-1][c-1];
                } else {
                    mapCopy[r][c] = ++groupNo;
                }
                ++totals[mapCopy[r][c]];
                if (highest < totals[mapCopy[r][c]]) {
                    highest = totals[mapCopy[r][c]];
                }
            }
            printf("%02d,", mapCopy[r][c]);
        }
        printf("\r\n");
    }
	return highest;
}
