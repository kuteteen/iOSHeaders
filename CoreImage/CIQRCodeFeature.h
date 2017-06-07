//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFeature.h>

#import <CoreImage/NSCopying-Protocol.h>
#import <CoreImage/NSSecureCoding-Protocol.h>

@class CIQRCodeDescriptor, NSString;

@interface CIQRCodeFeature : CIFeature <NSSecureCoding, NSCopying>
{
    struct CGRect bounds;
    struct CGPoint topLeft;
    struct CGPoint topRight;
    struct CGPoint bottomLeft;
    struct CGPoint bottomRight;
    CIQRCodeDescriptor *symbolDescriptor;
}

+ (id)featureWithInternalRepresentation:(CDStruct_1b0b1413 *)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly) CIQRCodeDescriptor *symbolDescriptor; // @synthesize symbolDescriptor;
@property(readonly) struct CGPoint bottomRight; // @synthesize bottomRight;
@property(readonly) struct CGPoint bottomLeft; // @synthesize bottomLeft;
@property(readonly) struct CGPoint topRight; // @synthesize topRight;
@property(readonly) struct CGPoint topLeft; // @synthesize topLeft;
@property(readonly) struct CGRect bounds; // @synthesize bounds;
@property(readonly) NSString *messageString;
- (id)initWithInternalRepresentation:(CDStruct_1b0b1413 *)arg1;
- (void)dealloc;
- (id)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

