/* automatically generated by generateAPI.rb */
/* START GENERATED CODE */
/********************************/
/* General Steamworks functions */
/********************************/
X(AIRSteam_Init) /* = 0 */
X(AIRSteam_RunCallbacks) /* = 1 */
X(AIRSteam_GetUserID) /* = 2 */
X(AIRSteam_GetAppID) /* = 3 */
X(AIRSteam_GetAvailableGameLanguages) /* = 4 */
X(AIRSteam_GetCurrentGameLanguage) /* = 5 */
X(AIRSteam_GetPersonaName) /* = 6 */
X(AIRSteam_RestartAppIfNecessary) /* = 7 */
X(AIRSteam_GetIPCountry) /* = 8 */
X(AIRSteam_IsSteamInBigPictureMode) /* = 9 */
X(AIRSteam_IsSteamRunningOnSteamDeck) /* = 10 */
X(AIRSteam_GetServerRealTime) /* = 11 */
X(AIRSteam_GetSecondsSinceAppActive) /* = 12 */
X(AIRSteam_GetEarliestPurchaseUnixTime) /* = 13 */
/************************/
/* Stats / Achievements */
/************************/
X(AIRSteam_RequestStats) /* = 14 */
X(AIRSteam_SetAchievement) /* = 15 */
X(AIRSteam_ClearAchievement) /* = 16 */
X(AIRSteam_IsAchievement) /* = 17 */
X(AIRSteam_IsAchievementEarned) /* = 18 */
X(AIRSteam_GetAchievementAchievedPercent) /* = 19 */
X(AIRSteam_GetAchievementDisplayAttribute) /* = 20 */
X(AIRSteam_GetAchievementIcon) /* = 21 */
X(AIRSteam_GetAchievementName) /* = 22 */
X(AIRSteam_GetNumAchievements) /* = 23 */
X(AIRSteam_IndicateAchievementProgress) /* = 24 */
X(AIRSteam_GetStatInt) /* = 25 */
X(AIRSteam_GetStatFloat) /* = 26 */
X(AIRSteam_SetStatInt) /* = 27 */
X(AIRSteam_SetStatFloat) /* = 28 */
X(AIRSteam_StoreStats) /* = 29 */
X(AIRSteam_ResetAllStats) /* = 30 */
X(AIRSteam_RequestGlobalStats) /* = 31 */
X(AIRSteam_GetGlobalStatInt) /* = 32 */
X(AIRSteam_GetGlobalStatFloat) /* = 33 */
X(AIRSteam_GetGlobalStatHistoryInt) /* = 34 */
X(AIRSteam_GetGlobalStatHistoryFloat) /* = 35 */
/****************/
/* Leaderboards */
/****************/
X(AIRSteam_FindLeaderboard) /* = 36 */
X(AIRSteam_FindOrCreateLeaderboard) /* = 37 */
X(AIRSteam_FindLeaderboardResult) /* = 38 */
X(AIRSteam_GetLeaderboardName) /* = 39 */
X(AIRSteam_GetLeaderboardEntryCount) /* = 40 */
X(AIRSteam_GetLeaderboardSortMethod) /* = 41 */
X(AIRSteam_GetLeaderboardDisplayType) /* = 42 */
X(AIRSteam_UploadLeaderboardScore) /* = 43 */
X(AIRSteam_UploadLeaderboardScoreResult) /* = 44 */
X(AIRSteam_DownloadLeaderboardEntries) /* = 45 */
X(AIRSteam_DownloadLeaderboardEntriesResult) /* = 46 */
/**************************/
/* Cloud / Remote Storage */
/**************************/
X(AIRSteam_GetFileCount) /* = 47 */
X(AIRSteam_GetFileSize) /* = 48 */
X(AIRSteam_FileExists) /* = 49 */
X(AIRSteam_FileWrite) /* = 50 */
X(AIRSteam_FileRead) /* = 51 */
X(AIRSteam_FileDelete) /* = 52 */
X(AIRSteam_FileShare) /* = 53 */
X(AIRSteam_FileShareResult) /* = 54 */
X(AIRSteam_IsCloudEnabledForApp) /* = 55 */
X(AIRSteam_SetCloudEnabledForApp) /* = 56 */
X(AIRSteam_GetQuota) /* = 57 */
/******************/
/* UGC / Workshop */
/******************/
X(AIRSteam_UGCDownload) /* = 58 */
X(AIRSteam_UGCRead) /* = 59 */
X(AIRSteam_GetUGCDownloadProgress) /* = 60 */
X(AIRSteam_GetUGCDownloadResult) /* = 61 */
X(AIRSteam_PublishWorkshopFile) /* = 62 */
X(AIRSteam_PublishWorkshopFileResult) /* = 63 */
X(AIRSteam_DeletePublishedFile) /* = 64 */
X(AIRSteam_GetPublishedFileDetails) /* = 65 */
X(AIRSteam_GetPublishedFileDetailsResult) /* = 66 */
X(AIRSteam_EnumerateUserPublishedFiles) /* = 67 */
X(AIRSteam_EnumerateUserPublishedFilesResult) /* = 68 */
X(AIRSteam_EnumeratePublishedWorkshopFiles) /* = 69 */
X(AIRSteam_EnumeratePublishedWorkshopFilesResult) /* = 70 */
X(AIRSteam_EnumerateUserSubscribedFiles) /* = 71 */
X(AIRSteam_EnumerateUserSubscribedFilesResult) /* = 72 */
X(AIRSteam_EnumerateUserSharedWorkshopFiles) /* = 73 */
X(AIRSteam_EnumerateUserSharedWorkshopFilesResult) /* = 74 */
X(AIRSteam_EnumeratePublishedFilesByUserAction) /* = 75 */
X(AIRSteam_EnumeratePublishedFilesByUserActionResult) /* = 76 */
X(AIRSteam_SubscribePublishedFile) /* = 77 */
X(AIRSteam_UnsubscribePublishedFile) /* = 78 */
X(AIRSteam_CreatePublishedFileUpdateRequest) /* = 79 */
X(AIRSteam_UpdatePublishedFileFile) /* = 80 */
X(AIRSteam_UpdatePublishedFilePreviewFile) /* = 81 */
X(AIRSteam_UpdatePublishedFileTitle) /* = 82 */
X(AIRSteam_UpdatePublishedFileDescription) /* = 83 */
X(AIRSteam_UpdatePublishedFileSetChangeDescription) /* = 84 */
X(AIRSteam_UpdatePublishedFileVisibility) /* = 85 */
X(AIRSteam_UpdatePublishedFileTags) /* = 86 */
X(AIRSteam_CommitPublishedFileUpdate) /* = 87 */
X(AIRSteam_GetPublishedItemVoteDetails) /* = 88 */
X(AIRSteam_GetPublishedItemVoteDetailsResult) /* = 89 */
X(AIRSteam_GetUserPublishedItemVoteDetails) /* = 90 */
X(AIRSteam_GetUserPublishedItemVoteDetailsResult) /* = 91 */
X(AIRSteam_UpdateUserPublishedItemVote) /* = 92 */
X(AIRSteam_SetUserPublishedFileAction) /* = 93 */
/***********/
/* Friends */
/***********/
X(AIRSteam_GetFriendCount) /* = 94 */
X(AIRSteam_GetFriendByIndex) /* = 95 */
X(AIRSteam_GetFriendPersonaName) /* = 96 */
X(AIRSteam_GetSmallFriendAvatar) /* = 97 */
X(AIRSteam_GetMediumFriendAvatar) /* = 98 */
X(AIRSteam_GetLargeFriendAvatar) /* = 99 */
X(AIRSteam_SetRichPresence) /* = 100 */
X(AIRSteam_ClearRichPresence) /* = 101 */
X(AIRSteam_SetPlayedWith) /* = 102 */
X(AIRSteam_GetCoplayFriendCount) /* = 103 */
X(AIRSteam_GetCoplayFriend) /* = 104 */
/******************************/
/* Authentication & Ownership */
/******************************/
X(AIRSteam_GetAuthSessionTicket) /* = 105 */
X(AIRSteam_GetAuthSessionTicketResult) /* = 106 */
X(AIRSteam_BeginAuthSession) /* = 107 */
X(AIRSteam_EndAuthSession) /* = 108 */
X(AIRSteam_CancelAuthTicket) /* = 109 */
X(AIRSteam_UserHasLicenseForApp) /* = 110 */
X(AIRSteam_RequestEncryptedAppTicket) /* = 111 */
X(AIRSteam_GetEncryptedAppTicket) /* = 112 */
/***********/
/* Overlay */
/***********/
X(AIRSteam_ActivateGameOverlay) /* = 113 */
X(AIRSteam_ActivateGameOverlayToUser) /* = 114 */
X(AIRSteam_ActivateGameOverlayToWebPage) /* = 115 */
X(AIRSteam_ActivateGameOverlayToStore) /* = 116 */
X(AIRSteam_ActivateGameOverlayInviteDialog) /* = 117 */
X(AIRSteam_IsOverlayEnabled) /* = 118 */
X(AIRSteam_SetOverlayNotificationPosition) /* = 119 */
X(AIRSteam_SetOverlayNotificationInset) /* = 120 */
X(AIRSteam_OverlayNeedsPresent) /* = 121 */
/***********************/
/* DLC / subscriptions */
/***********************/
X(AIRSteam_IsSubscribedApp) /* = 122 */
X(AIRSteam_IsDLCInstalled) /* = 123 */
X(AIRSteam_GetDLCCount) /* = 124 */
X(AIRSteam_InstallDLC) /* = 125 */
X(AIRSteam_UninstallDLC) /* = 126 */
X(AIRSteam_DLCInstalledResult) /* = 127 */
/********************/
/* Microtransaction */
/********************/
X(AIRSteam_MicroTxnResult) /* = 128 */
/**********************************/
/* Other non-Steamworks functions */
/**********************************/
X(AIRSteam_GetEnv) /* = 129 */
X(AIRSteam_SetEnv) /* = 130 */
/* END GENERATED CODE */
