#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OneEngineSDK

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "OneEngineSDK_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class OneEngineSDK.OnePSLocaleEnum
// 0x0000 (0x0028 - 0x0028)
class UOnePSLocaleEnum final : public UBlueprintFunctionLibrary
{
public:
	static class FString Arabic();
	static class FString Chinese_S();
	static class FString Chinese_T();
	static class FString Czech();
	static class FString Danish();
	static class FString Dutch();
	static class FString English_GB();
	static class FString English_US();
	static class FString Finnish();
	static class FString French();
	static class FString French_CA();
	static class FString German();
	static class FString Greek();
	static class FString Hungarian();
	static class FString Indonesian();
	static class FString Italian();
	static class FString Japanese();
	static class FString Korean();
	static class FString Norwegian();
	static class FString Polish();
	static class FString Portuguese_BR();
	static class FString Portuguese_PT();
	static class FString Romanian();
	static class FString Russian();
	static class FString Spanish();
	static class FString Spanish_LA();
	static class FString Swedish();
	static class FString Thai();
	static class FString Turkish();
	static class FString Vietnamese();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnePSLocaleEnum">();
	}
	static class UOnePSLocaleEnum* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnePSLocaleEnum>();
	}
};

// Class OneEngineSDK.OneEngineSDKPSSubsystem
// 0x0010 (0x0040 - 0x0030)
class UOneEngineSDKPSSubsystem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_3211[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CheckPremium(TDelegate<void(int32 Code, bool bIsPremium)> OnCheckPremiumResult);
	void OnCheckPremiumResultDelegate__DelegateSignature(int32 Code, bool bIsPremium);
	void FilterProfanity(const class FString& Text, const class FString& Language, TDelegate<void(int32 Code, const class FString& Text)> OnFilterProfanityResult);
	void OnFilterProfanityResultDelegate__DelegateSignature(int32 Code, const class FString& Text);
	int32 FilterProfanitySync(const class FString& Text, const class FString& Language, class FString* OutResult);
	void GetBlockingUsers(int32 Offset, int32 Limit, TDelegate<void(struct FOnePSUserProfileResponse& ProfileList)> OnGetBlockingUsersResult);
	void OnGetBlockingUsersResultDelegate__DelegateSignature(const struct FOnePSUserProfileResponse& ProfileList);
	void GetCommunicationRestrictionStatus(TDelegate<void(int32 Result)> OnRestrictionStatusResult);
	void OnRestrictionStatusResultDelegate__DelegateSignature(int32 Result);
	void GetFriends(int32 Offset, int32 Limit, TDelegate<void(struct FOnePSUserProfileResponse& ProfileList)> OnGetFriendsResult);
	void OnGetFriendsResultDelegate__DelegateSignature(const struct FOnePSUserProfileResponse& ProfileList);
	void GetProductInfoListPS(int32 ServiceLabel, const class FString& CategoryLabel, const TDelegate<void(bool bSucceed, struct FOnePSProductCategory& Category, int32 Code, const class FString& Msg)>& Callback);
	void OnGetProductInfoListPSDelegate__DelegateSignature(bool bSucceed, const struct FOnePSProductCategory& Category, int32 Code, const class FString& Msg);
	int32 HideStoreIcon();
	void OnOpenDialogResultDelegate__DelegateSignature(int32 Result);
	void OpenCommerceDialogPremiumMode(TDelegate<void(int32 Result)> OnOpenDialogResult);
	int32 ShowStoreIcon(EOnePSStoreIconPos Pos);
	int32 StartNotifyPremiumFeature(int32 Interval, int32 Mark);
	int32 StopNotifyPremiumFeature();
	void WidgetVisibilityDelegate__DelegateSignature(int32 WidgetType, bool bVisible);

	class FString GetAccountId() const;
	EOnePsnAccountState GetAccountState() const;
	class FString GetOnlineId() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OneEngineSDKPSSubsystem">();
	}
	static class UOneEngineSDKPSSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOneEngineSDKPSSubsystem>();
	}
};

