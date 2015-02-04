/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MCGmailLabel.h"
#import "MCMailbox.h"
#import "MFUIMailbox.h"

@class MCError, MCSafeValueCache, MFCriterion, MFMailAccount, MFMessageStore, NSArray, NSMutableIndexSet, NSMutableSet, NSString;

@interface MFMailbox : NSObject <MCGmailLabel, MCMailbox, MFUIMailbox>
{
    NSString *_mailboxName;
    unsigned long long _attributes;
    int _type;
    BOOL _needsToSaveMailboxName;
    MFMailAccount *_account;
    NSMutableSet *_reservedPathComponents;
    id _countsLock;
    unsigned long long _displayCount;
    unsigned long long _unseenCount;
    unsigned long long _deletedCount;
    BOOL _countsWereLoaded;
    struct __CFTree *_tree;
    NSString *_pendingNameChange;
    BOOL _isSmartMailbox;
    MCSafeValueCache *_criteriaCache;
    BOOL _allCriteriaMustBeSatisfied;
    NSString *_realFullPath;
    unsigned long long _numberOfVisibleChildren;
    NSMutableIndexSet *_visibleChildrenIndexes;
    NSArray *_sortedChildren;
    BOOL _sortedChildrenAreUpToDate;
    BOOL _failedToOpen;
    MCError *_openFailureError;
    id _displayIndexLock;
    unsigned long long _displayIndex;
    BOOL _isManuallySorted;
    BOOL _isVisibleFlaggedMailbox;
    BOOL _isPublicOrShared;
    id _dontIndexFlagLock;
    BOOL _dontIndexFlagWritten;
    id _typeAndRepresentedAccountLock;
    MFMailAccount *_representedAccount;
    NSString *_uuid;
    id _attributesLock;
    BOOL _storeIsReadOnly;
    BOOL _uuidUpdatedInDatabase;
    BOOL _respectsMailboxExclusions;
    long long _smartMailboxVersion;
    NSString *_syncId;
    NSString *_pathComponent;
    long long _unreadCountQueryObserverID;
    MFMessageStore *_searchStore;
}

