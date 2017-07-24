//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOStateCapturing-Protocol.h>

@class GEOApplicationAuditToken, NSData, NSDictionary, NSString, NSURL;
@protocol OS_xpc_object;

@interface GEODataRequest : NSObject <GEOStateCapturing>
{
    NSURL *_URL;
    NSObject<OS_xpc_object> *_xpcRequest;
    GEOApplicationAuditToken *_auditToken;
    NSDictionary *_additionalHTTPHeaders;
    NSData *_bodyData;
    NSData *_cachedData;
    double _timeoutInterval;
    BOOL _HTTPMethod;
    int _kind;
    _Bool _HTTPShouldHandleCookies;
    _Bool _allowsCellularAccess;
    BOOL _allowedRequestMode;
    _Bool _allowTLSSessionTicketUse;
    _Bool _allowTFOUse;
}

@property(readonly, nonatomic) _Bool allowTFOUse; // @synthesize allowTFOUse=_allowTFOUse;
@property(readonly, nonatomic) _Bool allowTLSSessionTicketUse; // @synthesize allowTLSSessionTicketUse=_allowTLSSessionTicketUse;
@property(readonly, nonatomic) BOOL HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
@property(readonly, nonatomic) int kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) NSDictionary *additionalHTTPHeaders; // @synthesize additionalHTTPHeaders=_additionalHTTPHeaders;
@property(copy, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property(readonly, nonatomic) BOOL allowedRequestMode; // @synthesize allowedRequestMode=_allowedRequestMode;
@property(readonly, nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(readonly, nonatomic) _Bool HTTPShouldHandleCookies; // @synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, copy, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(readonly, copy, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcRequest; // @synthesize xpcRequest=_xpcRequest;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithKind:(int)arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 HTTPMethod:(BOOL)arg7 bodyData:(id)arg8 HTTPShouldHandleCookies:(_Bool)arg9 allowsCellularAccess:(_Bool)arg10 allowTLSSessionTicketUse:(_Bool)arg11 allowTFOUse:(_Bool)arg12 allowedRequestMode:(BOOL)arg13 userAgent:(id)arg14 entityTag:(id)arg15 cachedData:(id)arg16;
- (id)init;
- (id)captureStateWithHints:(struct os_state_hints_s *)arg1;
- (id)newURLRequest;
- (id)updatedRequestWithNewProtobufRequest:(id)arg1;
- (id)updatedRequestWithNewBodyData:(id)arg1;
- (id)initHttpOnlyRequestWithKind:(int)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 allowCellularUse:(_Bool)arg5 compressRequest:(_Bool)arg6;
- (id)initWithKind:(int)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 auditToken:(id)arg5 traits:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
