#pragma once
// IWYU pragma private; include "Mirror/NetworkLoop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkLoop)
namespace Mirror {
struct NetworkLoop_AddMode;
}
namespace Mirror {
class NetworkLoop___c__DisplayClass4_0;
}
namespace Mirror {
class NetworkLoop___c__DisplayClass5_0;
}
namespace System {
class Action;
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
namespace Mirror {
struct NetworkLoop_AddMode;
}
namespace Mirror {
class NetworkLoop;
}
namespace Mirror {
class NetworkLoop___c__DisplayClass4_0;
}
namespace Mirror {
class NetworkLoop___c__DisplayClass5_0;
}
// Write type traits
MARK_VAL_T(::Mirror::NetworkLoop_AddMode);
MARK_REF_T(::Mirror::NetworkLoop*);
MARK_REF_T(::Mirror::NetworkLoop___c__DisplayClass4_0*);
MARK_REF_T(::Mirror::NetworkLoop___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkLoop_AddMode, "Mirror", "NetworkLoop/AddMode");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkLoop*, "Mirror", "NetworkLoop");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkLoop___c__DisplayClass4_0*, "Mirror", "NetworkLoop/<>c__DisplayClass4_0");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkLoop___c__DisplayClass5_0*, "Mirror", "NetworkLoop/<>c__DisplayClass5_0");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.NetworkLoop/AddMode
struct CORDL_TYPE NetworkLoop_AddMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkLoop_AddMode_Unwrapped
enum struct __NetworkLoop_AddMode_Unwrapped : int32_t {
__E_Beginning = static_cast<int32_t>(0x0),
__E_End = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkLoop_AddMode_Unwrapped () const noexcept {
return static_cast<__NetworkLoop_AddMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkLoop_AddMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkLoop_AddMode(int32_t  value__) noexcept;

/// @brief Field Beginning value: I32(0)
static ::Mirror::NetworkLoop_AddMode const Beginning;

/// @brief Field End value: I32(1)
static ::Mirror::NetworkLoop_AddMode const End;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18319};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkLoop_AddMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkLoop_AddMode) == 0x4, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkLoop/<>c__DisplayClass4_0
class CORDL_TYPE NetworkLoop___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field function, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_function, put=__cordl_internal_set_function)) ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  function;

static inline ::Mirror::NetworkLoop___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <FindPlayerLoopEntryIndex>b__0, addr 0x181552810, size 0x20, virtual false, abstract: false, final false
inline bool _FindPlayerLoopEntryIndex_b__0(::UnityEngine::LowLevel::PlayerLoopSystem  elem) ;

constexpr ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* const& __cordl_internal_get_function() const;

constexpr ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*& __cordl_internal_get_function() ;

constexpr void __cordl_internal_set_function(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkLoop___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkLoop___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkLoop___c__DisplayClass4_0(NetworkLoop___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkLoop___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkLoop___c__DisplayClass4_0(NetworkLoop___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18320};

/// @brief Field function, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  ___function;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkLoop___c__DisplayClass4_0, ___function) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkLoop___c__DisplayClass4_0) == 0x18, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkLoop/<>c__DisplayClass5_0
class CORDL_TYPE NetworkLoop___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field function, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_function, put=__cordl_internal_set_function)) ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  function;

static inline ::Mirror::NetworkLoop___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <AddToPlayerLoop>b__0, addr 0x181552810, size 0x20, virtual false, abstract: false, final false
inline bool _AddToPlayerLoop_b__0(::UnityEngine::LowLevel::PlayerLoopSystem  s) ;

constexpr ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* const& __cordl_internal_get_function() const;

constexpr ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*& __cordl_internal_get_function() ;

constexpr void __cordl_internal_set_function(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkLoop___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkLoop___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkLoop___c__DisplayClass5_0(NetworkLoop___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkLoop___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkLoop___c__DisplayClass5_0(NetworkLoop___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18321};

/// @brief Field function, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  ___function;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkLoop___c__DisplayClass5_0, ___function) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkLoop___c__DisplayClass5_0) == 0x18, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkLoop
class CORDL_TYPE NetworkLoop : public ::System::Object {
public:
// Declarations
using AddMode = ::Mirror::NetworkLoop_AddMode;

using __c__DisplayClass4_0 = ::Mirror::NetworkLoop___c__DisplayClass4_0;

using __c__DisplayClass5_0 = ::Mirror::NetworkLoop___c__DisplayClass5_0;

/// @brief Field OnEarlyUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnEarlyUpdate, put=setStaticF_OnEarlyUpdate)) ::System::Action*  OnEarlyUpdate;

/// @brief Field OnLateUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLateUpdate, put=setStaticF_OnLateUpdate)) ::System::Action*  OnLateUpdate;

/// @brief Method AddToPlayerLoop, addr 0x1815451d0, size 0x280, virtual false, abstract: false, final false
static inline bool AddToPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  function, ::System::Type*  ownerType, ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  playerLoop, ::System::Type*  playerLoopSystemType, ::Mirror::NetworkLoop_AddMode  addMode) ;

/// @brief Method FindPlayerLoopEntryIndex, addr 0x181545450, size 0x100, virtual false, abstract: false, final false
static inline int32_t FindPlayerLoopEntryIndex(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  function, ::UnityEngine::LowLevel::PlayerLoopSystem  playerLoop, ::System::Type*  playerLoopSystemType) ;

/// @brief Method NetworkEarlyUpdate, addr 0x181545550, size 0x170, virtual false, abstract: false, final false
static inline void NetworkEarlyUpdate() ;

/// @brief Method NetworkLateUpdate, addr 0x1815456c0, size 0x50, virtual false, abstract: false, final false
static inline void NetworkLateUpdate() ;

/// @brief Method ResetStatics, addr 0x181545710, size 0x70, virtual false, abstract: false, final false
static inline void ResetStatics() ;

/// @brief Method RuntimeInitializeOnLoad, addr 0x181545780, size 0x160, virtual false, abstract: false, final false
static inline void RuntimeInitializeOnLoad() ;

static inline ::System::Action* getStaticF_OnEarlyUpdate() ;

static inline ::System::Action* getStaticF_OnLateUpdate() ;

static inline void setStaticF_OnEarlyUpdate(::System::Action*  value) ;

static inline void setStaticF_OnLateUpdate(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkLoop() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkLoop", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkLoop(NetworkLoop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkLoop", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkLoop(NetworkLoop const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18322};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkLoop) == 0x10, "Size mismatch!");

} // namespace end def Mirror
