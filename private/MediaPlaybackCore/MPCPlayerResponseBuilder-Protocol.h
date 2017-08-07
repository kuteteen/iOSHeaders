//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPCMediaRemoteController, MPMiddlewareChain, MPModelGenericObject, MPPropertySet, NSIndexPath, NSString, UIView;
@protocol MPCVideoView;

@protocol MPCPlayerResponseBuilder <NSObject>
- (UIView<MPCVideoView> *)playerVideoView:(UIView<MPCVideoView> *)arg1 chain:(MPMiddlewareChain *)arg2;
- (id)playerCommandOptionValue:(id)arg1 forKey:(NSString *)arg2 command:(unsigned int)arg3 chain:(MPMiddlewareChain *)arg4;
- (_Bool)playerCommandEnabled:(_Bool)arg1 command:(unsigned int)arg2 chain:(MPMiddlewareChain *)arg3;
- (_Bool)playerCommandSupported:(_Bool)arg1 command:(unsigned int)arg2 chain:(MPMiddlewareChain *)arg3;
- (long long)playerGlobalItemCount:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (NSIndexPath *)playerPlayingItemIndexPath:(NSIndexPath *)arg1 chain:(MPMiddlewareChain *)arg2;
- (MPModelGenericObject *)playerModelObject:(MPModelGenericObject *)arg1 propertySet:(MPPropertySet *)arg2 atIndexPath:(NSIndexPath *)arg3 chain:(MPMiddlewareChain *)arg4;
- (long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (CDStruct_98c298d5)playerItemDuration:(CDStruct_98c298d5)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(MPMiddlewareChain *)arg3;
- (unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerUpNextItemCount:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerLastChangeDirection:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerShuffleType:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerRepeatType:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerState:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (MPCMediaRemoteController *)controller:(MPCMediaRemoteController *)arg1 chain:(MPMiddlewareChain *)arg2;
@end

