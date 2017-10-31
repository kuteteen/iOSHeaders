//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICStoreArtworkInfo, NSArray, NSString;

@interface MPExportableArtworkProperties : NSObject
{
    NSString *_resolvedURLString;
    NSArray *_artworkTemplateItems;
    unsigned long long _mediaType;
    long long _mediaLibraryArtworkType;
}

@property(nonatomic) long long mediaLibraryArtworkType; // @synthesize mediaLibraryArtworkType=_mediaLibraryArtworkType;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSArray *artworkTemplateItems; // @synthesize artworkTemplateItems=_artworkTemplateItems;
@property(copy, nonatomic) NSString *resolvedURLString; // @synthesize resolvedURLString=_resolvedURLString;
- (void).cxx_destruct;
@property(readonly, nonatomic) ICStoreArtworkInfo *artworkInfo;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

