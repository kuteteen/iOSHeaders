//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProtocolBuffer/NSSecureCoding-Protocol.h>

@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>
{
}

+ (id)options;
+ (_Bool)supportsSecureCoding;
- (id)formattedText;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1;
- (id)init;

@end

