#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Party

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Party_structs.hpp"


namespace SDK
{

// Class Party.Chatroom
// 0x0030 (0x0058 - 0x0028)
class UChatroom final : public UObject
{
public:
	class FString                                 CurrentChatRoomId;                                 // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         MaxChatRoomRetries;                                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         NumChatRoomRetries;                                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4BF5[0x18];                                    // 0x0040(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Chatroom">();
	}
	static class UChatroom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatroom>();
	}
};

// Class Party.SocialManager
// 0x0188 (0x01B0 - 0x0028)
class USocialManager final : public UObject
{
public:
	uint8                                         Pad_4BF6[0x80];                                    // 0x0028(0x0080)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USocialToolkit*>                 SocialToolkits;                                    // 0x00A8(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class USocialDebugTools*                      SocialDebugTools;                                  // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4BF7[0xF0];                                    // 0x00C0(0x00F0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialManager">();
	}
	static class USocialManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialManager>();
	}
};

// Class Party.SocialToolkit
// 0x0288 (0x02B0 - 0x0028)
class USocialToolkit final : public UObject
{
public:
	uint8                                         Pad_4BF8[0x40];                                    // 0x0028(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialUser*                            LocalUser;                                         // 0x0068(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                    AllUsers;                                          // 0x0070(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4BF9[0x50];                                    // 0x0080(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bRemoveInvalidatedUserFromMaps;                    // 0x00D0(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4BFA[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class ULocalPlayer>            LocalPlayerOwner;                                  // 0x00D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4BFB[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialChatManager*                     SocialChatManager;                                 // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4BFC[0x1C8];                                   // 0x00E8(0x01C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialToolkit">();
	}
	static class USocialToolkit* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialToolkit>();
	}
};

// Class Party.SocialChatManager
// 0x01F8 (0x0220 - 0x0028)
class USocialChatManager final : public UObject
{
public:
	uint8                                         Pad_4BFD[0x50];                                    // 0x0028(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                        // 0x0078(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialChatRoom*>   ChatRoomsById;                                     // 0x00C8(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;                     // 0x0118(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                          bEnableChatSlashCommands;                          // 0x0168(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4BFE[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;                                     // 0x0170(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4BFF[0x60];                                    // 0x01C0(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatManager">();
	}
	static class USocialChatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatManager>();
	}
};

// Class Party.SocialChatChannel
// 0x00B8 (0x00E0 - 0x0028)
class USocialChatChannel : public UObject
{
public:
	uint8                                         Pad_4C00[0xB8];                                    // 0x0028(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChannel">();
	}
	static class USocialChatChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChannel>();
	}
};

// Class Party.SocialChatRoom
// 0x0010 (0x00F0 - 0x00E0)
class USocialChatRoom : public USocialChatChannel
{
public:
	uint8                                         Pad_4C01[0x10];                                    // 0x00E0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatRoom">();
	}
	static class USocialChatRoom* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatRoom>();
	}
};

// Class Party.SocialGroupChannel
// 0x0068 (0x0090 - 0x0028)
class USocialGroupChannel final : public UObject
{
public:
	class USocialUser*                            SocialUser;                                        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                       GroupId;                                           // 0x0030(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                   DisplayName;                                       // 0x0060(0x0010)(NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                    Members;                                           // 0x0070(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4C02[0x10];                                    // 0x0080(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialGroupChannel">();
	}
	static class USocialGroupChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialGroupChannel>();
	}
};

// Class Party.SocialPartyChatRoom
// 0x0000 (0x00F0 - 0x00F0)
class USocialPartyChatRoom final : public USocialChatRoom
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialPartyChatRoom">();
	}
	static class USocialPartyChatRoom* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPartyChatRoom>();
	}
};

// Class Party.SocialPrivateMessageChannel
// 0x0008 (0x00E8 - 0x00E0)
class USocialPrivateMessageChannel final : public USocialChatChannel
{
public:
	class USocialUser*                            TargetUser;                                        // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialPrivateMessageChannel">();
	}
	static class USocialPrivateMessageChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPrivateMessageChannel>();
	}
};

