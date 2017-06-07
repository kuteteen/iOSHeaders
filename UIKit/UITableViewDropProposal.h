//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDropProposal.h>

@class NSIndexPath;

@interface UITableViewDropProposal : UIDropProposal
{
    long long _intent;
    NSIndexPath *_adjustedTargetIndexPath;
}

@property(retain, nonatomic, getter=_adjustedTargetIndexPath, setter=_setAdjustedTargetIndexPath:) NSIndexPath *adjustedTargetIndexPath; // @synthesize adjustedTargetIndexPath=_adjustedTargetIndexPath;
@property(nonatomic) long long intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
- (long long)_dropAction;
- (id)_updatedDropProposalWithDropOperation:(unsigned long long)arg1 dropIntent:(long long)arg2 adjustedTargetIndexPath:(id)arg3;
@property(readonly, nonatomic) long long _dropLocation;
- (id)initWithDropOperation:(unsigned long long)arg1 intent:(long long)arg2;
- (id)initWithDropOperation:(unsigned long long)arg1 dropLocation:(long long)arg2;
- (id)initWithDropOperation:(unsigned long long)arg1;

@end

