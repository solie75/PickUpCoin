// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaProject/SpawnVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnVolume() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ASpawnVolume();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ASpawnVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaProject();
// End Cross Module References

// Begin Class ASpawnVolume Function GetRandomPointInVolume
struct Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics
{
	struct SpawnVolume_eventGetRandomPointInVolume_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnVolume_eventGetRandomPointInVolume_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnVolume, nullptr, "GetRandomPointInVolume", nullptr, nullptr, Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::SpawnVolume_eventGetRandomPointInVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::SpawnVolume_eventGetRandomPointInVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnVolume::execGetRandomPointInVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRandomPointInVolume();
	P_NATIVE_END;
}
// End Class ASpawnVolume Function GetRandomPointInVolume

// Begin Class ASpawnVolume Function SpawningItem
struct Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics
{
	struct SpawnVolume_eventSpawningItem_Parms
	{
		TSubclassOf<AActor> ItemClass;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnVolume_eventSpawningItem_Parms, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnVolume_eventSpawningItem_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnVolume, nullptr, "SpawningItem", nullptr, nullptr, Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::SpawnVolume_eventSpawningItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::SpawnVolume_eventSpawningItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnVolume_SpawningItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnVolume_SpawningItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnVolume::execSpawningItem)
{
	P_GET_OBJECT(UClass,Z_Param_ItemClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawningItem(Z_Param_ItemClass);
	P_NATIVE_END;
}
// End Class ASpawnVolume Function SpawningItem

// Begin Class ASpawnVolume Function SpawnRandomItem
struct Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics
{
	struct SpawnVolume_eventSpawnRandomItem_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnVolume_eventSpawnRandomItem_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnVolume, nullptr, "SpawnRandomItem", nullptr, nullptr, Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics::SpawnVolume_eventSpawnRandomItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics::SpawnVolume_eventSpawnRandomItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnVolume::execSpawnRandomItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnRandomItem();
	P_NATIVE_END;
}
// End Class ASpawnVolume Function SpawnRandomItem

// Begin Class ASpawnVolume
void ASpawnVolume::StaticRegisterNativesASpawnVolume()
{
	UClass* Class = ASpawnVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRandomPointInVolume", &ASpawnVolume::execGetRandomPointInVolume },
		{ "SpawningItem", &ASpawnVolume::execSpawningItem },
		{ "SpawnRandomItem", &ASpawnVolume::execSpawnRandomItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnVolume);
UClass* Z_Construct_UClass_ASpawnVolume_NoRegister()
{
	return ASpawnVolume::StaticClass();
}
struct Z_Construct_UClass_ASpawnVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnVolume.h" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawningBox_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawningBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume, "GetRandomPointInVolume" }, // 1604630124
		{ &Z_Construct_UFunction_ASpawnVolume_SpawningItem, "SpawningItem" }, // 2047894051
		{ &Z_Construct_UFunction_ASpawnVolume_SpawnRandomItem, "SpawnRandomItem" }, // 4032921268
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnVolume, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scene_MetaData), NewProp_Scene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawningBox = { "SpawningBox", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnVolume, SpawningBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawningBox_MetaData), NewProp_SpawningBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnVolume_Statics::NewProp_ItemDataTable = { "ItemDataTable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnVolume, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataTable_MetaData), NewProp_ItemDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_Scene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_SpawningBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnVolume_Statics::NewProp_ItemDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnVolume_Statics::ClassParams = {
	&ASpawnVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnVolume()
{
	if (!Z_Registration_Info_UClass_ASpawnVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnVolume.OuterSingleton, Z_Construct_UClass_ASpawnVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnVolume.OuterSingleton;
}
template<> SPARTAPROJECT_API UClass* StaticClass<ASpawnVolume>()
{
	return ASpawnVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnVolume);
ASpawnVolume::~ASpawnVolume() {}
// End Class ASpawnVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_SpartaProject_Source_SpartaProject_SpawnVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnVolume, ASpawnVolume::StaticClass, TEXT("ASpawnVolume"), &Z_Registration_Info_UClass_ASpawnVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnVolume), 1763700766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_SpartaProject_Source_SpartaProject_SpawnVolume_h_207647449(TEXT("/Script/SpartaProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_SpartaProject_Source_SpartaProject_SpawnVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_SpartaProject_Source_SpartaProject_SpawnVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
