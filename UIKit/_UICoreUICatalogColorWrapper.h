//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>

@class NSMutableDictionary, NSString, UIColor;

@interface _UICoreUICatalogColorWrapper : NSObject <NSCoding>
{
    NSString *_nibLoadingBundleID;
    NSMutableDictionary *_colorCache;
    _Bool _hasLoggedFailure;
    NSString *_name;
    NSString *_bundleID;
    UIColor *_fallbackColor;
}

@property(readonly, nonatomic) UIColor *fallbackColor; // @synthesize fallbackColor=_fallbackColor;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *color;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCoreUICatalogColor:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_uikit_valueForTraitCollection:(id)arg1;
- (_Bool)_uikit_variesByTraitCollections;
- (struct CGColor *)cgColorForTraitCollection:(id)arg1;
- (void)setCachedColor:(id)arg1 forDisplayGamut:(long long)arg2;
- (id)cachedColorForDisplayGamut:(long long)arg1;
- (id)colorCache;
- (id)nibLoadingBundle;
- (id)bundle;
- (id)initWithName:(id)arg1 bundleID:(id)arg2 fallbackColor:(id)arg3;

@end
