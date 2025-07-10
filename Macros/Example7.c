#include <stdio.h>

#define LAYER_INITCALL(layer, num) __zinitcall_##layer##_##num

void __zinitcall_service_1(void) {printf("Service 1 \n"); }
void __zinitcall_service_2(void) {printf("Service 2 \n"); }
void __zinitcall_feature_1(void) {printf("Feature 1 \n"); }
void __zinitcall_feature_2(void) {printf("Feature 2 \n"); }

int main(){

    LAYER_INITCALL(service, 1)();
    LAYER_INITCALL(service, 2)();
    LAYER_INITCALL(feature, 1)();
    LAYER_INITCALL(feature, 2)();

    return 0;
}