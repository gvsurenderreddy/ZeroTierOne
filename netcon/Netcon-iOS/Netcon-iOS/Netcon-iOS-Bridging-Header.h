//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

int start_intercept();
int start_service(const char * path);
void disable_intercept();
void enable_intercept();

#import "ProxyKitTest.h"