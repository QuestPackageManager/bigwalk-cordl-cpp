#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessManager)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessAttribute;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectSettings;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessLayer;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessManager___c;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessVolume;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessManager;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessManager___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessManager*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessManager*, "UnityEngine.Rendering.PostProcessing", "PostProcessManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*, "UnityEngine.Rendering.PostProcessing", "PostProcessManager/<>c");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessManager/<>c
class CORDL_TYPE PostProcessManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Func_2<::System::Type*,bool>*  __9__12_0;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c* New_ctor() ;

/// @brief Method <ReloadBaseTypes>b__12_0, addr 0x181fd04b0, size 0x50, virtual false, abstract: false, final false
inline bool _ReloadBaseTypes_b__12_0(::System::Type*  t) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Type*,bool>* getStaticF___9__12_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*  value) ;

static inline void setStaticF___9__12_0(::System::Func_2<::System::Type*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessManager___c(PostProcessManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessManager___c(PostProcessManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18638};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessManager___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessManager
class CORDL_TYPE PostProcessManager : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c;

/// @brief Field m_BaseSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BaseSettings, put=__cordl_internal_set_m_BaseSettings)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  m_BaseSettings;

/// @brief Field m_SortNeeded, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SortNeeded, put=__cordl_internal_set_m_SortNeeded)) ::System::Collections::Generic::Dictionary_2<int32_t,bool>*  m_SortNeeded;

/// @brief Field m_SortedVolumes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SortedVolumes, put=__cordl_internal_set_m_SortedVolumes)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>*  m_SortedVolumes;

/// @brief Field m_TempColliders, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TempColliders, put=__cordl_internal_set_m_TempColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  m_TempColliders;

/// @brief Field m_Volumes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Volumes, put=__cordl_internal_set_m_Volumes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*  m_Volumes;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::UnityEngine::Rendering::PostProcessing::PostProcessManager*  s_Instance;

/// @brief Field settingsTypes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsTypes, put=__cordl_internal_set_settingsTypes)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>*  settingsTypes;

/// @brief Method CleanBaseTypes, addr 0x181fc8230, size 0xd0, virtual false, abstract: false, final false
inline void CleanBaseTypes() ;

/// @brief Method GetActiveVolumes, addr 0x181fc8300, size 0x3b0, virtual false, abstract: false, final false
inline void GetActiveVolumes(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*  layer, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*  results, bool  skipDisabled, bool  skipZeroWeight) ;

/// @brief Method GetHighestPriorityVolume, addr 0x181fc86b0, size 0x110, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume> GetHighestPriorityVolume(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*  layer) ;

/// @brief Method GetHighestPriorityVolume, addr 0x181fc87c0, size 0xd0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume> GetHighestPriorityVolume(::UnityEngine::LayerMask  mask) ;

/// @brief Method GrabVolumes, addr 0x181fc8890, size 0x290, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>* GrabVolumes(::UnityEngine::LayerMask  mask) ;

/// @brief Method IsVolumeRenderedByCamera, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
static inline bool IsVolumeRenderedByCamera(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume, ::UnityEngine::Camera*  camera) ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessManager* New_ctor() ;

/// @brief Method QuickVolume, addr 0x181fc8b20, size 0x280, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume> QuickVolume(int32_t  layer, float_t  priority, ::ArrayW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>  settings) ;

/// @brief Method Register, addr 0x181fc8ed0, size 0x40, virtual false, abstract: false, final false
inline void Register(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume) ;

/// @brief Method Register, addr 0x181fc8da0, size 0x130, virtual false, abstract: false, final false
inline void Register(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume, int32_t  layer) ;

/// @brief Method ReloadBaseTypes, addr 0x181fc8f10, size 0x3f0, virtual false, abstract: false, final false
inline void ReloadBaseTypes() ;

/// @brief Method ReplaceData, addr 0x181fc9300, size 0x130, virtual false, abstract: false, final false
inline void ReplaceData(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*  postProcessLayer) ;

/// @brief Method SetLayerDirty, addr 0x181fc9430, size 0xb0, virtual false, abstract: false, final false
inline void SetLayerDirty(int32_t  layer) ;

/// @brief Method SortByPriority, addr 0x181fc94e0, size 0xf0, virtual false, abstract: false, final false
static inline void SortByPriority(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*  volumes) ;

/// @brief Method Unregister, addr 0x181fc95d0, size 0x50, virtual false, abstract: false, final false
inline void Unregister(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume) ;

/// @brief Method Unregister, addr 0x181fc9620, size 0xc0, virtual false, abstract: false, final false
inline void Unregister(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume, int32_t  layer) ;

/// @brief Method UpdateSettings, addr 0x181fc96e0, size 0x520, virtual false, abstract: false, final false
inline void UpdateSettings(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*  postProcessLayer, ::UnityEngine::Camera*  camera) ;

/// @brief Method UpdateVolumeLayer, addr 0x181fc9c00, size 0x60, virtual false, abstract: false, final false
inline void UpdateVolumeLayer(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume, int32_t  prevLayer, int32_t  newLayer) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>* const& __cordl_internal_get_m_BaseSettings() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*& __cordl_internal_get_m_BaseSettings() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>* const& __cordl_internal_get_m_SortNeeded() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>*& __cordl_internal_get_m_SortNeeded() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>* const& __cordl_internal_get_m_SortedVolumes() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>*& __cordl_internal_get_m_SortedVolumes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_m_TempColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_TempColliders() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>* const& __cordl_internal_get_m_Volumes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*& __cordl_internal_get_m_Volumes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>* const& __cordl_internal_get_settingsTypes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>*& __cordl_internal_get_settingsTypes() ;

constexpr void __cordl_internal_set_m_BaseSettings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  value) ;

constexpr void __cordl_internal_set_m_SortNeeded(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value) ;

constexpr void __cordl_internal_set_m_SortedVolumes(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>*  value) ;

constexpr void __cordl_internal_set_m_TempColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_m_Volumes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*  value) ;

constexpr void __cordl_internal_set_settingsTypes(::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>*  value) ;

/// @brief Method .ctor, addr 0x181fc9c60, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessManager* getStaticF_s_Instance() ;

/// @brief Method get_instance, addr 0x181fc9da0, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::PostProcessing::PostProcessManager* get_instance() ;

static inline void setStaticF_s_Instance(::UnityEngine::Rendering::PostProcessing::PostProcessManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessManager(PostProcessManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessManager(PostProcessManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18639};

/// @brief Field k_MaxLayerCount offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxLayerCount{static_cast<int32_t>(0x20)};

/// @brief Field m_SortedVolumes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>*  ___m_SortedVolumes;

/// @brief Field m_Volumes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*  ___m_Volumes;

/// @brief Field m_SortNeeded, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,bool>*  ___m_SortNeeded;

/// @brief Field m_BaseSettings, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  ___m_BaseSettings;

/// @brief Field m_TempColliders, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___m_TempColliders;

/// @brief Field settingsTypes, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>*  ___settingsTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessManager, ___m_SortedVolumes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessManager, ___m_Volumes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessManager, ___m_SortNeeded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessManager, ___m_BaseSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessManager, ___m_TempColliders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessManager, ___settingsTypes) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessManager) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
