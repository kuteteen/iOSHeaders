//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class MPArtworkCatalog, NSString, SKUIArtworkList, SSLookupItemArtwork;

@interface MSCLStoreItem : NSObject <NSCopying, NSSecureCoding>
{
    MPArtworkCatalog *_artworkCatalog;
    SKUIArtworkList *_artworkList;
    SSLookupItemArtwork *_artworkTemplate;
    NSString *_artistName;
    NSString *_collectionName;
    NSString *_displayName;
    NSString *_itemIdentifier;
    NSString *_kind;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property(retain, nonatomic) SSLookupItemArtwork *artworkTemplate; // @synthesize artworkTemplate=_artworkTemplate;
@property(copy, nonatomic) SKUIArtworkList *artworkList; // @synthesize artworkList=_artworkList;
@property(retain, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyMediaSocialPostItem;
- (id)initWithMPModelObject:(id)arg1;
- (id)initWithItemDictionary:(id)arg1;

@end

