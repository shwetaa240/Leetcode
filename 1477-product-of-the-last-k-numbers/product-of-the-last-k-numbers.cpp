class ProductOfNumbers {
public:
    vector<int> arr;
    ProductOfNumbers() {

    }
    
    void add(int num) {
     arr.push_back(num);        
    }
    
    int getProduct(int k) {
        int i=0,p=1,n=arr.size();
        for(i=n-1;i>=n-k;i--)
        {
           p*=arr[i];       
        }
        return p;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */