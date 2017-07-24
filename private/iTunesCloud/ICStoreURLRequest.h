//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICURLRequest.h>

@class ICJSSignConfiguration, ICStoreRequestContext, NSDictionary, NSString;

@interface ICStoreURLRequest : ICURLRequest
{
    _Bool _shouldUseMescalSigning;
    _Bool _shouldParseBodyData;
    _Bool _shouldRequireURLBag;
    long long _anisetteVersion;
    NSString *_machineDataSyncState;
    NSDictionary *_additionalHTTPCookies;
    ICJSSignConfiguration *_JSSignConfiguration;
}

+ (id)currentConnectionTypeHeader;
@property(copy, nonatomic) ICJSSignConfiguration *JSSignConfiguration; // @synthesize JSSignConfiguration=_JSSignConfiguration;
@property(copy, nonatomic) NSDictionary *additionalHTTPCookies; // @synthesize additionalHTTPCookies=_additionalHTTPCookies;
@property(copy, nonatomic) NSString *machineDataSyncState; // @synthesize machineDataSyncState=_machineDataSyncState;
@property(nonatomic) _Bool shouldRequireURLBag; // @synthesize shouldRequireURLBag=_shouldRequireURLBag;
@property(nonatomic) _Bool shouldParseBodyData; // @synthesize shouldParseBodyData=_shouldParseBodyData;
@property(nonatomic) _Bool shouldUseMescalSigning; // @synthesize shouldUseMescalSigning=_shouldUseMescalSigning;
@property(nonatomic) long long anisetteVersion; // @synthesize anisetteVersion=_anisetteVersion;
- (void).cxx_destruct;
- (id)_stringForCachePolicy:(unsigned long long)arg1;
- (void)_getSignatureDataForRequest:(id)arg1 urlBag:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) ICStoreRequestContext *storeRequestContext;
- (void)buildURLRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2;

@end
