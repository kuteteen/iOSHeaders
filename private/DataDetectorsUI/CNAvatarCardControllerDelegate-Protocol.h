//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/NSObject-Protocol.h>

@class CNAvatarCardController, CNContact, NSArray, NSMutableArray, NSString, UIViewController;

@protocol CNAvatarCardControllerDelegate <NSObject>
- (UIViewController *)presentingViewControllerForAvatarCardController:(CNAvatarCardController *)arg1;

@optional
- (_Bool)avatarCardController:(CNAvatarCardController *)arg1 shouldPresentForLocation:(struct CGPoint)arg2;
- (void)avatarCardControllerDidDismiss:(CNAvatarCardController *)arg1;
- (void)avatarCardControllerWillDismiss:(CNAvatarCardController *)arg1;
- (_Bool)avatarCardController:(CNAvatarCardController *)arg1 shouldShowContact:(CNContact *)arg2;
- (void)avatarCardController:(CNAvatarCardController *)arg1 willShowActions:(NSMutableArray *)arg2;
- (NSArray *)avatarCardController:(CNAvatarCardController *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
- (long long)avatarCardController:(CNAvatarCardController *)arg1 presentationResultForLocation:(struct CGPoint)arg2;
@end
