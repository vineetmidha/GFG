// https://practice.geeksforgeeks.org/problems/quadratic-equation-roots/0/?track=dsa-workshop-1-mathematics&batchId=308#

vector<int> quadraticRoots(int a, int b, int c) {
    vector<int> roots;

    int root1, root2;

    int d = b*b - 4*a*c;
    double sqrt_val = sqrt(d);   

    if (d > 0){
        root1 = floor((-b + sqrt_val) / (2*a)); 
        root2 = floor((-b - sqrt_val) / (2*a)); 

        if (root1 < root2){
            roots.push_back(root2);
            roots.push_back(root1);
        } else {
            roots.push_back(root1);
            roots.push_back(root2);
        }
    } else if (d == 0) {

        root1 = -b / (2*a); 
        root2 = -b / (2*a); 

        roots.push_back(root1);
        roots.push_back(root2);

    } else {

        roots.push_back(-1);

    }

    return roots;
}