// Class OneEngineSDK.OneEngineSDKSubsystem
// 0x0060 (0x0090 - 0x0030)
class UOneEngineSDKSubsystem final : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_             LoginResultDelegate;                               // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             PayResultDelegate;                                 // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnAntiAddictionTimeoutDelegate;                    // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             LogoutResultDelegate;                              // 0x0060(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_321A[0x20];                                    // 0x0070(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ActivateDevice(const class FString& ServerId, TDelegate<void(bool bSucceed, bool bNeedActCode, const class FString& ActCodePrompt, int32 Code, const class FString& ErrorMsg)> OneActivateDeviceResultDelegate);
	void OneActivateDeviceResultDelegate__DelegateSignature(bool bSucceed, bool bNeedActCode, const class FString& ActCodePrompt, int32 Code, const class FString& ErrorMsg);
	void Bind(TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg, EOneEngineThirdType BindType, struct FOneUserInfo& UserInfo)> BindDelegate, EOneEngineThirdType BindType);
	void OneBindResultDelegate__DelegateSignature(bool bSuccess, int32 Code, const class FString& Msg, EOneEngineThirdType BindType, const struct FOneUserInfo& UserInfo);
	void CallCommonFunction(const class FString& FuncName, const class FString& Params_0, TDelegate<void(const class FString& FunctionName, int32 Result, const class FString& Msg)> CommonFunctionDelegate);
	void OneCommonFunctionDelegate__DelegateSignature(const class FString& FunctionName, int32 Result, const class FString& Msg);
	bool CheckSelfPermission(EOnePermissionType Type);
	void CloseClipboardPermission();
	void DisplayCDKeyDialog(TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg)> OnCDKeyActivateResult, const class FString& ServerId);
	void OneGenericResultDelegate__DelegateSignature(bool bSuccess, int32 Code, const class FString& Msg);
	void EnableDebugMode(bool Enable);
	void EnterAccountCancellation();
	bool ExaminStatus();
	void ExchangeActCode(const class FString& ServerId, const class FString& ActCode, TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg)> GenericResultDelegate);
	void FetchAntiAddictionInfo(TDelegate<void(struct FOneAntiAddictionInfo& Info)> OnFetchAntiAddictionInfo);
	void OneFetchAntiAddictionInfoDelegate__DelegateSignature(const struct FOneAntiAddictionInfo& Info);
	void FetchUserRoleInfoList(TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg, TArray<struct FOneURCRoleInfo>& RoleList)> OnFetchUserRoleListDelegate, const class FString& ServerId);
	void OneFetchUserRoleInfoListDelegate__DelegateSignature(bool bSuccess, int32 Code, const class FString& Msg, const TArray<struct FOneURCRoleInfo>& RoleList);
	void GameGetServerListEvent(EOneResEventState State, const class FString& URL, const class FString& ErrorCode, const class FString& ErrorMsg);
	void GameResDecEvent(EOneResEventState State, const class FString& ErrorMsg);
	void GameResReqEvent(EOneResEventState State, const class FString& URL, const class FString& ErrorCode, const class FString& ErrorMsg);
	void GameUpdateAssetEvent(EOneResEventState State, const class FString& URL, const class FString& ErrorCode, const class FString& ErrorMsg);
	class FString GetChannelId();
	class FString GetChannelMediaId();
	void GetChannelPlatform(TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg, const class FString& Platform)> OnGetPlatformResultDelegate);
	void OneGetPlatformDelegate__DelegateSignature(bool bSuccess, int32 Code, const class FString& Msg, const class FString& Platform);
	class FString GetCurrentLanguage();
	void GetDeviceInfo(TDelegate<void(struct FOneDeviceInfo& DeviceInfo)> Delegate);
	void OneGetDeviceInfoDelegate__DelegateSignature(const struct FOneDeviceInfo& DeviceInfo);
	TArray<struct FOnePermissionInfo> GetPermissions();
	int32 GetPlatformOS();
	void GetProductList(const TArray<class FString>& ProductIds, TDelegate<void(bool bSucceed, int32 Code, TArray<struct FOneProductInfo>& ProductListResult)> ProductResultDelegate);
	void OneProductInfoDelegate__DelegateSignature(bool bSucceed, int32 Code, const TArray<struct FOneProductInfo>& ProductListResult);
	void GetPushNotDisturb(TDelegate<void(bool bSucceed, int32 Code, const class FString& ErrorMsg, struct FOnePushNotDisturbInfo& DisturbInfo)> Callback);
	void OnePushNotDisturbInfoDelegate__DelegateSignature(bool bSucceed, int32 Code, const class FString& ErrorMsg, const struct FOnePushNotDisturbInfo& DisturbInfo);
	void GetPushStatus(TDelegate<void(const struct FOnePushStatus& PushStatus)> Callback);
	void OnePushStatusDelegate__DelegateSignature(const struct FOnePushStatus& PushStatus);
	void GetPushTypeInfoList(TDelegate<void(bool bSucceed, int32 Code, const class FString& ErrorMsg, TArray<struct FOnePushTypeInfo>& PushTasks)> Callback);
	void OneGetPushTypeInfoListDelegate__DelegateSignature(bool bSucceed, int32 Code, const class FString& ErrorMsg, const TArray<struct FOnePushTypeInfo>& PushTasks);
	void GetQRCodeScanResult(TDelegate<void(const class FString& CodeType, const class FString& CodeLink)> OnGetQRCodeScanResultDelegate);
	void OneGetQRCodeScanResultDelegate__DelegateSignature(const class FString& CodeType, const class FString& CodeLink);
	EOneEngineSDKRegionType GetRegionType();
	TArray<class FString> GetSupportedLanguageCodeList();
	struct FOneUserInfo GetUserInfo();
	void GetUserLocationInfo(TDelegate<void(struct FOneUserLocationInfo& LocationInfo)> LocationInfoDelegate);
	void OneUserLocationInfoDelegate__DelegateSignature(const struct FOneUserLocationInfo& LocationInfo);
	void GetUserTokenList(TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg, TArray<struct FOneUserInfo>& TokenList)> OnGetTokenListDelegate);
	void OneFetchUserTokenListDelegate__DelegateSignature(bool bSuccess, int32 Code, const class FString& Msg, const TArray<struct FOneUserInfo>& TokenList);
	void GuestLogin();
	void Init(TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg)> InitDelegate);
	void OneInitDelegate__DelegateSignature(bool bSuccess, int32 Code, const class FString& Msg);
	bool IsCommonFunctionSupported(const class FString& FuncName);
	bool IsDebugMode();
	bool IsLoggedIn();
	void KillProcess();
	void Login();
	void OnChannelNotHavingExitViewDelegate__DelegateSignature();
	void OneAntiAddictionTimeoutDelegate__DelegateSignature(bool bForceKick, const struct FOneAntiAddictionInfo& Info);
	void OneLoginResultDelegate__DelegateSignature(bool bSuccess, int32 Code, const class FString& Msg, const struct FOneUserInfo& UserInfo);
	void OneLogoutResultDelegate__DelegateSignature(bool bSuccess, int32 Code, const class FString& Msg);
	void OneNotificationDelegate__DelegateSignature(const struct FOnePushMessage& Message);
	void OnePayResultDelegate__DelegateSignature(bool bSuccess, int32 Code, const class FString& Msg, const class FString& OrderId);
	void OneQueryActCodeResultDelegate__DelegateSignature(bool bSucceed, bool bNeedActCode, const class FString& ActCodePrompt, int32 Code, const class FString& ErrorMsg);
	void OneQueryUserActiveQualificationResultDelegate__DelegateSignature(bool bSucceed, int32 Code, const class FString& ErrorMsg, const struct FOneActiveQualificationInfo& QualificationInfo);
	void OneRequestPermissionResultDelegate__DelegateSignature(EOnePermissionType Type, bool Granted);
	void OneStartUpdatePushDataDelegate__DelegateSignature(bool bSucceed, int32 Code, const class FString& ErrorMsg, const class FString& DeviceToken);
	void OneTranslateResultDelegate__DelegateSignature(bool bSucceed, const class FString& Result, const class FString& ErrorMsg);
	void OneUserAuthenticationResultDelegate__DelegateSignature(bool bSucceed, int32 AuthResult, bool bHasNetError, const class FString& ErrorMsg);
	void OnExitDelegate__DelegateSignature();
	void OpenAIHelp(EOneAIHelpType Type, const class FString& RoleId, const class FString& ServerId, const class FString& RoleName);
	void OpenApplicationSetting();
	void OpenComplianceOnWebView();
	void OpenCustomerService(const class FString& RoleId, const class FString& RoleName, const class FString& ServerId);
	void OpenUserCenter();
	void Pay(const struct FOnePaymentInfo& PaymentInfo);
	void QueryActCode(const class FString& ServerId, TDelegate<void(bool bSucceed, bool bNeedActCode, const class FString& ActCodePrompt, int32 Code, const class FString& ErrorMsg)> OneQueryActCodeResultDelegate);
	void QueryUserActiveQualification(const class FString& ServerId, TDelegate<void(bool bSucceed, int32 Code, const class FString& ErrorMsg, struct FOneActiveQualificationInfo& QualificationInfo)> OneQueryUserActiveQualificationResultDelegate);
	void RedeemCouponCode(const class FString& CouponCode, const class FString& ServerId, const class FString& RoleId, const class FString& RoleLevel, const class FString& VipLevel, const TMap<class FString, class FString>& ExtraInfo, TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg)> OnRedeemCouponResult);
	void RequestPermission(EOnePermissionType Type, TDelegate<void(EOnePermissionType Type, bool Granted)> Delegate);
	void SetLanguage(const class FString& Code);
	void SetProviderPushState(bool bProviderPushState, TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg)> Callback);
	void SetPushUserInfo(const class FString& ServerId, const class FString& RoleId, TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg)> Callback);
	void SetScreenOrientation(EOneScreenOrientation Orientation);
	void SetShowDefaultActivationResultToast(bool bShow);
	void SetUpConfigAppID(const class FString& AppID);
	void SetupNotificationCallback(TDelegate<void(struct FOnePushMessage& Message)> Callback);
	void ShareDataToApp(EOneShareAppTarget AppTarget, const EOneShareType Type, const struct FOneShareData& Data, TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg)> OnShareResult);
	void ShouldVerifyBundleId(bool bShouldVerify);
	void StartAntiAddictionNotify(const class FString& ServerId, const class FString& RoleId);
	void StartUpdatePushData(TDelegate<void(bool bSucceed, int32 Code, const class FString& ErrorMsg, const class FString& DeviceToken)> Callback);
	void StopAntiAddictionNotify();
	void SwitchAccount();
	void ThirdLogin(EOneEngineThirdType ThirdType, bool bForcedLogin);
	void TokenLogin(const class FString& Token, const class FString& Uid, EOneEngineThirdType ThirdType);
	void TrackEvent(const class FString& Param_Name, const TMap<class FString, class FString>& Payload);
	void TrackEventAD(const class FString& Param_Name, const TMap<class FString, class FString>& Payload);
	void TrackEventAddExtraDeviceInfo(const TMap<class FString, class FString>& ExtraDeviceInfo);
	void TrackEventEnterGameScene(const class FString& SceneName, int32 Period, const TMap<class FString, class FString>& HintMap);
	void TrackEventExitGameScene();
	void TrackEventRoleCreate(const struct FOneRoleInfo& RoleInfo, const class FString& IP, const class FString& Port);
	void TrackEventRoleLevelUp(const struct FOneRoleInfo& RoleInfo);
	void TrackEventRoleLoginError(const struct FOneRoleInfo& RoleInfo, const class FString& IP, const class FString& Port, const class FString& Code, const class FString& Msg);
	void TrackEventRoleLoginSucceed(const struct FOneRoleInfo& RoleInfo, const class FString& IP, const class FString& Port);
	void TrackEventRoleLogout(const struct FOneRoleInfo& RoleInfo);
	void Translate(const class FString& Text, TDelegate<void(bool bSucceed, const class FString& Result, const class FString& ErrorMsg)> Callback);
	void UnSetPushUserInfo(TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg)> Callback);
	void UpdatePushNotDisturb(const struct FOnePushNotDisturbInfo& DisturbInfo, TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg)> Callback);
	void UpdatePushTypeList(const TArray<struct FOnePushTypeInfo>& PushTypeList, TDelegate<void(bool bSuccess, int32 Code, const class FString& Msg)> Callback);
	void UserAuthentication(TDelegate<void(bool bSucceed, int32 AuthResult, bool bHasNetError, const class FString& ErrorMsg)> OnUserAuthenticationResultDelegate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OneEngineSDKSubsystem">();
	}
	static class UOneEngineSDKSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOneEngineSDKSubsystem>();
	}
};

