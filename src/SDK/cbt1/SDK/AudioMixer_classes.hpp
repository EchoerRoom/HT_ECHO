#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioMixer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "AudioMixer_structs.hpp"


namespace SDK
{

// Class AudioMixer.AudioBusSubsystem
// 0x0060 (0x0090 - 0x0030)
class UAudioBusSubsystem final : public UAudioEngineSubsystem
{
public:
	uint8                                         Pad_1371[0x60];                                    // 0x0030(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioBusSubsystem">();
	}
	static class UAudioBusSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioBusSubsystem>();
	}
};

// Class AudioMixer.AudioDeviceNotificationSubsystem
// 0x00F8 (0x0128 - 0x0030)
class UAudioDeviceNotificationSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_1372[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DefaultCaptureDeviceChanged;                       // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1373[0x18];                                    // 0x0048(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DefaultRenderDeviceChanged;                        // 0x0060(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1374[0x18];                                    // 0x0070(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DeviceAdded;                                       // 0x0088(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1375[0x18];                                    // 0x0098(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DeviceRemoved;                                     // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1376[0x18];                                    // 0x00C0(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DeviceStateChanged;                                // 0x00D8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1377[0x18];                                    // 0x00E8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DeviceSwitched;                                    // 0x0100(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1378[0x18];                                    // 0x0110(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioDeviceNotificationSubsystem">();
	}
	static class UAudioDeviceNotificationSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioDeviceNotificationSubsystem>();
	}
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x00E8 (0x0150 - 0x0068)
class USubmixEffectDynamicsProcessorPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_1379[0x88];                                    // 0x0068(0x0088)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0x00F0(0x0060)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

