//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBImage;

@protocol _SFPBMediaOffer <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasImage;
@property(retain, nonatomic) _SFPBImage *image;
@property(readonly, nonatomic) _Bool hasIsEnabled;
@property(nonatomic) _Bool isEnabled;
@property(readonly, nonatomic) _Bool hasOfferIdentifier;
@property(copy, nonatomic) NSString *offerIdentifier;
@property(readonly, nonatomic) _Bool hasSublabel;
@property(copy, nonatomic) NSString *sublabel;
@property(readonly, nonatomic) _Bool hasActionItem;
@property(retain, nonatomic) _SFPBActionItem *actionItem;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