// Class OneEngineSDK.PSOneDeviceObject
// 0x0020 (0x0048 - 0x0028)
class UPSOneDeviceObject final : public UObject
{
public:
	struct FPSOneDeviceInfo                       Item;                                              // 0x0028(0x0020)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PSOneDeviceObject">();
	}
	static class UPSOneDeviceObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPSOneDeviceObject>();
	}
};

// Class OneEngineSDK.PSBaseUserWidget
// 0x0070 (0x0350 - 0x02E0)
class alignas(0x10) UPSBaseUserWidget : public UUserWidget
{
public:
	uint8                                         Pad_323F[0x40];                                    // 0x02E0(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bEnterButtonAssignCircle;                          // 0x0320(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3240[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             PSCircleTexture;                                   // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             PSCrossTexture;                                    // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             PSSquareTexture;                                   // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             PSTriangleTexture;                                 // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                  PSFont;                                            // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ConfigFont(class UEditableTextBox* TextBox, int32 FontSize);
	class UWidget* GetBestFocusWidget();
	void OnFaceButtonRightPressed();

	float GetUIScaler() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PSBaseUserWidget">();
	}
	static class UPSBaseUserWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPSBaseUserWidget>();
	}
};

// Class OneEngineSDK.PSAccountCenterPanel
// 0x00C0 (0x0410 - 0x0350)
class UPSAccountCenterPanel final : public UPSBaseUserWidget
{
public:
	uint8                                         Pad_3242[0xC0];                                    // 0x0350(0x00C0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AccountCenterPanelDidChange(EPSOneCenterDisplayType SourcePanel, EPSOneCenterDisplayType DestinationPanel);
	void ChangeAccount();
	void ConfigAccountInfo(const struct FPSOneAccountInfo& Info);
	void ConfigDeviceList(const TArray<struct FPSOneDeviceInfo>& Devices);
	void ShowLegalTerms();
	void SwitchActiveWidget(const EPSOneCenterDisplayType Type);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PSAccountCenterPanel">();
	}
	static class UPSAccountCenterPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPSAccountCenterPanel>();
	}
};

