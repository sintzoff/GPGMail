/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/EWSRequestOperation.h>

@class EWSSearchExpressionType, NSArray;

@interface EWSFindItemsRequestOperation : EWSRequestOperation
{
    NSArray *_additionalProperties;
    NSArray *_EWSFolderIds;
    EWSSearchExpressionType *_searchExpression;
}

+ (Class)classForResponse;
- (id)initWithSearchExpression:(id)arg1 EWSFolderIdStrings:(id)arg2 additionalProperties:(id)arg3 gateway:(id)arg4;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)dealloc;
- (id)activityString;
- (id)prepareRequest;
@property(retain, nonatomic) EWSSearchExpressionType *searchExpression; // @synthesize searchExpression=_searchExpression;
@property(retain, nonatomic) NSArray *EWSFolderIdStrings; // @synthesize EWSFolderIdStrings=_EWSFolderIds;
@property(retain, nonatomic) NSArray *additionalProperties; // @synthesize additionalProperties=_additionalProperties;

@end
