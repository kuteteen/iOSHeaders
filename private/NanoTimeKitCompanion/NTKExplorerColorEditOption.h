//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKExplorerColorEditOption : NTKEnumeratedEditOption
{
}

+ (id)_localizedNameForValue:(unsigned long long)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)optionWithColor:(unsigned long long)arg1;
- (id)_valueToFaceBundleStringDict;
@property(readonly, nonatomic) unsigned long long color;
- (long long)swatchStyle;

@end

