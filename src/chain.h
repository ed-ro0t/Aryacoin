#include "main.h"


class cActive {
private:
 std::vector<CBlockIndex*> vChain;

 public:
void SetTip(CBlockIndex *pindex) {
   
}


CBlockIndex *Tip() const {
        return pcoinsTip->GetBestBlock();
    }





};


                                                                                                                        //komodo                                                                                                                
extern cActive chainActive;  
