//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIStoryboardSegueTemplate : NSObject <NSCoding>
{
    NSString *_identifier;
    NSString *_segueClassName;
    UIViewController *_viewController;
    NSString *_destinationViewControllerIdentifier;
    _Bool _performOnViewLoad;
    _Bool _animates;
}

@property(nonatomic) _Bool animates; // @synthesize animates=_animates;
@property(nonatomic) _Bool performOnViewLoad; // @synthesize performOnViewLoad=_performOnViewLoad;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)perform:(id)arg1;
- (id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2;
- (id)_perform:(id)arg1;
- (id)segueWithDestinationViewController:(id)arg1;
- (id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1;
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;
- (CDUnknownBlockType)newDefaultPrepareHandlerForSegue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

