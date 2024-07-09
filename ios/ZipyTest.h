
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNZipyTestSpec.h"

@interface ZipyTest : NSObject <NativeZipyTestSpec>
#else
#import <React/RCTBridgeModule.h>

@interface ZipyTest : NSObject <RCTBridgeModule>
#endif

@end
