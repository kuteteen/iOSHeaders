//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;
@protocol INParameter;

@protocol INParameter <NSObject>
@property(readonly, nonatomic) id parameterValue;
@property(readonly, copy, nonatomic) NSString *parameterKeyPath;
@property(readonly, nonatomic) id parameterizedObject;
- (unsigned long long)indexForSubKeyPath:(NSString *)arg1;
- (void)setIndex:(unsigned long long)arg1 forSubKeyPath:(NSString *)arg2;
- (_Bool)isEqualToParameter:(id <INParameter>)arg1;
@end

