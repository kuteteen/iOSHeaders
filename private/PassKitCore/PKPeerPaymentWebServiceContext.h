//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKWebServiceContext.h>

@class NSString, NSURL;

@interface PKPeerPaymentWebServiceContext : PKWebServiceContext
{
    _Bool _devSigned;
    NSURL *_serviceURL;
    NSString *_deviceIdentifier;
    NSString *_pushTopic;
    NSString *_pushToken;
    NSString *_companionSerialNumber;
}

+ (id)contextWithArchive:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *companionSerialNumber; // @synthesize companionSerialNumber=_companionSerialNumber;
@property(nonatomic) _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(readonly, copy, nonatomic) NSString *pushTopic; // @synthesize pushTopic=_pushTopic;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, copy, nonatomic) NSURL *serviceURL; // @synthesize serviceURL=_serviceURL;
- (void).cxx_destruct;
- (void)updateContextWithRegistrationResponse:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
