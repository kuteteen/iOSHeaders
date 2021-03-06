//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNRectangleObservation.h>

@class CIBarcodeDescriptor, NSDictionary, NSString;

@interface VNBarcodeObservation : VNRectangleObservation
{
    NSString *_cachedPayloadStringValue;
    NSString *_symbology;
    CIBarcodeDescriptor *_barcodeDescriptor;
    NSDictionary *_acbsBarcodeInfo;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic, setter=setACBSBarcodeInfo:) NSDictionary *acbsBarcodeInfo; // @synthesize acbsBarcodeInfo=_acbsBarcodeInfo;
@property(readonly, nonatomic) CIBarcodeDescriptor *barcodeDescriptor; // @synthesize barcodeDescriptor=_barcodeDescriptor;
@property(readonly, copy, nonatomic) NSString *symbology; // @synthesize symbology=_symbology;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *payloadStringValue;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbology:(id)arg1 descriptor:(id)arg2 boundingBox:(struct CGRect)arg3;
- (id)initWithSymbology:(id)arg1 descriptor:(id)arg2 topLeft:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4 bottomRight:(struct CGPoint)arg5 topRight:(struct CGPoint)arg6;

@end

