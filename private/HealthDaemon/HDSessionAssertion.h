//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDSessionAssertionManager, HDXPCClient, NSString;

@interface HDSessionAssertion : NSObject
{
    NSString *_ownerIdentifier;
    NSString *_assertionIdentifier;
    HDXPCClient *_client;
    HDSessionAssertionManager *_manager;
}

@property(readonly, nonatomic) __weak HDSessionAssertionManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) HDXPCClient *client; // @synthesize client=_client;
@property(readonly, copy, nonatomic) NSString *assertionIdentifier; // @synthesize assertionIdentifier=_assertionIdentifier;
@property(readonly, copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithAssertionIdentifier:(id)arg1 ownerIdentifier:(id)arg2 client:(id)arg3 manager:(id)arg4;

@end

