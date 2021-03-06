//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AAUIServerHook.h"

@class AAUIServerHookResponse, NSString;

@interface AAUIDeviceToDeviceEncryptionHook : NSObject <AAUIServerHook>
{
    id <AAUIServerHookDelegate> delegate;
    NSString *_altDSID;
    NSString *_context;
}

@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)_performHSAUpgradeWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldMatchModel:(id)arg1;
- (_Bool)shouldMatchElement:(id)arg1;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithAltDSID:(id)arg1 upgradeContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property(readonly) Class superclass;

@end

