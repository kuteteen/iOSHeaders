//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SimulatorHIDFallback/ISCVirtualServiceProvider-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ISCVirtualServicePropertyProvider : NSObject <ISCVirtualServiceProvider>
{
    NSDictionary *_properties;
}

@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (id)copyProperty:(id)arg1 service:(id)arg2;
- (id)initWithProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
