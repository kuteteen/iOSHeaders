//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OBCapabilities : NSObject
{
    _Bool _preventURLDataDetection;
    _Bool _preventOpeningSafari;
}

+ (void)_setSharedCapabilities:(id)arg1;
+ (id)sharedCapabilities;
@property(nonatomic) _Bool preventOpeningSafari; // @synthesize preventOpeningSafari=_preventOpeningSafari;
@property(nonatomic) _Bool preventURLDataDetection; // @synthesize preventURLDataDetection=_preventURLDataDetection;
- (_Bool)isWAPI;

@end

