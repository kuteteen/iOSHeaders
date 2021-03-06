//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface SFDeviceAssetQuery : NSObject
{
    _Bool _forEngagement;
    _Bool _legacyFormats;
    struct LogCategory *_ucat;
    NSString *_productType;
    NSString *_mappedProductType;
    NSString *_marketingProductNumber;
    NSString *_color;
    NSString *_colorHousing;
    NSString *_colorCoverGlass;
    unsigned long long _version;
    NSDictionary *_additionalQueryParameters;
}

+ (_Bool)deviceWantsLegacyFormats;
@property(readonly, nonatomic) NSDictionary *additionalQueryParameters; // @synthesize additionalQueryParameters=_additionalQueryParameters;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *colorCoverGlass; // @synthesize colorCoverGlass=_colorCoverGlass;
@property(readonly, nonatomic) NSString *colorHousing; // @synthesize colorHousing=_colorHousing;
@property(readonly, nonatomic) NSString *color; // @synthesize color=_color;
@property(readonly, nonatomic) NSString *marketingProductNumber; // @synthesize marketingProductNumber=_marketingProductNumber;
@property(retain, nonatomic) NSString *mappedProductType; // @synthesize mappedProductType=_mappedProductType;
@property(readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) _Bool legacyFormats; // @synthesize legacyFormats=_legacyFormats;
@property(readonly, nonatomic) _Bool forEngagement; // @synthesize forEngagement=_forEngagement;
@property(readonly, nonatomic) struct LogCategory *ucat; // @synthesize ucat=_ucat;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *stringIdentifier;
- (id)loggingProductType;
- (id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2;
- (id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2 engagement:(_Bool)arg3;
- (id)initWithHomePodColor:(unsigned long long)arg1;
- (id)initWithWatchProductType:(id)arg1 marketingProductNumber:(id)arg2;
- (id)initWithPhoneProductType:(id)arg1 colorHousing:(id)arg2 colorCoverGlass:(id)arg3;
- (id)initWithProductType:(id)arg1;

@end

