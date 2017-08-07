//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSMediaItem-Protocol.h>

@class IKAppMediaItemBridge, NSArray, NSDictionary, NSNumber, NSString;

@interface IKJSMediaItem : IKJSObject <IKJSMediaItem>
{
    NSNumber *_resumeTime;
    IKAppMediaItemBridge *_bridge;
}

@property(readonly, nonatomic) IKAppMediaItemBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)loadKeyDataForURI:(id)arg1 requestData:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)loadContentIdentifierDataForURI:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)loadCertificateDataForURI:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (double)contentProposalPresentationTime;
- (void)setContentProposalPresentationTime:(double)arg1;
- (double)contentProposalAutomaticAcceptanceInterval;
- (void)setContentProposalAutomaticAcceptanceInterval:(double)arg1;
@property(retain, nonatomic) NSString *contentRatingDomain;
@property(retain, nonatomic) NSDictionary *metadata;
@property(retain, nonatomic) NSNumber *resumeTime; // @synthesize resumeTime=_resumeTime;
@property(nonatomic) _Bool isExplicit;
@property(retain, nonatomic) NSString *artworkImageSrcset;
@property(retain, nonatomic) NSString *artworkImageURL;
- (id)ratingBadge;
- (void)setRatingBadge:(id)arg1;
@property(retain, nonatomic) NSNumber *contentRatingRanking;
@property(retain, nonatomic) NSString *description;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSArray *highlightGroups;
@property(retain, nonatomic) NSArray *interstitials;
@property(retain, nonatomic) NSString *externalID;
@property(retain, nonatomic) NSString *url;
@property(retain, nonatomic) NSString *type;
- (void)dealloc;
- (id)initWithType:(id)arg1:(id)arg2;

@end

