//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, UIView;

@interface SKUIViewReusePool : NSObject
{
    UIView *_parentView;
    NSMutableDictionary *_reuseClasses;
    NSMutableArray *_viewPool;
}

- (void).cxx_destruct;
- (Class)viewClassWithReuseIdentifier:(id)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)recycleReusableViews:(id)arg1;
- (void)hideUnusedViews;
- (id)dequeueReusableViewWithReuseIdentifier:(id)arg1;
- (id)initWithParentView:(id)arg1;

@end
