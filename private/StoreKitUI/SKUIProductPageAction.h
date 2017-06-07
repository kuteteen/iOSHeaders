//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, SKUIItem, UIViewController;

@interface SKUIProductPageAction : NSObject
{
    long long _actionType;
    SKUIItem *_item;
    NSString *_urlTitle;
    CDUnknownBlockType _viewControllerBlock;
    NSURL *_url;
}

+ (id)actionWithType:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType viewControllerBlock; // @synthesize viewControllerBlock=_viewControllerBlock;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(retain, nonatomic) SKUIItem *item; // @synthesize item=_item;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *viewController;

@end
