#pragma once
// IWYU pragma private; include "MA/Flora/PlayerLoopUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLoopUtility)
namespace MA::Flora {
struct PlayerLoopUtility_AddMode;
}
namespace System {
class Type;
}
namespace UnityEngine::LowLevel {
class PlayerLoopSystem_UpdateFunction;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Forward declare root types
namespace MA::Flora {
struct PlayerLoopUtility_AddMode;
}
namespace MA::Flora {
class PlayerLoopUtility;
}
// Write type traits
MARK_VAL_T(::MA::Flora::PlayerLoopUtility_AddMode);
MARK_REF_T(::MA::Flora::PlayerLoopUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::PlayerLoopUtility_AddMode, "MA.Flora", "PlayerLoopUtility/AddMode");
DEFINE_IL2CPP_CLASS(::MA::Flora::PlayerLoopUtility*, "MA.Flora", "PlayerLoopUtility");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.PlayerLoopUtility/AddMode
struct CORDL_TYPE PlayerLoopUtility_AddMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerLoopUtility_AddMode_Unwrapped
enum struct __PlayerLoopUtility_AddMode_Unwrapped : int32_t {
__E_Beginning = static_cast<int32_t>(0x0),
__E_End = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerLoopUtility_AddMode_Unwrapped () const noexcept {
return static_cast<__PlayerLoopUtility_AddMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerLoopUtility_AddMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerLoopUtility_AddMode(int32_t  value__) noexcept;

/// @brief Field Beginning value: I32(0)
static ::MA::Flora::PlayerLoopUtility_AddMode const Beginning;

/// @brief Field End value: I32(1)
static ::MA::Flora::PlayerLoopUtility_AddMode const End;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13402};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::PlayerLoopUtility_AddMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::PlayerLoopUtility_AddMode) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.PlayerLoopUtility
class CORDL_TYPE PlayerLoopUtility : public ::System::Object {
public:
// Declarations
using AddMode = ::MA::Flora::PlayerLoopUtility_AddMode;

/// @brief Method FindSystemPosition, addr 0x18150c290, size 0x70, virtual false, abstract: false, final false
static inline int32_t FindSystemPosition(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>  subSystemList, ::System::Type*  systemType) ;

/// @brief Method RemoveSystemAt, addr 0x18150c300, size 0xb0, virtual false, abstract: false, final false
static inline void RemoveSystemAt(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  parentLoopSystem, int32_t  systemPosition) ;

/// @brief Method TryAddToPlayerLoop, addr 0x18150c3b0, size 0x230, virtual false, abstract: false, final false
static inline bool TryAddToPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  function, ::System::Type*  ownerType, ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  playerLoop, ::System::Type*  playerLoopSystemType, ::MA::Flora::PlayerLoopUtility_AddMode  addMode) ;

/// @brief Method TryAddToPlayerLoop, addr 0x18150c5e0, size 0xd0, virtual false, abstract: false, final false
static inline bool TryAddToPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  function, ::System::Type*  ownerType, ::System::Type*  playerLoopSystemType, ::MA::Flora::PlayerLoopUtility_AddMode  addMode) ;

/// @brief Method TryRemoveLoopSystem, addr 0x18150c810, size 0xa0, virtual false, abstract: false, final false
static inline bool TryRemoveLoopSystem(::System::Type*  childSystemType) ;

/// @brief Method TryRemoveLoopSystem, addr 0x18150c6b0, size 0x160, virtual false, abstract: false, final false
static inline bool TryRemoveLoopSystem(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  parentLoopSystem, ::System::Type*  childSystemType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLoopUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLoopUtility(PlayerLoopUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLoopUtility(PlayerLoopUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13403};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::PlayerLoopUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
