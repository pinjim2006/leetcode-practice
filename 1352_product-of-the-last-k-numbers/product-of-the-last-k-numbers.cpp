class ProductOfNumbers {
    std::vector<int> products;
public:
    ProductOfNumbers() {
        products = {1};
    }
    
    void add(int num) {
        if(num == 0){
            products = {1};
        }else{
            products.push_back(products.back() * num);
        }
    }
    
    int getProduct(int k) {
        if (k >= products.size()){
            return 0;
        }else{
            return products.back() / products[products.size() - 1 - k];
        }
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */