//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SXVideoControlTimingProviding <NSObject>
- (double)upNextAppearanceTimeIntervalForVideo:(id <SXVideo>)arg1;
- (double)moreFromVisibilityTimeIntervalForVideo:(id <SXVideo>)arg1;
- (double)nowPlayingVisibilityTimeIntervalForVideo:(id <SXVideo>)arg1;
- (double)autoHideTimeIntervalForVideo:(id <SXVideo>)arg1;
- (double)autoAppearanceTimeIntervalForVideo:(id <SXVideo>)arg1;
@end

