//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserDragManager, IMBalloonPlugin, IMBalloonPluginDataSource, NSData, NSNumber, NSObject, NSString, NSURL, UIViewController;
@protocol CKBrowserViewControllerSendDelegate, UIViewControllerTransitioningDelegate;

@protocol CKBrowserViewControllerProtocol <NSObject>
@property(readonly, nonatomic) _Bool inExpandedPresentation;
@property(readonly, nonatomic) _Bool shouldShowChatChrome;
@property(readonly, nonatomic) long long browserPresentationStyle;
@property(readonly, nonatomic) _Bool mayBeKeptInViewHierarchy;
@property(readonly, nonatomic) _Bool supportsQuickView;
@property(readonly, nonatomic) _Bool wantsOpaqueUI;
@property(readonly, nonatomic) _Bool wantsDarkUI;
@property(nonatomic) NSString *conversationID;
@property(nonatomic) _Bool isiMessage;
@property(retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource;
@property(readonly, nonatomic) IMBalloonPlugin *balloonPlugin;
@property(nonatomic) __weak NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property(retain, nonatomic) UIViewController *presentationViewController;
- (_Bool)isLoaded;
- (void)dismiss;
- (id)initWithBalloonPlugin:(IMBalloonPlugin *)arg1;
- (id)initWithBalloonPlugin:(IMBalloonPlugin *)arg1 dataSource:(IMBalloonPluginDataSource *)arg2;

@optional
+ (_Bool)isVisibleInBrowser;
@property(readonly, nonatomic) __weak id <UIViewControllerTransitioningDelegate> parentTransitioningDelegate;
@property(readonly, nonatomic) long long parentModalPresentationStyle;
@property(retain, nonatomic) NSNumber *adamID;
@property(readonly, nonatomic) _Bool canReplaceDataSource;
@property(nonatomic) long long currentBrowserConsumer;
@property(readonly, nonatomic) CKBrowserDragManager *browserDragManager;
@property(readonly, nonatomic) unsigned long long badgeValue;
- (void)killExtensionProcess;
- (void)setStoreLaunchURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2;
- (void)messageAddedWithDataSource:(IMBalloonPluginDataSource *)arg1;
- (void)viewDidTransitionToCompactPresentation;
- (void)viewWillTransitionToCompactPresentation;
- (void)viewDidTransitionToExpandedPresentation;
- (void)viewWillTransitionToExpandedPresentation;
- (void)browserScrolledOnScreen;
- (void)browserScrolledOffScreen;
- (void)endDisablingUserInteraction;
- (void)beginDisablingUserInteraction;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)saveSnapshotForBrowserViewController;
- (void)deferredForceTearDownRemoteView;
- (void)forceTearDownRemoteView;
- (void)unloadRemoteView;
- (void)loadRemoteView;
- (void)prepareForDisplay;
- (id)cancelTouchesInView;
- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (void)endSuppressingAppearanceMethods;
- (void)beginSuppressingAppearanceMethods;
- (NSData *)requestSnapshotDataForPersistance;
@end
