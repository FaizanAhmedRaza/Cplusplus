#include <iostream>
#include <queue>
using namespace std;
struct bstNode
{
    int data;
    bstNode* left;
    bstNode* right;
};
bstNode* GetNewNode(int data){
    bstNode* newNode = new bstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
/* Binary tree - Level Order Traversal */
void levelorder(bstNode* root){     // Function to print Nodes in a binary tree in Level order
    if(root == NULL)
        return;
    queue<bstNode*> Q;  // creating Queue of type pointer to Node 
    Q.push(root);       // initially discovering root node in the Queue
    //while there is at least one discovered node
    while(!Q.empty()){  
        bstNode* current = Q.front();   // Taking out the node/data from the front and returning  it to Type Node to pointer through object/variable current
        Q.pop();
        cout<<current->data<<" ";
        if(current->left != NULL)
            Q.push(current->left);
        if(current->right != NULL)
            Q.push(current->right);
    }
}
bstNode* Insert(bstNode* root, int data){
    if(root == NULL)
        root = GetNewNode(data);
    else if (data <= root->data)
        root->left = Insert(root->left, data);
    else
        root->right = Insert(root->right, data);
    return root;
}
bool Search(bstNode* root, int data){
    if(root == NULL)
        return false;
    else if(root->data = data)
        return true;
    else if(root->data >= data)
        return Search(root->left,data);
    else
        return Search(root->right,data);
}
bstNode* FindMin(bstNode* root){
    while(root->left != NULL) 
        root = root->left;
	return root;
}
bstNode* FindMax(bstNode* root){
    while(root->right != NULL) 
        root = root->right;
	return root;
}
bstNode* dELETE(bstNode* root, int data){
    if(root==NULL)
        return root;
    else if(data < root->data) 
        root->left = dELETE(root->left,data);
	else if (data > root->data) 
        root->right = dELETE(root->right,data);
    else{
        // Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			bstNode *temp = root;
			root = root->right; 
			delete temp;
		}
		else if(root->right == NULL) {
			bstNode *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			bstNode *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = dELETE(root->right,temp->data);
		}
	}
}
void preorder(bstNode* root){    //Function to visit nodes in Preorder
    if(root == NULL)
        return;
    cout<<root->data<<" ";    //print data
    preorder(root->left);   //visit left subtree
    preorder(root->right);  //visit right subtree
}
void inorder(bstNode* root){     //Function to visit nodes in Inorder
    if(root == NULL)
        return;
    inorder(root->left);    //visit left subtree
    cout<<root->data<<" ";   //print data
    inorder(root->right);   //visit right subtree
}
void postorder(bstNode* root){      //Function to visit nodes in Postorder
    if(root == NULL)
        return;
    postorder(root->left);  //visit left subtree
    postorder(root->right); //visit right subtree
    cout<<root->data<<" ";   //print data
}
int main(){
    bstNode* root = NULL;
    root = Insert(root,15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    levelorder(root);
    int num;
    cout<<"\nEnter number be searched: ";
    cin>>num;

    if(Search(root,num)==true)
        cout<<"\nNumber is Found\n";
    else
        cout<<"\nNot found.\nn";
    root = dELETE(root,25);
    cout<<"The min num is: "<<FindMin(root);
    cout<<"\nPreorder: ";
	preorder(root);
	cout<<"\nInorder: ";
	inorder(root);
	cout<<"\nPostorder: ";
	postorder(root);
	cout<<"\n";
    return 0;
}

