//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PUEditPluginManager : NSObject
{
    unsigned long long _mediaType;
    NSArray *__plugins;
}

+ (id)sharedManagerForMediaType:(unsigned long long)arg1;
@property(copy, nonatomic, setter=_setPlugins:) NSArray *_plugins; // @synthesize _plugins=__plugins;
@property(readonly) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (id)pluginActivities;
- (void)_discoveredAvailableExtensions:(id)arg1;
- (void)rediscoverAvailablePlugins;
- (id)_allowedPluginTypes;
- (_Bool)hasPlugins;
- (id)_initWithMediaType:(unsigned long long)arg1;

@end

