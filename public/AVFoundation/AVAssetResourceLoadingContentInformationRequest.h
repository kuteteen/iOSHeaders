//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetResourceLoadingContentInformationRequestInternal, NSArray, NSDate, NSString;

@interface AVAssetResourceLoadingContentInformationRequest : NSObject
{
    AVAssetResourceLoadingContentInformationRequestInternal *_contentInformationRequest;
}

- (_Bool)isDiskCachingPermitted;
- (void)setDiskCachingPermitted:(_Bool)arg1;
@property(copy, nonatomic) NSDate *renewalDate;
@property(nonatomic, getter=isByteRangeAccessSupported) _Bool byteRangeAccessSupported;
@property(nonatomic) long long contentLength;
@property(readonly, nonatomic) NSArray *allowedContentTypes;
@property(copy, nonatomic) NSString *contentType;
- (id)propertyList;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithLoadingRequest:(id)arg1 allowedContentTypes:(id)arg2;
- (id)init;

@end

