//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/CSSearchableItem.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface MDSearchableItem : CSSearchableItem
{
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSURL *thumbnailURL;
@property(copy) NSData *thumbnailImageData;
@property(copy) NSURL *contentURL;
@property(copy) NSString *contentUTI;
@property(copy) NSString *secondaryDisplayName;
@property(copy) NSString *displayName;
- (void)_standardizeDeprecatedProperties:(id)arg1;
@property(readonly, copy) NSString *localizedDisplayName;
@property(retain) NSDictionary *attributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributes:(id)arg3;

@end

