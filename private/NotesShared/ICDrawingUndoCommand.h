//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDrawingUndoCheckPoint, NSArray, NSString;

@interface ICDrawingUndoCommand : NSObject
{
    _Bool _hide;
    NSArray *_commands;
    NSString *_actionName;
    ICDrawingUndoCheckPoint *_checkPoint;
}

@property(retain, nonatomic) ICDrawingUndoCheckPoint *checkPoint; // @synthesize checkPoint=_checkPoint;
@property(nonatomic) _Bool hide; // @synthesize hide=_hide;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSArray *commands; // @synthesize commands=_commands;
- (void).cxx_destruct;
- (id)undoCommandHidden:(_Bool)arg1;
- (double)renderCost;
@property(readonly, nonatomic) NSArray *visibleCommands;

@end
