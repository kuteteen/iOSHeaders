//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelKind.h>

@interface MPModelSongKind : MPModelKind
{
    unsigned long long _variants;
    unsigned long long _options;
}

+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long variants; // @synthesize variants=_variants;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (shared_ptr_cf7b8a22)predicateWithBaseProperty:(struct ModelPropertyBase *)arg1;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;
- (void)applyToView:(shared_ptr_f45adb51)arg1 withContext:(id)arg2;

@end

