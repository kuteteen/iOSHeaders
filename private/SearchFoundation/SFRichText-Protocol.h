//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFText-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFRichText <SFText>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSArray *formattedTextPieces;
@property(copy, nonatomic) NSArray *icons;
@property(copy, nonatomic) NSString *contentAdvisory;
@property(nonatomic) double starRating;
@end
