//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MFMessageBodyParserObject : NSObject
{
    double _timeoutTime;
    _Bool _shouldAbort;
    _Bool _didTimeout;
    _Bool _copyBlocks;
    double _timeoutInterval;
}

@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
- (_Bool)areBlocksCopied;
- (void)copyBlocks;
- (_Bool)shouldProceedParsing;
- (void)abortParsing;
- (void)messageBodyParserWillBeginParsing:(id)arg1;

@end

