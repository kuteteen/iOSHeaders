//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PEXSettingsKVOObserver : NSObject
{
    NSString *_key;
    CDUnknownBlockType _handler;
}

+ (id)observeObject:(id)arg1 key:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithKey:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

