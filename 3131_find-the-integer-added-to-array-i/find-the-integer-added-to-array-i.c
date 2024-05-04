int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int max1 = 0, max2 = 0;
    for(int i = 0; i < nums1Size; i++){
        max1 = nums1[i] > max1 ? nums1[i] : max1;
        max2 = nums2[i] > max2 ? nums2[i] : max2;
    }
    return max2 - max1;
}