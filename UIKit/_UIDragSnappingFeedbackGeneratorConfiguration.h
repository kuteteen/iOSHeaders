//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIDragFeedbackGeneratorConfiguration.h>

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIDragSnappingFeedbackGeneratorConfiguration : _UIDragFeedbackGeneratorConfiguration
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_objectSnappedFeedback;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *objectSnappedFeedback; // @synthesize objectSnappedFeedback=_objectSnappedFeedback;
- (id)feedbackKeyPaths;

@end

