//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAMPMediaEntity : SADomainObject
{
}

+ (id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaEntity;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *sortTitle;
@property(copy, nonatomic) NSString *releaseDate;
@property(copy, nonatomic) NSString *rawPlaybackInfo;
@property(copy, nonatomic) NSString *mediaType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

