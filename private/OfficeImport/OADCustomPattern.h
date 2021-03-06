//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADPattern.h>

@class OADBlipRef;

__attribute__((visibility("hidden")))
@interface OADCustomPattern : OADPattern
{
    OADBlipRef *mBlipRef;
    _Bool mIsBlipRefOverridden;
}

+ (id)defaultProperties;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isBlipRefOverridden;
- (void)setBlipRef:(id)arg1;
- (id)blipRef;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (id)initWithDefaults;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

