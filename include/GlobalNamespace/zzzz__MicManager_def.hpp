#pragma once
// IWYU pragma private; include "GlobalNamespace/MicManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MicManager)
namespace GlobalNamespace {
struct MicManager_StopBehavior;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct MicManager_StopBehavior;
}
namespace GlobalNamespace {
class MicManager;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MicManager_StopBehavior);
MARK_REF_T(::GlobalNamespace::MicManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MicManager_StopBehavior, "", "MicManager/StopBehavior");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MicManager*, "", "MicManager");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MicManager/StopBehavior
struct CORDL_TYPE MicManager_StopBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MicManager_StopBehavior_Unwrapped
enum struct __MicManager_StopBehavior_Unwrapped : int32_t {
__E_Keep = static_cast<int32_t>(0x0),
__E_Trim = static_cast<int32_t>(0x1),
__E_Destroy = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MicManager_StopBehavior_Unwrapped () const noexcept {
return static_cast<__MicManager_StopBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MicManager_StopBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MicManager_StopBehavior(int32_t  value__) noexcept;

/// @brief Field Destroy value: I32(2)
static ::GlobalNamespace::MicManager_StopBehavior const Destroy;

/// @brief Field Keep value: I32(0)
static ::GlobalNamespace::MicManager_StopBehavior const Keep;

/// @brief Field Trim value: I32(1)
static ::GlobalNamespace::MicManager_StopBehavior const Trim;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17629};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MicManager_StopBehavior, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MicManager_StopBehavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MicManager
class CORDL_TYPE MicManager : public ::System::Object {
public:
// Declarations
using StopBehavior = ::GlobalNamespace::MicManager_StopBehavior;

/// @brief Field _deviceClips, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__deviceClips, put=setStaticF__deviceClips)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*  _deviceClips;

/// @brief Method ClipKey, addr 0x1804a02a0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW ClipKey(::StringW  deviceName) ;

/// @brief Method DeviceLabel, addr 0x1804a02b0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW DeviceLabel(::StringW  deviceName) ;

/// @brief Method GetClip, addr 0x1804a02c0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> GetClip(::StringW  deviceName) ;

/// @brief Method GetPosition, addr 0x1804a0330, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetPosition(::StringW  deviceName) ;

/// @brief Method IsRecording, addr 0x1804a0360, size 0x10, virtual false, abstract: false, final false
static inline bool IsRecording(::StringW  deviceName) ;

/// @brief Method StartRecording, addr 0x1804a0370, size 0x1d0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> StartRecording(::StringW  deviceName, bool  loop, int32_t  lengthSec, int32_t  frequency) ;

/// @brief Method StopAll, addr 0x1804a0540, size 0x130, virtual false, abstract: false, final false
static inline void StopAll(::GlobalNamespace::MicManager_StopBehavior  behavior) ;

/// @brief Method StopRecording, addr 0x1804a0670, size 0x2b0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> StopRecording(::StringW  deviceName, ::GlobalNamespace::MicManager_StopBehavior  behavior) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AudioClip>>* getStaticF__deviceClips() ;

/// @brief Method get_DeviceClips, addr 0x1804a0980, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::UnityW<::UnityEngine::AudioClip>>* get_DeviceClips() ;

/// @brief Method get_Devices, addr 0x1804a09c0, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_Devices() ;

static inline void setStaticF__deviceClips(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicManager(MicManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicManager(MicManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17630};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MicManager) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
