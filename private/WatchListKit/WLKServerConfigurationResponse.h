//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDate, NSDictionary, NSString;

@interface WLKServerConfigurationResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_responseDictionary;
    NSDate *_expirationDate;
    unsigned long long _environmentHash;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long environmentHash; // @synthesize environmentHash=_environmentHash;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isValid;
@property(readonly, nonatomic) NSString *vppaStatus;
@property(readonly, nonatomic) NSArray *orderedChannels;
@property(readonly, nonatomic) NSDictionary *requiredRequestKeyValuePairsDictionary;
@property(readonly, nonatomic) NSDictionary *serverRoutesDictionary;
@property(readonly, nonatomic) NSDictionary *endpointsDictionary;
- (id)dictionaryRepresentation;
- (id)initWithServerResponseDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3;
- (id)initWithDictionary:(id)arg1;

@end

