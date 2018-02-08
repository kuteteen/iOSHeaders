//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSVCallback, NSArray, NSObject<OS_dispatch_source>, NSString;

__attribute__((visibility("hidden")))
@interface MRAVOutputContextModification : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;
    _Bool _valid;
    unsigned long long _modificationType;
    NSArray *_outputDevices;
    MSVCallback *_callback;
    NSString *_password;
}

+ (id)replaceModificationWithDevices:(id)arg1 callback:(id)arg2;
+ (id)removeModificationWithDevices:(id)arg1 callback:(id)arg2;
+ (id)addModificationWithDevices:(id)arg1 callback:(id)arg2;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) MSVCallback *callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
@property(readonly, nonatomic) unsigned long long modificationType; // @synthesize modificationType=_modificationType;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 devices:(id)arg2 callback:(id)arg3;

@end

