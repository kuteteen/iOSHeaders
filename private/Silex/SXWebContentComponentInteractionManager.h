//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SXComponentView;

@interface SXWebContentComponentInteractionManager : NSObject
{
    SXComponentView *_componentView;
    id <SXWebContentInteractionProvider> _interactionProvider;
    id <SXComponentInteractionHandlerManager> _interactionHandlerManager;
    id <SXWebContentComponentInteractionHandlerFactory> _componentInteractionHandlerFactory;
    id <SXComponentInteractionHandler> _currentInteractionHandler;
}

@property(retain, nonatomic) id <SXComponentInteractionHandler> currentInteractionHandler; // @synthesize currentInteractionHandler=_currentInteractionHandler;
@property(readonly, nonatomic) id <SXWebContentComponentInteractionHandlerFactory> componentInteractionHandlerFactory; // @synthesize componentInteractionHandlerFactory=_componentInteractionHandlerFactory;
@property(readonly, nonatomic) __weak id <SXComponentInteractionHandlerManager> interactionHandlerManager; // @synthesize interactionHandlerManager=_interactionHandlerManager;
@property(readonly, nonatomic) id <SXWebContentInteractionProvider> interactionProvider; // @synthesize interactionProvider=_interactionProvider;
@property(readonly, nonatomic) __weak SXComponentView *componentView; // @synthesize componentView=_componentView;
- (void).cxx_destruct;
- (void)manageInteractionHandlerForInteraction:(id)arg1;
- (id)initWithComponentView:(id)arg1 interactionProvider:(id)arg2 interactionHandlerManager:(id)arg3 componentInteractionHandlerFactory:(id)arg4;

@end

