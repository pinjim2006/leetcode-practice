/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * nums1Size);
    (*returnSize) = nums1Size;
    for(int i = 0; i < nums1Size; i++){
        int greater = -1;
        for(int j = nums2Size - 1; j >= 0; j--){
            if(nums2[j] == nums1[i]){
                result[i] = greater;
            }else if(nums2[j] > nums1[i]){
                greater = nums2[j];
            }
        }
    }
    return result;
}