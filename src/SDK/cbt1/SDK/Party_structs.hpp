#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Party

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum Party.ESocialChannelType
// NumValues: 0x0007
enum class ESocialChannelType : uint8
{
	General                                  = 0,
	Founder                                  = 1,
	Party                                    = 2,
	Team                                     = 3,
	System                                   = 4,
	Private                                  = 5,
	ESocialChannelType_MAX                   = 6,
};

// Enum Party.EPartyType
// NumValues: 0x0004
enum class EPartyType : uint8
{
	Public                                   = 0,
	FriendsOnly                              = 1,
	Private                                  = 2,
	EPartyType_MAX                           = 3,
};

// Enum Party.EPartyInviteRestriction
// NumValues: 0x0004
enum class EPartyInviteRestriction : uint8
{
	AnyMember                                = 0,
	LeaderOnly                               = 1,
	NoInvites                                = 2,
	EPartyInviteRestriction_MAX              = 3,
};

// Enum Party.EPartyJoinDenialReason
// NumValues: 0x0043
enum class EPartyJoinDenialReason : uint8
{
	NoReason                                 = 0,
	JoinAttemptAborted                       = 1,
	Busy                                     = 2,
	OssUnavailable                           = 3,
	PartyFull                                = 4,
	GameFull                                 = 5,
	NotPartyLeader                           = 6,
	PartyPrivate                             = 7,
	JoinerCrossplayRestricted                = 8,
	MemberCrossplayRestricted                = 9,
	GameModeRestricted                       = 10,
	Banned                                   = 11,
	NotLoggedIn                              = 12,
	CheckingForRejoin                        = 13,
	TargetUserMissingPresence                = 14,
	TargetUserUnjoinable                     = 15,
	TargetUserAway                           = 16,
	AlreadyLeaderInPlatformSession           = 17,
	TargetUserPlayingDifferentGame           = 18,
	TargetUserMissingPlatformSession         = 19,
	PlatformSessionMissingJoinInfo           = 20,
	FailedToStartFindConsoleSession          = 21,
	MissingPartyClassForTypeId               = 22,
	TargetUserBlocked                        = 23,
	InvalidJoinInfo                          = 24,
	NotFriends                               = 25,
	CustomReason0                            = 26,
	CustomReason1                            = 27,
	CustomReason2                            = 28,
	CustomReason3                            = 29,
	CustomReason4                            = 30,
	CustomReason5                            = 31,
	CustomReason6                            = 32,
	CustomReason7                            = 33,
	CustomReason8                            = 34,
	CustomReason9                            = 35,
	CustomReason10                           = 36,
	CustomReason11                           = 37,
	CustomReason12                           = 38,
	CustomReason13                           = 39,
	CustomReason14                           = 40,
	CustomReason15                           = 41,
	CustomReason16                           = 42,
	CustomReason17                           = 43,
	CustomReason18                           = 44,
	CustomReason19                           = 45,
	CustomReason20                           = 46,
	CustomReason21                           = 47,
	CustomReason22                           = 48,
	CustomReason23                           = 49,
	CustomReason24                           = 50,
	CustomReason25                           = 51,
	CustomReason26                           = 52,
	CustomReason27                           = 53,
	CustomReason28                           = 54,
	CustomReason29                           = 55,
	CustomReason30                           = 56,
	CustomReason31                           = 57,
	CustomReason32                           = 58,
	CustomReason33                           = 59,
	CustomReason34                           = 60,
	CustomReason35                           = 61,
	CustomReason36                           = 62,
	CustomReason37                           = 63,
	CustomReason38                           = 64,
	CustomReason39                           = 65,
	MAX                                      = 66,
};

// Enum Party.EApprovalAction
// NumValues: 0x0005
enum class EApprovalAction : uint8
{
	Approve                                  = 0,
	Enqueue                                  = 1,
	EnqueueAndStartBeacon                    = 2,
	Deny                                     = 3,
	EApprovalAction_MAX                      = 4,
};

// Enum Party.ESocialPartyInviteMethod
// NumValues: 0x000E
enum class ESocialPartyInviteMethod : uint8
{
	Other                                    = 0,
	Notification                             = 1,
	AcceptRequestToJoin                      = 2,
	Custom0                                  = 3,
	Custom1                                  = 4,
	Custom2                                  = 5,
	Custom3                                  = 6,
	Custom4                                  = 7,
	Custom5                                  = 8,
	Custom6                                  = 9,
	Custom7                                  = 10,
	Custom8                                  = 11,
	Custom9                                  = 12,
	MAX                                      = 13,
};

// Enum Party.ESocialPartyInviteFailureReason
// NumValues: 0x000A
enum class ESocialPartyInviteFailureReason : uint8
{
	Success                                  = 0,
	NotOnline                                = 1,
	NotAcceptingMembers                      = 2,
	NotFriends                               = 3,
	AlreadyInParty                           = 4,
	OssValidationFailed                      = 5,
	PlatformInviteFailed                     = 6,
	PartyInviteFailed                        = 7,
	InviteRateLimitExceeded                  = 8,
	ESocialPartyInviteFailureReason_MAX      = 9,
};

// Enum Party.ESocialSubsystem
// NumValues: 0x0003
enum class ESocialSubsystem : uint8
{
	Primary                                  = 0,
	Platform                                 = 1,
	MAX                                      = 2,
};

