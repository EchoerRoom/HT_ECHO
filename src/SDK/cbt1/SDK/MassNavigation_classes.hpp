#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MassNavigation

#include "Basic.hpp"

#include "MassEntity_classes.hpp"
#include "MassNavigation_structs.hpp"
#include "MassSpawner_classes.hpp"


namespace SDK
{

// Class MassNavigation.MassMovingAvoidanceProcessor
// 0x02B0 (0x0370 - 0x00C0)
class UMassMovingAvoidanceProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_1F36[0x2B0];                                   // 0x00C0(0x02B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassMovingAvoidanceProcessor">();
	}
	static class UMassMovingAvoidanceProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassMovingAvoidanceProcessor>();
	}
};

// Class MassNavigation.MassStandingAvoidanceProcessor
// 0x02B0 (0x0370 - 0x00C0)
class UMassStandingAvoidanceProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_1F37[0x2B0];                                   // 0x00C0(0x02B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassStandingAvoidanceProcessor">();
	}
	static class UMassStandingAvoidanceProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassStandingAvoidanceProcessor>();
	}
};

// Class MassNavigation.MassObstacleAvoidanceTrait
// 0x0080 (0x00A8 - 0x0028)
class UMassObstacleAvoidanceTrait final : public UMassEntityTraitBase
{
public:
	struct FMassMovingAvoidanceParameters         MovingParameters;                                  // 0x0028(0x0048)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMassStandingAvoidanceParameters       StandingParameters;                                // 0x0070(0x0038)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassObstacleAvoidanceTrait">();
	}
	static class UMassObstacleAvoidanceTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassObstacleAvoidanceTrait>();
	}
};

// Class MassNavigation.MassNavigationObstacleTrait
// 0x0000 (0x0028 - 0x0028)
class UMassNavigationObstacleTrait final : public UMassEntityTraitBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassNavigationObstacleTrait">();
	}
	static class UMassNavigationObstacleTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassNavigationObstacleTrait>();
	}
};

// Class MassNavigation.MassOffLODNavigationProcessor
// 0x02A0 (0x0360 - 0x00C0)
class UMassOffLODNavigationProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_1F38[0x2A0];                                   // 0x00C0(0x02A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassOffLODNavigationProcessor">();
	}
	static class UMassOffLODNavigationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassOffLODNavigationProcessor>();
	}
};

// Class MassNavigation.MassNavigationSmoothHeightProcessor
// 0x02A0 (0x0360 - 0x00C0)
class UMassNavigationSmoothHeightProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_1F39[0x2A0];                                   // 0x00C0(0x02A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassNavigationSmoothHeightProcessor">();
	}
	static class UMassNavigationSmoothHeightProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassNavigationSmoothHeightProcessor>();
	}
};

// Class MassNavigation.MassMoveTargetFragmentInitializer
// 0x02A8 (0x0380 - 0x00D8)
class UMassMoveTargetFragmentInitializer final : public UMassObserverProcessor
{
public:
	uint8                                         Pad_1F3A[0x2A8];                                   // 0x00D8(0x02A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassMoveTargetFragmentInitializer">();
	}
	static class UMassMoveTargetFragmentInitializer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassMoveTargetFragmentInitializer>();
	}
};

// Class MassNavigation.MassNavigationObstacleGridProcessor
// 0x07E0 (0x08A0 - 0x00C0)
class UMassNavigationObstacleGridProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_1F3B[0x7E0];                                   // 0x00C0(0x07E0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassNavigationObstacleGridProcessor">();
	}
	static class UMassNavigationObstacleGridProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassNavigationObstacleGridProcessor>();
	}
};

// Class MassNavigation.MassNavigationObstacleRemoverProcessor
// 0x02A8 (0x0380 - 0x00D8)
class UMassNavigationObstacleRemoverProcessor final : public UMassObserverProcessor
{
public:
	uint8                                         Pad_1F3C[0x2A8];                                   // 0x00D8(0x02A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassNavigationObstacleRemoverProcessor">();
	}
	static class UMassNavigationObstacleRemoverProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassNavigationObstacleRemoverProcessor>();
	}
};

// Class MassNavigation.MassNavigationSubsystem
// 0x00A8 (0x00E0 - 0x0038)
class UMassNavigationSubsystem final : public UMassSubsystemBase
{
public:
	uint8                                         Pad_1F3D[0xA8];                                    // 0x0038(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassNavigationSubsystem">();
	}
	static class UMassNavigationSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassNavigationSubsystem>();
	}
};

// Class MassNavigation.MassSmoothOrientationProcessor
// 0x0540 (0x0600 - 0x00C0)
class UMassSmoothOrientationProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_1F3E[0x540];                                   // 0x00C0(0x0540)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassSmoothOrientationProcessor">();
	}
	static class UMassSmoothOrientationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassSmoothOrientationProcessor>();
	}
};

// Class MassNavigation.MassSmoothOrientationTrait
// 0x0018 (0x0040 - 0x0028)
class UMassSmoothOrientationTrait final : public UMassEntityTraitBase
{
public:
	struct FMassSmoothOrientationParameters       Orientation;                                       // 0x0028(0x0018)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassSmoothOrientationTrait">();
	}
	static class UMassSmoothOrientationTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassSmoothOrientationTrait>();
	}
};

// Class MassNavigation.MassSteerToMoveTargetProcessor
// 0x02A0 (0x0360 - 0x00C0)
class UMassSteerToMoveTargetProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_1F3F[0x2A0];                                   // 0x00C0(0x02A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassSteerToMoveTargetProcessor">();
	}
	static class UMassSteerToMoveTargetProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassSteerToMoveTargetProcessor>();
	}
};

// Class MassNavigation.MassSteeringTrait
// 0x0028 (0x0050 - 0x0028)
class UMassSteeringTrait final : public UMassEntityTraitBase
{
public:
	struct FMassMovingSteeringParameters          MovingSteering;                                    // 0x0028(0x0008)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMassStandingSteeringParameters        StandingSteering;                                  // 0x0030(0x0020)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassSteeringTrait">();
	}
	static class UMassSteeringTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassSteeringTrait>();
	}
};

}