// Class Party.SocialReadOnlyChatChannel
// 0x0000 (0x00E0 - 0x00E0)
class USocialReadOnlyChatChannel final : public USocialChatChannel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialReadOnlyChatChannel">();
	}
	static class USocialReadOnlyChatChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialReadOnlyChatChannel>();
	}
};

// Class Party.SocialParty
// 0x0348 (0x0370 - 0x0028)
class alignas(0x10) USocialParty final : public UObject
{
public:
	uint8                                         Pad_4C03[0x38];                                    // 0x0028(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class APartyBeaconClient>         ReservationBeaconClientClass;                      // 0x0060(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASpectatorBeaconClient>     SpectatorBeaconClientClass;                        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4C04[0x10];                                    // 0x0070(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       OwningLocalUserId;                                 // 0x0080(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                       CurrentLeaderId;                                   // 0x00B0(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                                  // 0x00E0(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                          bEnableAutomaticPartyRejoin;                       // 0x0130(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4C05[0x57];                                    // 0x0131(0x0057)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PlatformUserInviteCooldown;                        // 0x0188(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                        PrimaryUserInviteCooldown;                         // 0x0190(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4C06[0x74];                                    // 0x0198(0x0074)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class APartyBeaconClient>      ReservationBeaconClient;                           // 0x020C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4C07[0x8];                                     // 0x0214(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class ASpectatorBeaconClient>  SpectatorBeaconClient;                             // 0x021C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4C08[0x2C];                                    // 0x0224(0x002C)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         JoinInProgressTimerRate;                           // 0x0250(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         JoinInProgressRequestTimeout;                      // 0x0254(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         JoinInProgressResponseTimeout;                     // 0x0258(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4C09[0x114];                                   // 0x025C(0x0114)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialParty">();
	}
	static class USocialParty* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialParty>();
	}
};

// Class Party.PartyMember
// 0x00E8 (0x0110 - 0x0028)
class UPartyMember final : public UObject
{
public:
	uint8                                         Pad_4C0A[0x48];                                    // 0x0028(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialUser*                            SocialUser;                                        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4C0B[0x98];                                    // 0x0078(0x0098)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PartyMember">();
	}
	static class UPartyMember* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyMember>();
	}
};

// Class Party.SocialDebugTools
// 0x0060 (0x0088 - 0x0028)
class USocialDebugTools final : public UObject
{
public:
	uint8                                         Pad_4C0C[0x60];                                    // 0x0028(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialDebugTools">();
	}
	static class USocialDebugTools* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialDebugTools>();
	}
};

// Class Party.SocialSettings
// 0x0048 (0x0070 - 0x0028)
class USocialSettings final : public UObject
{
public:
	TArray<class FName>                           OssNamesWithEnvironmentIdPrefix;                   // 0x0028(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	int32                                         DefaultMaxPartySize;                               // 0x0038(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bPreferPlatformInvites;                            // 0x003C(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bMustSendPrimaryInvites;                           // 0x003D(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bLeavePartyOnDisconnect;                           // 0x003E(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bSetDesiredPrivacyOnLocalPlayerBecomesLeader;      // 0x003F(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         UserListAutoUpdateRate;                            // 0x0040(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         MinNicknameLength;                                 // 0x0044(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         MaxNicknameLength;                                 // 0x0048(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4C0D[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSocialPlatformDescription>     SocialPlatformDescriptions;                        // 0x0050(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<class FName>                           SonyOSSNames;                                      // 0x0060(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialSettings">();
	}
	static class USocialSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialSettings>();
	}
};

// Class Party.SocialUser
// 0x01A8 (0x01D0 - 0x0028)
class USocialUser final : public UObject
{
public:
	uint8                                         Pad_4C0E[0x1A8];                                   // 0x0028(0x01A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialUser">();
	}
	static class USocialUser* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialUser>();
	}
};

}
