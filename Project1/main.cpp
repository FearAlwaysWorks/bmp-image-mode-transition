#include "SaveLoad.h"
#include "ModelTrans.h"

int main() {
    BmpImage bmpImage;
	ModelTrans modelTrans = ModelTrans(R"(D:\Download\test-images\lenna_gray.bmp)");
	modelTrans.doOperation();
    
    //bmpImage.SaveImage();

}
