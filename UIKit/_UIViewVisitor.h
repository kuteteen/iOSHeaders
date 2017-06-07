//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIViewVisitor : NSObject
{
    _Bool _visitMaskViews;
    _Bool _tracksHierarchy;
    _Bool __currentlyVisitingHierarchy;
    unsigned long long _traversalDirection;
}

+ (void)_startTraversalOfVisitor:(id)arg1 withView:(id)arg2;
+ (void)_removeHierarchyTrackingVisitor:(id)arg1;
+ (void)_addHierarchyTrackingVisitor:(id)arg1;
@property(readonly, nonatomic) unsigned long long traversalDirection; // @synthesize traversalDirection=_traversalDirection;
@property(nonatomic) _Bool _currentlyVisitingHierarchy; // @synthesize _currentlyVisitingHierarchy=__currentlyVisitingHierarchy;
@property(nonatomic) _Bool tracksHierarchy; // @synthesize tracksHierarchy=_tracksHierarchy;
@property(nonatomic) _Bool visitMaskViews; // @synthesize visitMaskViews=_visitMaskViews;
- (_Bool)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (_Bool)_visitView:(id)arg1;
- (id)initWithTraversalDirection:(unsigned long long)arg1;

@end

