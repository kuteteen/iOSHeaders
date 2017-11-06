//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WatchListKitUI/WLKUIJSObject.h>

#import "WLKUIMediaEntityTypeExport.h"

@class NSString;

@interface WLKUIMediaEntityType : WLKUIJSObject <WLKUIMediaEntityTypeExport>
{
    NSString *_subtype;
    NSString *_category;
    NSString *_collectionType;
}

+ (id)homeVideo;
+ (id)rental;
+ (id)movie;
+ (id)episode;
+ (id)season;
+ (id)show;
@property(retain, nonatomic) NSString *collectionType; // @synthesize collectionType=_collectionType;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMediaEntitySubtype:(id)arg1 category:(id)arg2 collectionType:(id)arg3 appContext:(id)arg4;
- (id)initWithAppContext:(id)arg1;

@end
