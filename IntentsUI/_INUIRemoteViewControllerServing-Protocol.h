//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IntentsUI/NSObject-Protocol.h>

@class INInteraction, NSSet;

@protocol _INUIRemoteViewControllerServing <NSObject>
- (void)requestDesiredSize;
- (void)queryRepresentedPropertiesWithCompletion:(void (^)(NSArray *))arg1;
- (void)configureForParameters:(NSSet *)arg1 ofInteraction:(INInteraction *)arg2 context:(unsigned long long)arg3 completion:(void (^)(_Bool, NSSet *, struct CGSize, NSError *))arg4;
@end

