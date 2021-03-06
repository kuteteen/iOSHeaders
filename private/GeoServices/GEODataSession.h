//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEODataSession.h"
#import "GEODataSessionRulesProvider.h"

@class GEODataURLSession, GEODataXPCSession, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface GEODataSession : NSObject <GEODataSessionRulesProvider, GEODataSession>
{
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    id <GEODataSession> _urlSession;
    id <GEODataSession> _xpcSession;
}

+ (id)sharedDataSession;
@property(readonly, nonatomic) GEODataXPCSession *xpcSession; // @synthesize xpcSession=_xpcSession;
@property(readonly, nonatomic) GEODataURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation; // @synthesize sessionIsolation=_sessionIsolation;
- (void).cxx_destruct;
- (id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)manifestManager;
- (id)initWithXPCSession:(id)arg1 urlSession:(id)arg2;
- (id)init;
- (id)preferedRulesForRequest:(id)arg1;
- (_Bool)_rules_isOnlineAllowedForRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

