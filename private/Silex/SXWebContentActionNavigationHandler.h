//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXWebContentNavigationHandler.h"

@class NSString;

@interface SXWebContentActionNavigationHandler : NSObject <SXWebContentNavigationHandler>
{
    id <SXActionProvider> _actionProvider;
    id <SXActionManager> _actionManager;
}

@property(readonly, nonatomic) id <SXActionManager> actionManager; // @synthesize actionManager=_actionManager;
@property(readonly, nonatomic) id <SXActionProvider> actionProvider; // @synthesize actionProvider=_actionProvider;
- (void).cxx_destruct;
- (unsigned long long)handleRequest:(id)arg1;
- (id)initWithActionProvider:(id)arg1 actionManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

