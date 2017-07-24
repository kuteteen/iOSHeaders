//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICStoreRequestContext, ICUserVerificationContext;

@interface ICUserVerificationRequest : NSObject <NSCopying>
{
    long long _qualityOfService;
    ICStoreRequestContext *_storeRequestContext;
    ICUserVerificationContext *_verificationContext;
}

@property(readonly, copy, nonatomic) ICUserVerificationContext *verificationContext; // @synthesize verificationContext=_verificationContext;
@property(copy, nonatomic) ICStoreRequestContext *storeRequestContext; // @synthesize storeRequestContext=_storeRequestContext;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
- (void).cxx_destruct;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVerificationContext:(id)arg1;

@end
