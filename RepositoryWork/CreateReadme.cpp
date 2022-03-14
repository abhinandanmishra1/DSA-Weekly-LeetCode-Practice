#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> easy={
"diameter-of-binary-tree/",
"invert-binary-tree/",
"subtree-of-another-tree/",
"range-sum-of-bst/",
"symmetric-tree/",
"convert-sorted-array-to-binary-search-tree/",
"merge-two-binary-trees/",
"maximum-depth-of-binary-tree/",
"binary-tree-paths/",
"same-tree/",
"lowest-common-ancestor-of-a-binary-search-tree/",
"path-sum/",
"minimum-absolute-difference-in-bst/",
"sum-of-left-leaves/",
"balanced-binary-tree/",
"binary-tree-inorder-traversal/"
};
vector<string> medium={
"count-good-nodes-in-binary-tree/",
"lowest-common-ancestor-of-a-binary-tree/",
"binary-tree-right-side-view/",
"all-nodes-distance-k-in-binary-tree/",
"validate-binary-search-tree/",
"binary-tree-zigzag-level-order-traversal/",
"binary-search-tree-iterator/",
"binary-tree-level-order-traversal/",
"path-sum-iii/"
"construct-binary-tree-from-preorder-and-postorder-traversal/",
"unique-binary-search-trees/",
"recover-binary-search-tree/",
"populating-next-right-pointers-in-each-node/",
"flatten-binary-tree-to-linked-list/",
"maximum-width-of-binary-tree/",
"unique-binary-search-trees-ii/",
"kth-smallest-element-in-a-bst/",
"redundant-connection/"
};
vector<string> hard={
"serialize-and-deserialize-binary-tree/",
"binary-tree-maximum-path-sum/",
"vertical-order-traversal-of-a-binary-tree/",
"binary-tree-cameras/",
"sum-of-distances-in-tree/",
"number-of-ways-to-reconstruct-a-tree/",
"redundant-connection-ii/"
};
int main(){
    freopen("Random.txt","w",stdout);
    
    for(int i=0;i<hard.size();i++){
        printf("- Problem %d **[Link](https://leetcode.com/problems/%s)**\n\n",i+1,hard[i].c_str());
    }

}