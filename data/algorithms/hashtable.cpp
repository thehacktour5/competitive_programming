#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> listinha;
    vector<int> novaListinhaVazia;
    map<int,int> mapinha;
    int tamanho, valor, itemQueQueroAchar;
    int itemAleatorio;

    cout << "Qual tamanho do seu array?" << endl;
    cin >> tamanho;

    for(int i=0; i<tamanho; i++){
        cout << "Digite o " << i+1 << "º item do seu array: " << endl;
        cin >> valor;
        listinha.push_back(valor);
    }

    cout << "Digite o item que você quer achar: " << endl;
    cin >> itemQueQueroAchar;


    for(int i=0; i<listinha.size(); i++){
        if(mapinha.find(itemQueQueroAchar-listinha[i]) != mapinha.end() ){
            novaListinhaVazia.push_back(mapinha[itemQueQueroAchar-listinha[i]]);
            novaListinhaVazia.push_back(i);
        }
        mapinha[listinha[i]] = i;
    }

    for(int i=0; i<novaListinhaVazia.size(); i++){
        cout << novaListinhaVazia[i] << endl;
    }

}


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> listinha;
        map<int,int> mapinha;
        
        for(int i=0; i<nums.size(); i++){
            if(mapinha.find(target-nums[i]) != mapinha.end()){
                listinha.push_back(mapinha[target-nums[i]]);
                listinha.push_back(i);
            }else{
                mapinha[nums[i]] = i;
            }
            
        }
        
        return listinha;
    }
};