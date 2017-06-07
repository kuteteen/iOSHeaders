//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <PhotosUI/ICQBannerViewDelegate-Protocol.h>

@class ICQOffer, NSString, PLSyncProgressView, PUPhotosGlobalFooterBannerView, UILabel;
@protocol PUPhotosGlobalFooterViewDelegate;

@interface PUPhotosGlobalFooterView : UICollectionReusableView <ICQBannerViewDelegate>
{
    unsigned long long _imageCount;
    unsigned long long _videoCount;
    unsigned long long _otherCount;
    unsigned long long _pendingCount;
    int _importOperation;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PLSyncProgressView *_syncProgressView;
    PUPhotosGlobalFooterBannerView *_cloudBannerView;
    _Bool _needsUpdateCloudOffer;
    _Bool _isUpdatingCloudOffer;
    double _referenceWidth;
    struct {
        _Bool respondsToPresentPurchaseFlow;
        _Bool respondsToDidChangeHeight;
    } _delegateFlags;
    _Bool _shouldShowCloudBanner;
    _Bool __shouldHighlightSubtitle;
    _Bool __shouldHideCloudStatus;
    long long _style;
    NSString *_subtitle;
    id <PUPhotosGlobalFooterViewDelegate> _delegate;
    ICQOffer *__offer;
}

@property(retain, nonatomic, setter=_setOffer:) ICQOffer *_offer; // @synthesize _offer=__offer;
@property(nonatomic, setter=_setShouldHideCloudStatus:) _Bool _shouldHideCloudStatus; // @synthesize _shouldHideCloudStatus=__shouldHideCloudStatus;
@property(nonatomic, setter=_setShouldHighlightSubtitle:) _Bool _shouldHighlightSubtitle; // @synthesize _shouldHighlightSubtitle=__shouldHighlightSubtitle;
@property(nonatomic) __weak id <PUPhotosGlobalFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldShowCloudBanner; // @synthesize shouldShowCloudBanner=_shouldShowCloudBanner;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_handleCloudOfferChangedNotification:(id)arg1;
- (void)_showPurchaseFlow;
- (void)bannerView:(id)arg1 action:(long long)arg2 parameters:(id)arg3 dismiss:(_Bool)arg4;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)layoutSubviews;
- (void)_updateFonts;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateSubviewsOrdering;
- (void)_updateSubviews;
- (void)_completeOfferUpdateWithOffer:(id)arg1;
- (void)_updateCloudOfferIfNeeded;
- (void)invalidateCloudOffer;
- (void)setPendingCount:(unsigned long long)arg1 importOperation:(int)arg2;
- (void)setImageCount:(unsigned long long)arg1 videoCount:(unsigned long long)arg2 otherCount:(unsigned long long)arg3;
- (void)setSubtitle:(id)arg1 shouldHightlight:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

