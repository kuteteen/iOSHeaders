//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFDeviceAssetQuery : NSObject
{
    _Bool _forEngagement;
    _Bool _legacyFormats;
    NSString *_productType;
    NSString *_mappedProductType;
    NSString *_marketingProductNumber;
    NSString *_color;
    NSString *_colorHousing;
    NSString *_colorCoverGlass;
    unsigned long long _version;
}

+ (_Bool)deviceWantsLegacyFormats;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *colorCoverGlass; // @synthesize colorCoverGlass=_colorCoverGlass;
@property(readonly, nonatomic) NSString *colorHousing; // @synthesize colorHousing=_colorHousing;
@property(readonly, nonatomic) NSString *color; // @synthesize color=_color;
@property(readonly, nonatomic) NSString *marketingProductNumber; // @synthesize marketingProductNumber=_marketingProductNumber;
@property(retain, nonatomic) NSString *mappedProductType; // @synthesize mappedProductType=_mappedProductType;
@property(readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) _Bool legacyFormats; // @synthesize legacyFormats=_legacyFormats;
@property(readonly, nonatomic) _Bool forEngagement; // @synthesize forEngagement=_forEngagement;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)loggingProductType;
- (id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2 engagement:(_Bool)arg3;
- (id)initWithWatchProductType:(id)arg1 marketingProductNumber:(id)arg2;
- (id)initWithPhoneProductType:(id)arg1 colorHousing:(id)arg2 colorCoverGlass:(id)arg3;
- (id)initWithProductType:(id)arg1;

@end

