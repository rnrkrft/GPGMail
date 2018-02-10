//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MFRemoteStore.h>

#import "IMAPMailboxDelegate-Protocol.h"
#import "IMAPMessageDataSource-Protocol.h"

@class IMAPCommandPipeline, IMAPDownloadCache, IMAPMailbox, MFIMAPAccount, MFMailbox, NSArray, NSDate, NSMutableArray, NSString;

@interface MFLibraryIMAPStore : MFRemoteStore <IMAPMailboxDelegate, IMAPMessageDataSource>
{
    IMAPMailbox *_IMAPMailbox;
    IMAPDownloadCache *_downloadCache;
    IMAPCommandPipeline *_fetchPipeline;
    NSMutableArray *_recentlyDeletedMessageIDs;
    id _uidNextStatusLock;
    unsigned long long _numberOfAppendsOutstanding;
    id _appendCountLock;
    BOOL _supportsModificationSequences;
    BOOL _isOpenedByUser;
    BOOL _supportsCustomPermanentFlags;
    unsigned long long _totalCount;
    NSString *_mailboxName;
}

+ (id)flagChangeQueue;
+ (id)largeDeleteLog;
@property(copy) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
@property(nonatomic) BOOL supportsCustomPermanentFlags; // @synthesize supportsCustomPermanentFlags=_supportsCustomPermanentFlags;
@property BOOL isOpenedByUser; // @synthesize isOpenedByUser=_isOpenedByUser;
@property BOOL supportsModificationSequences; // @synthesize supportsModificationSequences=_supportsModificationSequences;
@property unsigned long long totalCount; // @synthesize totalCount=_totalCount;
//- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *stateStringForDiagnostics;
- (void)updateUidValidityFromMailbox:(id)arg1;
- (void)updateComputedHighestModificationSequence:(unsigned long long)arg1 forMailbox:(id)arg2;
- (unsigned long long)computedHighestModificationSequenceForMailbox:(id)arg1;
- (unsigned long long)allegedHighestModificationSequenceForMailbox:(id)arg1;
@property(retain) NSDate *lastSyncDate;
@property(readonly, nonatomic) MFIMAPAccount *account;
@property(readonly, copy, nonatomic) NSArray *messagesBeingRouted;
@property(readonly, nonatomic) IMAPDownloadCache *downloadCache;
@property(readonly, nonatomic) IMAPCommandPipeline *fetchPipeline;
- (void)_setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2;
- (void)messagesWereAdded:(id)arg1 secondaryMessages:(id)arg2 duringOpen:(BOOL)arg3;
- (BOOL)isSortedAscending;
- (id)sortOrder;
- (void)writeUpdatedMessageDataToDisk;
- (id)_deletedMessages;
- (id)_copyOfAllMessagesSortedByUidWithOptions:(unsigned int)arg1;
- (id)copyOfOldCachedMessagesContentsForUid:(unsigned int)arg1;
- (BOOL)hasValidCacheFileForUid:(unsigned int)arg1;
- (BOOL)hasValidCacheFileForMessage:(id)arg1;
- (id)_preferredOrderForFetchingMessageBodies:(id)arg1;
- (void)addMessageDetails:(id)arg1;
- (void)setResultsForLabelChangeAction:(long long)arg1;
- (void)setResultsForFlagChangeAction:(long long)arg1 uids:(id)arg2 flags:(long long)arg3 mask:(long long)arg4;
- (void)setResultsForAppendAction:(long long)arg1 newMessageDetails:(id)arg2;
- (void)setResultsForCopyAction:(long long)arg1 newMessageDetails:(id)arg2 lastBatch:(BOOL)arg3;
- (void)forceResync;
- (void)fixMessagesAndResetIMAPMessages;
- (BOOL)mailboxHasInconsistencies;
- (void)setComputedHighestModificationSequence:(unsigned long long)arg1;
@property(nonatomic) unsigned long long allegedHighestModificationSequence;
- (void)setUidNextStatusIfNeeded:(unsigned int)arg1;
@property(nonatomic) unsigned int uidNextStatus;
@property(nonatomic) unsigned int uidValidityStatus;
- (id)_uidIndexSetForMessages:(id)arg1;
- (id)messagesWithRemoteIDs:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *duplicateRemoteIDs;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyIncompleteMessages;
@property(readonly, nonatomic) BOOL canSetMessageColors;
- (void)setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)messagesForMailbox:(id)arg1 where:(id)arg2 sortedBy:(id)arg3 ascending:(BOOL)arg4 options:(unsigned int)arg5;
- (void)compactMailbox:(id)arg1;
@property(readonly, nonatomic) unsigned long long syncedMessageCount;
- (unsigned long long)totalCountAndUnseenCount:(unsigned long long *)arg1 adjustedUnreadCount:(unsigned long long *)arg2;
@property(readonly, nonatomic) unsigned long long totalCountOfMessages;
- (id)getDetailsForMessagesWithUIDs:(id)arg1 waitForWrites:(BOOL)arg2;
@property(readonly, nonatomic) unsigned int maximumUID;
- (id)messageForMessageID:(id)arg1;
- (id)colorForMessage:(id)arg1;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4 serverInterface:(id)arg5;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)_waitForDataFromDownload:(id)arg1 uid:(unsigned int)arg2;
- (id)fetchAndCacheBodyDataForMessages:(id)arg1 withServerInterface:(id)arg2;
- (id)_dataForMessage:(id)arg1 readHeadersOnly:(BOOL)arg2;
- (id)messagesWithRowIDs:(id)arg1;
- (id)messageWithLibraryID:(long long)arg1 options:(unsigned int)arg2;
- (id)messageWithDefaultLoadOptionsAndRowID:(long long)arg1;
- (void)reflectGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)reflectFlagChanges:(id)arg1 forMessages:(id)arg2 withUIDs:(id)arg3;
- (void)_addFlagChangeActionForFlagChanges:(id)arg1 messages:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)async_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)imapActionReceivedError:(id)arg1 imapError:(id)arg2 missedMessages:(id)arg3;
- (void)createAppendActionForMessageFromFailedCopy:(id)arg1 activityType:(id)arg2 userInitiated:(BOOL)arg3;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)reflectAddedIMAPMessages:(id)arg1 oldMessagesByNewMessage:(id)arg2;
- (BOOL)_isAppleOriCloudAccount;
- (id)newDictionaryForLocalFlags:(long long)arg1 serverFlags:(long long)arg2 existingDictionary:(id)arg3;
- (id)_uidSearchForMessageIds:(id)arg1 destinationUidNext:(unsigned int)arg2 withSyncHandler:(id)arg3;
- (long long)_addMessages:(id)arg1 fromStore:(id)arg2 missedMessages:(id)arg3 newMessages:(id)arg4 newDocumentIDsByOld:(id)arg5 flagsToSet:(id)arg6 appendReason:(long long)arg7 userInitiated:(BOOL)arg8 error:(id *)arg9;
- (BOOL)_copyMessagesByID:(id)arg1 toStore:(id)arg2 appendReason:(long long)arg3 userInitiated:(BOOL)arg4 settingFlags:(id)arg5 newMessages:(id *)arg6 error:(id *)arg7;
- (void)_copyFlagsFromMessages:(id)arg1 flagsByMessage:(id)arg2 toMessagesWithUids:(id)arg3 withSyncHandler:(id)arg4 usedFlags:(id)arg5;
- (BOOL)allowsOverwrite;
- (BOOL)allowsAppend;
- (BOOL)shouldSendUserNotificationForMessage:(id)arg1;
- (void)undeleteMessagesWithUIDs:(id)arg1;
- (void)deleteLastMessageWithHeaders:(id)arg1 compactWhenDone:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(BOOL)arg2;
- (void)reflectDeletedIMAPMessagesWithUIDs:(id)arg1;
- (void)doCompact;
@property(readonly, nonatomic) BOOL canCompact;
@property(readonly, nonatomic) MFMailbox *mailbox;
- (BOOL)canRebuild;
- (void)doRoutineCleanup;
- (void)cleanupSynchronously;
- (void)fetchSynchronouslyForKnownChanges;
- (void)fetchSynchronously;
- (void)checkNewMail;
- (void)_fetchForCheckingNewMail:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isAllMailMailbox;
@property(readonly, nonatomic) BOOL isInbox;
- (BOOL)shouldCallCompactWhenClosing;
- (void)invalidateSyncEngine;
- (void)_invalidate;
- (void)asynchronousCopyOfAllMessagesWithOptions:(id)arg1;
- (void)openSynchronouslyWithoutUserInteraction;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
- (void)_openSynchronouslyUpdatingMetadata:(BOOL)arg1 withOptions:(unsigned long long)arg2;
- (void)openAsynchronously;
@property(readonly) BOOL isReadOnly;
@property(readonly, nonatomic) unsigned int permanentFlags;
- (BOOL)_isSynchronizing;
- (BOOL)_isSynchronized;
- (id)_IMAPMailbox;
- (void)dealloc;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;
- (id)objectSpecifierForMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isTrash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL supportsSnippets;

@end
