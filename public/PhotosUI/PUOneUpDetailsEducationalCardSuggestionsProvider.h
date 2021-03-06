//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUOneUpSuggestionsProvider.h>

@class PUOneUpAccessoryViewControllersManager;

__attribute__((visibility("hidden")))
@interface PUOneUpDetailsEducationalCardSuggestionsProvider : PUOneUpSuggestionsProvider
{
    PUOneUpAccessoryViewControllersManager *_accessoryViewControllersManager;
}

+ (id)_userDefaults;
+ (void)setDidDisplayEducationalCard:(_Bool)arg1;
+ (_Bool)didDisplayEducationalCard;
@property(readonly, nonatomic) PUOneUpAccessoryViewControllersManager *accessoryViewControllersManager; // @synthesize accessoryViewControllersManager=_accessoryViewControllersManager;
- (void).cxx_destruct;
- (id)requestSuggestionForAsset:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (_Bool)canProvideSuggestionForAsset:(id)arg1;
- (id)initWithAccessoryViewControllersManager:(id)arg1;
- (id)init;

@end

