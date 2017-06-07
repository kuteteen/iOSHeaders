//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDICActionActivity : UIActivity
{
    NSString *_actionActivityType;
    NSString *_activityImageName;
    NSString *_localizedTitle;
    CDUnknownBlockType _activityPerformingHandler;
    CDUnknownBlockType _activityFinishedPerformingHandler;
}

+ (id)newLegacyDelegationActionActivityForSaveToCameraRoll;
+ (id)newLegacyDelegationActionActivityForCopy;
+ (id)newLegacyDelegationActionActivityForPrint;
+ (id)newPreviewActionActivity;
+ (long long)activityCategory;
@property(copy, nonatomic) CDUnknownBlockType activityFinishedPerformingHandler; // @synthesize activityFinishedPerformingHandler=_activityFinishedPerformingHandler;
@property(copy, nonatomic) CDUnknownBlockType activityPerformingHandler; // @synthesize activityPerformingHandler=_activityPerformingHandler;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithActivityType:(id)arg1 activityImageName:(id)arg2 localizedTitle:(id)arg3;
- (id)description;

@end

