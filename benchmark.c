//
// Created by reznik on 3/29/20.
//

#include<stdio.h>
#include "marine.h"

int main(void) {
    init_marine();
    unsigned char packet[] = {0x01, 0x00, 0x5e, 0x7f, 0xff, 0xfa, 0x00, 0xb8, 0xc2, 0x1c, 0xac, 0x23, 0x08, 0x00, 0x45, 0x00, 0x01, 0xeb, 0xbe, 0x90, 0x00, 0x00, 0x02, 0x11, 0xfd, 0xed, 0x0a, 0x00, 0x00, 0x8a, 0xef, 0xff, 0xff, 0xfa, 0xd4, 0x52, 0x07, 0x6c, 0x01, 0xd7, 0x1e, 0xeb, 0x4e, 0x4f, 0x54, 0x49, 0x46, 0x59, 0x20, 0x2a, 0x20, 0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x31, 0x0d, 0x0a, 0x48, 0x4f, 0x53, 0x54, 0x3a, 0x20, 0x32, 0x33, 0x39, 0x2e, 0x32, 0x35, 0x35, 0x2e, 0x32, 0x35, 0x35, 0x2e, 0x32, 0x35, 0x30, 0x3a, 0x31, 0x39, 0x30, 0x30, 0x0d, 0x0a, 0x43, 0x41, 0x43, 0x48, 0x45, 0x2d, 0x43, 0x4f, 0x4e, 0x54, 0x52, 0x4f, 0x4c, 0x3a, 0x20, 0x6d, 0x61, 0x78, 0x2d, 0x61, 0x67, 0x65, 0x3d, 0x36, 0x30, 0x0d, 0x0a, 0x4c, 0x4f, 0x43, 0x41, 0x54, 0x49, 0x4f, 0x4e, 0x3a, 0x20, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f, 0x31, 0x30, 0x2e, 0x30, 0x2e, 0x30, 0x2e, 0x31, 0x33, 0x38, 0x3a, 0x35, 0x34, 0x33, 0x31, 0x2f, 0x72, 0x6f, 0x6f, 0x74, 0x44, 0x65, 0x73, 0x63, 0x2e, 0x78, 0x6d, 0x6c, 0x0d, 0x0a, 0x53, 0x45, 0x52, 0x56, 0x45, 0x52, 0x3a, 0x20, 0x55, 0x62, 0x75, 0x6e, 0x74, 0x75, 0x2f, 0x62, 0x69, 0x6f, 0x6e, 0x69, 0x63, 0x20, 0x55, 0x50, 0x6e, 0x50, 0x2f, 0x32, 0x2e, 0x30, 0x20, 0x4d, 0x69, 0x6e, 0x69, 0x55, 0x50, 0x6e, 0x50, 0x64, 0x2f, 0x32, 0x2e, 0x31, 0x0d, 0x0a, 0x4e, 0x54, 0x3a, 0x20, 0x75, 0x72, 0x6e, 0x3a, 0x73, 0x63, 0x68, 0x65, 0x6d, 0x61, 0x73, 0x2d, 0x75, 0x70, 0x6e, 0x70, 0x2d, 0x6f, 0x72, 0x67, 0x3a, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x3a, 0x57, 0x41, 0x4e, 0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x3a, 0x31, 0x0d, 0x0a, 0x55, 0x53, 0x4e, 0x3a, 0x20, 0x75, 0x75, 0x69, 0x64, 0x3a, 0x66, 0x64, 0x32, 0x64, 0x39, 0x31, 0x35, 0x64, 0x2d, 0x61, 0x63, 0x31, 0x64, 0x2d, 0x34, 0x37, 0x33, 0x31, 0x2d, 0x38, 0x34, 0x35, 0x31, 0x2d, 0x36, 0x63, 0x61, 0x35, 0x64, 0x32, 0x35, 0x62, 0x37, 0x31, 0x39, 0x34, 0x3a, 0x3a, 0x75, 0x72, 0x6e, 0x3a, 0x73, 0x63, 0x68, 0x65, 0x6d, 0x61, 0x73, 0x2d, 0x75, 0x70, 0x6e, 0x70, 0x2d, 0x6f, 0x72, 0x67, 0x3a, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x3a, 0x57, 0x41, 0x4e, 0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x3a, 0x31, 0x0d, 0x0a, 0x4e, 0x54, 0x53, 0x3a, 0x20, 0x73, 0x73, 0x64, 0x70, 0x3a, 0x61, 0x6c, 0x69, 0x76, 0x65, 0x0d, 0x0a, 0x4f, 0x50, 0x54, 0x3a, 0x20, 0x22, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f, 0x73, 0x63, 0x68, 0x65, 0x6d, 0x61, 0x73, 0x2e, 0x75, 0x70, 0x6e, 0x70, 0x2e, 0x6f, 0x72, 0x67, 0x2f, 0x75, 0x70, 0x6e, 0x70, 0x2f, 0x31, 0x2f, 0x30, 0x2f, 0x22, 0x3b, 0x20, 0x6e, 0x73, 0x3d, 0x30, 0x31, 0x0d, 0x0a, 0x30, 0x31, 0x2d, 0x4e, 0x4c, 0x53, 0x3a, 0x20, 0x31, 0x35, 0x38, 0x32, 0x37, 0x38, 0x37, 0x34, 0x31, 0x38, 0x0d, 0x0a, 0x42, 0x4f, 0x4f, 0x54, 0x49, 0x44, 0x2e, 0x55, 0x50, 0x4e, 0x50, 0x2e, 0x4f, 0x52, 0x47, 0x3a, 0x20, 0x31, 0x35, 0x38, 0x32, 0x37, 0x38, 0x37, 0x34, 0x31, 0x38, 0x0d, 0x0a, 0x43, 0x4f, 0x4e, 0x46, 0x49, 0x47, 0x49, 0x44, 0x2e, 0x55, 0x50, 0x4e, 0x50, 0x2e, 0x4f, 0x52, 0x47, 0x3a, 0x20, 0x31, 0x33, 0x33, 0x37, 0x0d, 0x0a, 0x0d, 0x0a};
    int len = 505;
    char err_msg[512];
    char *fields[] = {"ip.src", "frame.number"};
    int filter_id = marine_add_filter("host 10.0.0.138", NULL, fields, 2, err_msg);
    marine_result *marineResult = marine_dissect_packet(filter_id, packet, len);
    printf("%d\n", (*marineResult).result);
    printf("%s\n", (*marineResult).output);
    marine_free(marineResult);
    destroy_marine();
    return 0;

}