// Class OneEngineSDK.PSAgreementPanel
// 0x0040 (0x0390 - 0x0350)
class UPSAgreementPanel final : public UPSBaseUserWidget
{
public:
	uint8                                         Pad_3243[0x40];                                    // 0x0350(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AgreementReject();
	void AgreementSure();
	void OpenAgreement();
	void OpenPolicy();
	void PSOneAgreementEvent__DelegateSignature(EPSOneAgreementEventType EventType);
	void SetIsBackgroundVisible(bool Param_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PSAgreementPanel">();
	}
	static class UPSAgreementPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPSAgreementPanel>();
	}
};

// Class OneEngineSDK.PSLoginPanel
// 0x0140 (0x0490 - 0x0350)
class UPSLoginPanel final : public UPSBaseUserWidget
{
public:
	uint8                                         Pad_3244[0x140];                                   // 0x0350(0x0140)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	ELoginPanelType ActiveLoginPanel();
	void ConfigAccount(const class FString& AccountId);
	void ConfigAccountWithPassword(const class FString& AccountId, const class FString& Password);
	void ConfigQRCode(const class UTexture2D* QRCode);
	void Login(const class FString& AccountId, const class FString& Password);
	void LoginPanelDidChange(ELoginPanelType SourcePanel, ELoginPanelType DestinationPanel);
	void LoginWithAuthCode(const class FString& AccountId, const class FString& AuthCode);
	void RefreshQRCode();
	void SendAuthCode(const class FString& AccountId);
	void SetIsBackgroundVisible(bool Param_IsVisible);
	void ShowQRCodeOverdue(bool Param_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PSLoginPanel">();
	}
	static class UPSLoginPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPSLoginPanel>();
	}
};

