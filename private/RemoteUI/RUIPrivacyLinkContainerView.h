//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "RemoteUITableFooter.h"

@class NSDictionary, NSString, OBPrivacyLinkController;

@interface RUIPrivacyLinkContainerView : UIView <RemoteUITableFooter>
{
    NSDictionary *_attributes;
    OBPrivacyLinkController *_linkController;
}

@property(readonly) OBPrivacyLinkController *linkController; // @synthesize linkController=_linkController;
- (void).cxx_destruct;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;
- (void)layoutSubviews;
- (void)configureInPage:(id)arg1;
- (id)initWithAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

