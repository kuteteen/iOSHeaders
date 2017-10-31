//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXComponentInteractionHandler.h"
#import "SXForceTouchComponentInteractionHandler.h"
#import "SXPostActionHandler.h"

@class NSString, SXAction;

@interface SXActionComponentInteractionHandler : NSObject <SXPostActionHandler, SXComponentInteractionHandler, SXForceTouchComponentInteractionHandler>
{
    SXAction *_action;
    id <SXActionManager> _actionManager;
    id <SXActionSerializer> _actionSerializer;
    id <SXAnalyticsReportingProvider> _analyticsReportingProvider;
}

@property(readonly, nonatomic) id <SXAnalyticsReportingProvider> analyticsReportingProvider; // @synthesize analyticsReportingProvider=_analyticsReportingProvider;
@property(readonly, nonatomic) id <SXActionSerializer> actionSerializer; // @synthesize actionSerializer=_actionSerializer;
@property(readonly, nonatomic) id <SXActionManager> actionManager; // @synthesize actionManager=_actionManager;
@property(readonly, nonatomic) SXAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)commitViewController:(id)arg1;
- (id)previewViewController;
- (void)handledAction:(id)arg1 state:(unsigned long long)arg2;
- (void)handleInteractionType:(unsigned long long)arg1;
- (id)initWithAction:(id)arg1 actionManager:(id)arg2 actionSerializer:(id)arg3 analyticsReportingProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