// Class OneEngineSDK.PSLoginWithAccountPanel
// 0x0000 (0x0350 - 0x0350)
class UPSLoginWithAccountPanel final : public UPSBaseUserWidget
{
public:
	void ConfigAccount(const class FString& AccountId);
	void ConfigAccountWithPassword(const class FString& AccountId, const class FString& Password);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PSLoginWithAccountPanel">();
	}
	static class UPSLoginWithAccountPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPSLoginWithAccountPanel>();
	}
};

// Class OneEngineSDK.PSLoginWithPhonePanel
// 0x0000 (0x0350 - 0x0350)
class UPSLoginWithPhonePanel final : public UPSBaseUserWidget
{
public:
	void ConfigAccount(const class FString& AccountId);
	void ConfigCountDown(int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PSLoginWithPhonePanel">();
	}
	static class UPSLoginWithPhonePanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPSLoginWithPhonePanel>();
	}
};

// Class OneEngineSDK.PSLoginWithQRCodePanel
// 0x0000 (0x0350 - 0x0350)
class UPSLoginWithQRCodePanel final : public UPSBaseUserWidget
{
public:
	void ShowQRCodeOverdue(bool Param_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PSLoginWithQRCodePanel">();
	}
	static class UPSLoginWithQRCodePanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPSLoginWithQRCodePanel>();
	}
};

// Class OneEngineSDK.PSRealNameAuthenticationPanel
// 0x0040 (0x0390 - 0x0350)
class UPSRealNameAuthenticationPanel final : public UPSBaseUserWidget
{
public:
	uint8                                         Pad_3245[0x40];                                    // 0x0350(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RealNameAuthenticate(const class FString& Param_Name, const class FString& IDNumber);
	void SetIsBackgroundVisible(bool Param_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PSRealNameAuthenticationPanel">();
	}
	static class UPSRealNameAuthenticationPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPSRealNameAuthenticationPanel>();
	}
};

// Class OneEngineSDK.PSToastPanel
// 0x0000 (0x0350 - 0x0350)
class UPSToastPanel final : public UPSBaseUserWidget
{
public:
	void SetMessage(const class FText& MessageText);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PSToastPanel">();
	}
	static class UPSToastPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPSToastPanel>();
	}
};

}
