#pragma once
// IWYU pragma private; include "GlobalNamespace/qLqZZgRBgzcQmKQqGgEADkRKLUbqb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(qLqZZgRBgzcQmKQqGgEADkRKLUbqb)
// Forward declare root types
namespace GlobalNamespace {
struct qLqZZgRBgzcQmKQqGgEADkRKLUbqb;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb, "", "qLqZZgRBgzcQmKQqGgEADkRKLUbqb");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: qLqZZgRBgzcQmKQqGgEADkRKLUbqb
struct CORDL_TYPE qLqZZgRBgzcQmKQqGgEADkRKLUbqb {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __qLqZZgRBgzcQmKQqGgEADkRKLUbqb_Unwrapped
enum struct __qLqZZgRBgzcQmKQqGgEADkRKLUbqb_Unwrapped : int32_t {
__E_Remove = static_cast<int32_t>(0x1),
__E_Exclude = static_cast<int32_t>(0x10),
__E_PageOnly = static_cast<int32_t>(0x20),
__E_NoLegacy = static_cast<int32_t>(0x30),
__E_InputSink = static_cast<int32_t>(0x100),
__E_CaptureMouse = static_cast<int32_t>(0x200),
__E_NoHotKeys = static_cast<int32_t>(0x200),
__E_AppKeys = static_cast<int32_t>(0x400),
__E_ExclusiveInputSink = static_cast<int32_t>(0x1000),
__E_DeviceNotify = static_cast<int32_t>(0x2000),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __qLqZZgRBgzcQmKQqGgEADkRKLUbqb_Unwrapped () const noexcept {
return static_cast<__qLqZZgRBgzcQmKQqGgEADkRKLUbqb_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr qLqZZgRBgzcQmKQqGgEADkRKLUbqb() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr qLqZZgRBgzcQmKQqGgEADkRKLUbqb(int32_t  value__) noexcept;

/// @brief Field AppKeys value: I32(1024)
static ::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb const AppKeys;

/// @brief Field CaptureMouse value: I32(512)
static ::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb const CaptureMouse;

/// @brief Field DeviceNotify value: I32(8192)
static ::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb const DeviceNotify;

/// @brief Field Exclude value: I32(16)
static ::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb const Exclude;

/// @brief Field ExclusiveInputSink value: I32(4096)
static ::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb const ExclusiveInputSink;

/// @brief Field InputSink value: I32(256)
static ::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb const InputSink;

/// @brief Field NoHotKeys value: I32(512)
static ::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb const NoHotKeys;

/// @brief Field NoLegacy value: I32(48)
static ::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb const NoLegacy;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb const None;

/// @brief Field PageOnly value: I32(32)
static ::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb const PageOnly;

/// @brief Field Remove value: I32(1)
static ::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb const Remove;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6148};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::qLqZZgRBgzcQmKQqGgEADkRKLUbqb) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