// Enum Party.ESocialRelationship
// NumValues: 0x000A
enum class ESocialRelationship : uint8
{
	Any                                      = 0,
	FriendInviteReceived                     = 1,
	FriendInviteSent                         = 2,
	PartyInvite                              = 3,
	Friend                                   = 4,
	BlockedPlayer                            = 5,
	SuggestedFriend                          = 6,
	RecentPlayer                             = 7,
	JoinRequest                              = 8,
	ESocialRelationship_MAX                  = 9,
};

// Enum Party.ECrossplayPreference
// NumValues: 0x0005
enum class ECrossplayPreference : uint8
{
	NoSelection                              = 0,
	OptedIn                                  = 1,
	OptedOut                                 = 2,
	OptedOutRestricted                       = 3,
	ECrossplayPreference_MAX                 = 4,
};

// Enum Party.EPlatformIconDisplayRule
// NumValues: 0x0006
enum class EPlatformIconDisplayRule : uint8
{
	Always                                   = 0,
	AlwaysIfDifferent                        = 1,
	AlwaysWhenInCrossplayParty               = 2,
	AlwaysIfDifferentWhenInCrossplayParty    = 3,
	Never                                    = 4,
	EPlatformIconDisplayRule_MAX             = 5,
};

// ScriptStruct Party.SocialPlatformDescription
// 0x0058 (0x0058 - 0x0000)
struct FSocialPlatformDescription final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PlatformType;                                      // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   OnlineSubsystem;                                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SessionType;                                       // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ExternalAccountType;                               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CrossplayPool;                                     // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Party.UserPlatform
// 0x0058 (0x0058 - 0x0000)
struct FUserPlatform final
{
public:
	struct FSocialPlatformDescription             PlatformDescription;                               // 0x0000(0x0058)(NativeAccessSpecifierPrivate)
};

// ScriptStruct Party.PartyMemberPlatformData
// 0x0098 (0x0098 - 0x0000)
struct FPartyMemberPlatformData final
{
public:
	struct FUserPlatform                          Platform;                                          // 0x0000(0x0058)(NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                       UniqueID;                                          // 0x0058(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SessionId;                                         // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Party.PartyMemberJoinInProgressRequest
// 0x0038 (0x0038 - 0x0000)
struct FPartyMemberJoinInProgressRequest final
{
public:
	struct FUniqueNetIdRepl                       Target;                                            // 0x0000(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         Time;                                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Party.PartyMemberJoinInProgressResponse
// 0x0048 (0x0048 - 0x0000)
struct FPartyMemberJoinInProgressResponse final
{
public:
	struct FUniqueNetIdRepl                       Requester;                                         // 0x0000(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         RequestTime;                                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         ResponseTime;                                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         DenialReason;                                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4BE9[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Party.PartyMemberJoinInProgressData
// 0x0048 (0x0048 - 0x0000)
struct FPartyMemberJoinInProgressData final
{
public:
	struct FPartyMemberJoinInProgressRequest      Request;                                           // 0x0000(0x0038)(NativeAccessSpecifierPublic)
	TArray<struct FPartyMemberJoinInProgressResponse> Responses;                                         // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Party.OnlinePartyRepDataBase
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FOnlinePartyRepDataBase
{
public:
	uint8                                         Pad_4BEA[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Party.PartyMemberRepData
// 0x0258 (0x0270 - 0x0018)
struct FPartyMemberRepData final : public FOnlinePartyRepDataBase
{
public:
	uint8                                         Pad_4BEB[0x10];                                    // 0x0018(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPartyMemberPlatformData               PlatformData;                                      // 0x0028(0x0098)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_4BEC[0x90];                                    // 0x00C0(0x0090)(Fixing Size After Last Property [ Dumper-7 ])
	ECrossplayPreference                          CrossplayPreference;                               // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4BED[0x37];                                    // 0x0151(0x0037)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 JoinMethod;                                        // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4BEE[0x30];                                    // 0x0198(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPartyMemberJoinInProgressData         JoinInProgressData;                                // 0x01C8(0x0048)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_4BEF[0x60];                                    // 0x0210(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Party.PartyPlatformSessionInfo
// 0x0050 (0x0050 - 0x0000)
struct FPartyPlatformSessionInfo final
{
public:
	class FString                                 SessionType;                                       // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SessionId;                                         // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                       OwnerPrimaryId;                                    // 0x0020(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Party.PartyPrivacySettings
// 0x0003 (0x0003 - 0x0000)
struct FPartyPrivacySettings final
{
public:
	EPartyType                                    PartyType;                                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPartyInviteRestriction                       PartyInviteRestriction;                            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnlyLeaderFriendsCanJoin;                         // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Party.PartyRepData
// 0x0068 (0x0080 - 0x0018)
struct FPartyRepData final : public FOnlinePartyRepDataBase
{
public:
	uint8                                         Pad_4BF0[0x9];                                     // 0x0018(0x0009)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPartyPrivacySettings                  PrivacySettings;                                   // 0x0021(0x0003)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_4BF1[0x34];                                    // 0x0024(0x0034)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPartyPlatformSessionInfo>      PlatformSessions;                                  // 0x0058(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_4BF2[0x18];                                    // 0x0068(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Party.SocialChatChannelConfig
// 0x0038 (0x0038 - 0x0000)
struct FSocialChatChannelConfig final
{
public:
	class USocialUser*                            SocialUser;                                        // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4BF3[0x10];                                    // 0x0008(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USocialChatChannel*>             ListenChannels;                                    // 0x0018(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_4BF4[0x10];                                    // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}
