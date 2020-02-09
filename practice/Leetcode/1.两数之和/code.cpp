class Solution {  
public:  
    vector<int> twoSum(vector<int>& data, int target) {  
        vector<int>cdata(data);//用于存储排序数据  
        vector<int>index;//索引  
        partial_sort_copy(data.begin(), data.end(), cdata.begin(), cdata.end());//拷贝排序  
        int i = 0, j = cdata.size() - 1;//双下标  
        int result = cdata[i] + cdata[j];  
        while(result != target){  
            if (result > target){  
                --j;//向前移动下标  
            }  
            else{  
                ++i;//向后移动下标  
            }  
            result = cdata[i] + cdata[j];  
        }  
        int pos = find(data.begin(), data.end(), cdata[i]) - data.begin();  
        index.push_back(pos);  
        data.at(pos) = cdata[j] + 1;//防止该位置被二次检索  
        index.push_back(find(data.begin(), data.end(), cdata[j]) - data.begin());  
        sort(index.begin(), index.end());  
        return index;  
    }  
};  