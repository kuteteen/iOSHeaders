//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, TKTokenDriverDelegate;

@interface TKTokenDriver : NSObject
{
    NSMutableDictionary *_contexts;
    id <TKTokenDriverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tokens;
    NSDictionary *_extensionAttributes;
}

+ (id)driver;
@property(retain) NSDictionary *extensionAttributes; // @synthesize extensionAttributes=_extensionAttributes;
@property(retain) NSMutableDictionary *tokens; // @synthesize tokens=_tokens;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <TKTokenDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)releaseTokenWithTokenID:(id)arg1;
- (void)getTokenEndpointWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)invalidateToken:(id)arg1;
- (void)addTokenDriverContext:(id)arg1;
- (void)removeTokenEndpoint:(id)arg1;
- (id)tokenIDForInstanceID:(id)arg1;
- (void)getTokenWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly) NSString *classID;
- (id)init;

@end