public:
	void ResetKey();
	void SetAudioBus(class UAudioBus* AudioBus);
	void SetExternalSubmix(class USoundSubmix* Submix);
	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Param_Settings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectDynamicsProcessorPreset">();
	}
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectDynamicsProcessorPreset>();
	}
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioMixerBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void AddSourceEffectToPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	static int32 AddSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void ClearMasterSubmixEffects(const class UObject* WorldContextObject);
	static void ClearSubmixEffectChainOverride(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec);
	static void ClearSubmixEffects(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
	static class FString Conv_AudioOutputDeviceInfoToString(const struct FAudioOutputDeviceInfo& Info);
	static void GetAvailableAudioOutputDevices(const class UObject* WorldContextObject, const TDelegate<void(TArray<struct FAudioOutputDeviceInfo>& AvailableDevices)>& OnObtainDevicesEvent);
	static void GetCurrentAudioOutputDeviceName(const class UObject* WorldContextObject, const TDelegate<void(const class FString& CurrentDevice)>& OnObtainCurrentDeviceEvent);
	static void GetMagnitudeForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
	static int32 GetNumberOfEntriesInSourceEffectChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	static void GetPhaseForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
	static bool IsAudioBusActive(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	static void PauseRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
	static void PrimeSoundForPlayback(class USoundWave* SoundWave, const TDelegate<void(class USoundWave* LoadedSoundWave, bool WasCancelled)> OnLoadCompletion);
	static void RegisterAudioBusToSubmix(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class UAudioBus* AudioBus);
	static void RemoveMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSourceEffectFromPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
	static void RemoveSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSubmixEffectAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	static void RemoveSubmixEffectPreset(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSubmixEffectPresetAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	static void ReplaceSoundEffectSubmix(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void ReplaceSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void ResumeRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void SetBypassSourceEffectChainEntry(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
	static void SetSubmixEffectChainOverride(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, const TArray<class USoundEffectSubmixPreset*>& SubmixEffectPresetChain, float FadeTimeSec);
	static void StartAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
	static void StartAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
	static void StartRecordingOutput(const class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	static void StopAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	static void StopAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
	static class USoundWave* StopRecordingOutput(const class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Param_Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	static void SwapAudioOutputDevice(const class UObject* WorldContextObject, const class FString& NewDeviceId, const TDelegate<void(struct FSwapAudioOutputResult& SwapResult)>& OnCompletedDeviceSwap);
	static float TrimAudioCache(float InMegabytesToFree);
	static void UnregisterAudioBusFromSubmix(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class UAudioBus* AudioBus);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMixerBlueprintLibrary">();
	}
	static class UAudioMixerBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioMixerBlueprintLibrary>();
	}
};

// Class AudioMixer.SynthSound
// 0x0020 (0x0490 - 0x0470)
class USynthSound final : public USoundWaveProcedural
{
public:
	TWeakObjectPtr<class USynthComponent>         OwningSynthComponent;                              // 0x0470(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_138D[0x18];                                    // 0x0478(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthSound">();
	}
	static class USynthSound* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthSound>();
	}
};

// Class AudioMixer.SynthComponent
// 0x0660 (0x0890 - 0x0230)
class USynthComponent : public USceneComponent
{
public:
	uint8                                         bAutoDestroy : 1;                                  // 0x0230(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bStopWhenOwnerDestroyed : 1;                       // 0x0230(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAllowSpatialization : 1;                          // 0x0230(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideAttenuation : 1;                          // 0x0230(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_54 : 4;                                     // 0x0030(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
	uint8                                         Pad_138E[0x3];                                     // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bEnableBusSends : 1;                               // 0x0234(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableBaseSubmix : 1;                             // 0x0234(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableSubmixSends : 1;                            // 0x0234(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_138F[0x3];                                     // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundAttenuation*                      AttenuationSettings;                               // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings              AttenuationOverrides;                              // 0x0240(0x03D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                      ConcurrencySettings;                               // 0x0610(0x0008)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class USoundConcurrency*>                ConcurrencySet;                                    // 0x0618(0x0050)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FSoundModulationDefaultRoutingSettings ModulationRouting;                                 // 0x0668(0x0168)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundClass*                            SoundClass;                                        // 0x07D0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*          SourceEffectChain;                                 // 0x07D8(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                       SoundSubmix;                                       // 0x07E0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>           SoundSubmixSends;                                  // 0x07E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>        BusSends;                                          // 0x07F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>        PreEffectBusSends;                                 // 0x0808(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bIsUISound : 1;                                    // 0x0818(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsPreviewSound : 1;                               // 0x0818(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1390[0x3];                                     // 0x0819(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EnvelopeFollowerAttackTime;                        // 0x081C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EnvelopeFollowerReleaseTime;                       // 0x0820(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1391[0x4];                                     // 0x0824(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAudioEnvelopeValue;                              // 0x0828(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1392[0x20];                                    // 0x0838(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	class USynthSound*                            Synth;                                             // 0x0858(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                        AudioComponent;                                    // 0x0860(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1393[0x28];                                    // 0x0868(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	TSet<class USoundModulatorBase*> GetModulators(const EModulationDestination Destination);
	void SetAudioBusSendPostEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);
	void SetAudioBusSendPreEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
	void SetModulationRouting(const TSet<class USoundModulatorBase*>& Modulators, const EModulationDestination Destination, const EModulationRouting RoutingMethod);
	void SetOutputToBusOnly(bool bInOutputToBusOnly);
	void SetSourceBusSendPostEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
	void SetSourceBusSendPreEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
	void SetVolumeMultiplier(float VolumeMultiplier);
	void Start();
	void Stop();

	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, const EAudioFaderCurve FadeCurve) const;
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAudioFaderCurve FadeCurve) const;
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, const EAudioFaderCurve FadeCurve) const;
	bool IsPlaying() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthComponent">();
	}
	static class USynthComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthComponent>();
	}
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x00B0 - 0x0068)
class USubmixEffectSubmixEQPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_139E[0x38];                                    // 0x0068(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubmixEffectSubmixEQSettings          Settings;                                          // 0x00A0(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectSubmixEQPreset">();
	}
	static class USubmixEffectSubmixEQPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectSubmixEQPreset>();
	}
};

// Class AudioMixer.SubmixEffectReverbPreset
// 0x00A8 (0x0110 - 0x0068)
class USubmixEffectReverbPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_139F[0x68];                                    // 0x0068(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubmixEffectReverbSettings            Settings;                                          // 0x00D0(0x0040)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

public:
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
	void SetSettingsWithReverbEffect(const class UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectReverbPreset">();
	}
	static class USubmixEffectReverbPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectReverbPreset>();
	}
};

// Class AudioMixer.AudioGenerator
// 0x0080 (0x00A8 - 0x0028)
class UAudioGenerator : public UObject
{
public:
	uint8                                         Pad_13A0[0x80];                                    // 0x0028(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGenerator">();
	}
	static class UAudioGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGenerator>();
	}
};

