//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "TabDraggingInfo-Protocol.h"

@protocol TabDraggingDestination <NSObject>

@optional
@property(readonly, nonatomic) BOOL wantsPeriodicTabDraggingUpdates;
- (void)tabDraggingEnded:(id <TabDraggingInfo>)arg1;
- (void)concludeTabDragOperation:(id <TabDraggingInfo>)arg1;
- (BOOL)performTabDragOperation:(id <TabDraggingInfo>)arg1;
- (BOOL)prepareForTabDragOperation:(id <TabDraggingInfo>)arg1;
- (void)tabDraggingExited:(id <TabDraggingInfo>)arg1;
- (unsigned long long)tabDraggingUpdated:(id <TabDraggingInfo>)arg1;
- (unsigned long long)tabDraggingEntered:(id <TabDraggingInfo>)arg1;
@end