+ (void)queueUpdateCountsForMailboxes:(id)arg1;
+ (void)setCanMarkUserInfoAsDirty:(BOOL)arg1;
+ (void)setShouldIndexJunk:(BOOL)arg1;
+ (void)reimportJunk;
+ (void)setShouldIndexTrash:(BOOL)arg1;
+ (BOOL)typeIsGeneric:(int)arg1;
+ (id)displayNameForMessage:(id)arg1 mailboxCriterion:(id)arg2;
+ (id)_mailboxesFromCriterion:(id)arg1;
+ (id)mailboxFromPath:(id)arg1;
+ (id)mailboxWithPersistentIdentifier:(id)arg1;
+ (BOOL)mailboxTypeAllowsDeduplication:(int)arg1;
+ (BOOL)mailboxTypeIsAlwaysUnread:(int)arg1;
+ (BOOL)mailboxTypeAllowsConversations:(int)arg1;
+ (BOOL)isSmartMailboxDictionaryCompatible:(id)arg1;
+ (id)smartMailboxesEnumeratorIncludingFlagMailboxes:(BOOL)arg1 VIPSenderMailboxes:(BOOL)arg2;
+ (id)smartMailboxWithIdentifier:(id)arg1;
+ (id)_smartMailboxWithIdentifier:(id)arg1 inArray:(id)arg2;
+ (void)removeAllSmartMailboxPlaceholders;
+ (void)addSmartMailboxPlaceholder:(id)arg1;
+ (id)smartMailboxPlaceholders;
+ (void)setSmartMailboxes:(id)arg1;
+ (id)smartMailboxes;
+ (void)setRefreshUnreadCountOnSelect:(BOOL)arg1;
+ (BOOL)refreshUnreadCountOnSelect;
+ (BOOL)logMailboxUUIDErrors;
+ (void)initialize;
@property(copy) NSString *uuid; // @synthesize uuid=_uuid;
@property MFMessageStore *searchStore; // @synthesize searchStore=_searchStore;
@property BOOL respectsMailboxExclusions; // @synthesize respectsMailboxExclusions=_respectsMailboxExclusions;
@property BOOL uuidUpdatedInDatabase; // @synthesize uuidUpdatedInDatabase=_uuidUpdatedInDatabase;
@property long long unreadCountQueryObserverID; // @synthesize unreadCountQueryObserverID=_unreadCountQueryObserverID;
@property(copy) NSString *primitiveMailboxName; // @synthesize primitiveMailboxName=_mailboxName;
@property(copy) NSString *primitivePathComponent; // @synthesize primitivePathComponent=_pathComponent;
@property BOOL storeIsReadOnly; // @synthesize storeIsReadOnly=_storeIsReadOnly;
@property(retain) NSString *syncId; // @synthesize syncId=_syncId;
@property long long smartMailboxVersion; // @synthesize smartMailboxVersion=_smartMailboxVersion;
- (void)_addressBookDidChange:(id)arg1;
- (BOOL)isEqualToSmartMailbox:(id)arg1;
- (BOOL)isValidDestinationMailbox;
- (BOOL)isPlaceholder;
- (BOOL)allowsMoveDeletedMessagesToTrash;
- (id)copyWithZone:(id)arg1;
- (void)setFailedToOpen:(BOOL)arg1 error:(id)arg2;
- (id)openFailureError;
- (BOOL)failedToOpen;
- (BOOL)isStoreReadOnlyCreateIfNeeded:(BOOL)arg1;
- (id)storeCreateIfNeeded:(BOOL)arg1;
- (id)store;
- (void)setMessageCounts:(id)arg1;
@property(readonly) unsigned long long deletedCount;
- (void)setDisplayCount:(unsigned long long)arg1;
- (unsigned long long)displayCount;
- (BOOL)_isNormalMailbox;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)arg1;
- (BOOL)allCriteriaMustBeSatisfied;
- (BOOL)criteriaAreValid:(id *)arg1;
- (id)_abGroupsUsedInCriteria;
- (void)setCriteria:(id)arg1;
- (id)modifiedVIPCriterionForInboxOnly;
@property(readonly) MFCriterion *criterion;
- (id)_mailboxExclusionCriteria;
- (id)_updatedCriteria:(id)arg1;
- (id)criteria;
- (id)_ancestralAccount;
- (void)setUserInfoIsDirty:(BOOL)arg1;
- (BOOL)_userInfoIsDirty;
- (void)_saveMailboxesWithDirtyUserInfoWithDelay;
- (void)_saveMailboxesWithDirtyUserInfo;
- (void)setUserInfoWithDictionary:(id)arg1;
- (id)userInfoDictionary;
- (void)saveUserInfo;
- (void)assignNewUUID;
- (void)forceSaveUserInfo;
- (void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)userInfoBoolForKey:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)userInfoObjectForKey:(id)arg1;
- (void)_userInfoDidLoad:(id)arg1;
- (id)_loadUserInfo;
- (void)_updateDontIndexFlagFile;
- (BOOL)isIndexable;
@property unsigned long long attributes;
- (BOOL)isVisible;
- (BOOL)preferredMessageType;
@property int type;
- (id)description;
- (BOOL)isStoreConvertibleToFolder;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
- (BOOL)isDescendantOfMailbox:(id)arg1;
- (long long)indexToInsertChildMailbox:(id)arg1;
- (id)_URLStringIsSyncable:(BOOL)arg1;
- (id)syncableURLString;
- (id)URLString;
- (id)_URLStringWithAccount:(id)arg1;
- (id)URL;
- (id)pathRelativeToMailbox:(id)arg1;
- (id)tildeAbbreviatedPath;
- (id)realFullPath;
- (id)fullPath;
- (id)accountRelativeFilesystemPath;
- (id)accountRelativePath;
- (id)_stringByAppendingPathComponentsToAccountPath:(id)arg1 relativeToTree:(struct __CFTree *)arg2 generateFileSystemPath:(BOOL)arg3;
- (BOOL)isAllMailMailbox;
- (BOOL)isGmailImportantLabel;
- (BOOL)isPlainSmartMailbox;
- (BOOL)isSpecialMailbox;
- (BOOL)isStore;
- (BOOL)isContainer;
- (void)invalidate;
- (BOOL)isValid;
- (id)applescriptAccount;
- (id)accountURLString;
- (id)account;
- (id)representedAccount;
- (void)setRepresentedAccount:(id)arg1;
- (id)deepCopy;
- (void)_saveMailboxNameIfNeeded;
- (void)flushCriteria;
- (BOOL)hasAlternateParent;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)sortChildren;
- (void)invalidateChildren;
- (BOOL)setChildren:(id)arg1;
- (void)_deleteChildrenWithURLsIfInvalid:(id)arg1 fullPaths:(id)arg2;
- (id)mailboxComparatorWithAccount:(SEL)arg1;
- (id)mutableCopyOfChildrenIncludingHiddenChildren:(BOOL)arg1 hidingGmail:(BOOL)arg2;
- (id)mutableCopyOfChildren;
- (id)unusedChildPathComponent:(id)arg1;
- (id)childWithPathComponent:(id)arg1;
- (id)childWithName:(id)arg1;
- (unsigned long long)indexOfChild:(id)arg1;
- (BOOL)isValidGmailLabel;
- (BOOL)isGmailWhiteMailboxOrDescendant:(BOOL)arg1;
- (id)_gmailWhiteMailboxChild;
- (id)sortedChildAtIndex:(unsigned long long)arg1 hidingGmail:(BOOL)arg2;
- (id)visibleChildAtIndex:(unsigned long long)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfChildren;
- (id)depthFirstEnumerator;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1;
- (id)childEnumerator;
- (unsigned long long)numberOfSortedChildrenHidingGmail:(BOOL)arg1;
- (unsigned long long)numberOfVisibleChildrenHidingGmail:(BOOL)arg1;
- (void)_updateSortedChildrenIfNeeded;
- (unsigned long long)suggestedDisplayIndexForChildMailbox:(id)arg1 hidingGmail:(BOOL)arg2;
@property BOOL isVisibleFlaggedMailbox;
@property BOOL isManuallySorted;
- (BOOL)displayIndexCanBeModified;
@property unsigned long long displayIndex;
- (void)_invalidateVisibleChildrenCaches;
- (BOOL)hasChildren;
- (id)children;
@property(readonly) BOOL hasMessages;
- (unsigned long long)unseenCount;
- (BOOL)unseenCountIsKnown;
- (void)notifyForUnreadCount:(unsigned long long)arg1 andOldUnreadCount:(unsigned long long)arg2;
- (void)_enqueueUnreadCountChangeNotification;
- (void)setIsPublicOrShared:(BOOL)arg1;
- (BOOL)isPublicOrShared;
- (void)setName:(id)arg1 pathComponent:(id)arg2;
- (id)name;
@property(readonly) NSString *pathComponent;
- (BOOL)canBeRenamed;
- (void)setPendingNameChange:(id)arg1;
- (id)labelName;
- (id)genericDisplayName;
- (id)displayName;
- (id)displayNameUsingAccountNameIfSpecial:(BOOL)arg1;
- (id)extendedDisplayName;
- (void)cancelUnreadCountQuery;
- (id)representedMailbox;
- (id)dictionaryRepresentation;
- (id)persistentIdentifier;
- (id)initWithDictionaryRepresentation:(id)arg1 copyUUID:(BOOL)arg2;
- (id)initWithMailbox:(id)arg1;
- (id)initWithName:(id)arg1 pathComponent:(id)arg2 attributes:(unsigned long long)arg3 forAccount:(id)arg4;
- (id)initWithName:(id)arg1 attributes:(unsigned long long)arg2 forAccount:(id)arg3;
- (id)initWithAccount:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isSmartMailboxExpressibleInTigerSchema;
- (long long)smartMailboxEncodingVersion;
- (void)_registerForSmartMailboxNotification;
@property BOOL isSmartMailbox;
- (id)backupID;
- (long long)backupType;
- (BOOL)isPointedToBySmartMailbox:(id)arg1;
- (BOOL)isPointedToBySmartMailbox:(id)arg1 traversedMailboxes:(id)arg2;
- (BOOL)isPointedToByCriterion:(id)arg1 traversedMailboxes:(id)arg2;
- (id)valueInMessagesWithUniqueID:(id)arg1;
- (void)setMailboxName:(id)arg1;
- (id)mailboxName;
- (void)removeFromMessagesAtIndex:(unsigned long long)arg1;
- (id)messages;
- (id)applescriptChildren;
- (id)applescriptContainer;
- (id)objectSpecifier;

@end