// Class AudioMixer.QuartzClockHandle
// 0x01C8 (0x01F0 - 0x0028)
class UQuartzClockHandle final : public UObject
{
public:
	uint8                                         Pad_13A1[0x1C8];                                   // 0x0028(0x01C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetBeatProgressPercent(EQuartzCommandQuantization QuantizationBoundary, float PhaseOffset, float MsOffset);
	struct FQuartzTransportTimeStamp GetCurrentTimestamp(const class UObject* WorldContextObject);
	float GetDurationOfQuantizationTypeInSeconds(const class UObject* WorldContextObject, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
	float GetEstimatedRunTime(const class UObject* WorldContextObject);
	bool IsClockRunning(const class UObject* WorldContextObject);
	void NotifyOnQuantizationBoundary(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate, float InMsOffset);
	void PauseClock(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void ResetTransport(const class UObject* WorldContextObject, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate);
	void ResetTransportQuantized(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate, class UQuartzClockHandle** ClockHandle);
	void ResumeClock(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void SetBeatsPerMinute(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float BeatsPerMinute);
	void SetMillisecondsPerTick(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float MillisecondsPerTick);
	void SetSecondsPerTick(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float SecondsPerTick);
	void SetThirtySecondNotesPerMinute(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float ThirtySecondsNotesPerMinute);
	void SetTicksPerSecond(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float TicksPerSecond);
	void StartClock(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void StartOtherClock(const class UObject* WorldContextObject, class FName OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate);
	void StopClock(const class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle** ClockHandle);
	void SubscribeToAllQuantizationEvents(const class UObject* WorldContextObject, const TDelegate<void(class FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)>& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
	void SubscribeToQuantizationEvent(const class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const TDelegate<void(class FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)>& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
	void UnsubscribeFromAllTimeDivisions(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void UnsubscribeFromTimeDivision(const class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle** ClockHandle);

	float GetBeatsPerMinute(const class UObject* WorldContextObject) const;
	float GetMillisecondsPerTick(const class UObject* WorldContextObject) const;
	float GetSecondsPerTick(const class UObject* WorldContextObject) const;
	float GetThirtySecondNotesPerMinute(const class UObject* WorldContextObject) const;
	float GetTicksPerSecond(const class UObject* WorldContextObject) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QuartzClockHandle">();
	}
	static class UQuartzClockHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuartzClockHandle>();
	}
};

// Class AudioMixer.QuartzSubsystem
// 0x0028 (0x0068 - 0x0040)
class UQuartzSubsystem final : public UTickableWorldSubsystem
{
public:
	uint8                                         Pad_13B6[0x28];                                    // 0x0040(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UQuartzClockHandle* CreateNewClock(const class UObject* WorldContextObject, class FName ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
	void DeleteClockByHandle(const class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle);
	void DeleteClockByName(const class UObject* WorldContextObject, class FName ClockName);
	bool DoesClockExist(const class UObject* WorldContextObject, class FName ClockName);
	float GetAudioRenderThreadToGameThreadAverageLatency();
	float GetAudioRenderThreadToGameThreadMaxLatency();
	float GetAudioRenderThreadToGameThreadMinLatency();
	struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(const class UObject* WorldContextObject, const class FName& InClockName);
	float GetDurationOfQuantizationTypeInSeconds(const class UObject* WorldContextObject, class FName ClockName, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
	float GetEstimatedClockRunTime(const class UObject* WorldContextObject, const class FName& InClockName);
	float GetGameThreadToAudioRenderThreadAverageLatency(const class UObject* WorldContextObject);
	float GetGameThreadToAudioRenderThreadMaxLatency(const class UObject* WorldContextObject);
	float GetGameThreadToAudioRenderThreadMinLatency(const class UObject* WorldContextObject);
	class UQuartzClockHandle* GetHandleForClock(const class UObject* WorldContextObject, class FName ClockName);
	float GetRoundTripAverageLatency(const class UObject* WorldContextObject);
	float GetRoundTripMaxLatency(const class UObject* WorldContextObject);
	float GetRoundTripMinLatency(const class UObject* WorldContextObject);
	bool IsClockRunning(const class UObject* WorldContextObject, class FName ClockName);
	bool IsQuartzEnabled();
	void SetQuartzSubsystemTickableWhenPaused(const bool bInTickableWhenPaused);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QuartzSubsystem">();
	}
	static class UQuartzSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuartzSubsystem>();
	}
};

}
