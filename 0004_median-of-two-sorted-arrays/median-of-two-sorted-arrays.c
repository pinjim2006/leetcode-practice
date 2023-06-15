double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int merge[nums1Size+nums2Size];
    int i=0,j=0,k=0;

    while(i<nums1Size&&j<nums2Size){
        if(nums1[i]<=nums2[j]){
            merge[k++]=nums1[i++];
        }else{
            merge[k++]=nums2[j++];
        }
    }
    while(i<nums1Size){
        merge[k++]=nums1[i++];
    }
    while(j<nums2Size){
        merge[k++]=nums2[j++];
    }
    
    double ans=0;

    if((nums1Size+nums2Size)%2==0){
        ans=(double)(merge[(nums1Size+nums2Size)/2-1]+merge[(nums1Size+nums2Size)/2])/2;
    }else{
        ans=(double)merge[(nums1Size+nums2Size)/2];
    }
    return ans;
}