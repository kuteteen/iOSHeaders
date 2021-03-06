//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DMFOSStateHandler : NSObject
{
    CDUnknownBlockType _block;
    NSString *_name;
    unsigned long long _handle;
}

@property(nonatomic) unsigned long long handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)dealloc;
- (struct os_state_data_s *)_serializeState;
- (id)initWithQueue:(id)arg1 name:(id)arg2 stateHandlerBlock:(CDUnknownBlockType)arg3;

@end

