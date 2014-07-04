/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSViewController.h"

@class ConversationViewController, MailStackViewController, NSView, NoSelectionPlaceholderView;

@interface ViewingPaneViewController : NSViewController
{
    NoSelectionPlaceholderView *_placeholderView;
    ConversationViewController *_conversationViewController;
    MailStackViewController *_stackViewController;
    NSView *_snapshotView;
}

@property(retain, nonatomic) NSView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) MailStackViewController *stackViewController; // @synthesize stackViewController=_stackViewController;
@property(retain, nonatomic) ConversationViewController *conversationViewController; // @synthesize conversationViewController=_conversationViewController;
@property(retain, nonatomic) NoSelectionPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void)_snapshotTimeout;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setShowTopDividerEdgeOnly:(BOOL)arg1;
- (void)setShowDividerEdge:(BOOL)arg1;
- (void)_displayStackView;
- (void)_displayConversationView;
- (void)_displayNoSelectionPlaceholder;
- (id)currentMessageSelection;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (void)setView:(id)arg1;
- (id)view;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end
