#pragma once
// IWYU pragma private; include "Mirror/RemoteCalls/RemoteCallType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteCallType)
// Forward declare root types
namespace Mirror::RemoteCalls {
struct RemoteCallType;
}
// Write type traits
MARK_VAL_T(::Mirror::RemoteCalls::RemoteCallType);
DEFINE_IL2CPP_CLASS(::Mirror::RemoteCalls::RemoteCallType, "Mirror.RemoteCalls", "RemoteCallType");
// Dependencies 
namespace Mirror::RemoteCalls {
// Is value type: true
// CS Name: Mirror.RemoteCalls.RemoteCallType
struct CORDL_TYPE RemoteCallType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RemoteCallType_Unwrapped
enum struct __RemoteCallType_Unwrapped : int32_t {
__E_Command = static_cast<int32_t>(0x0),
__E_ClientRpc = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RemoteCallType_Unwrapped () const noexcept {
return static_cast<__RemoteCallType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RemoteCallType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RemoteCallType(int32_t  value__) noexcept;

/// @brief Field ClientRpc value: I32(1)
static ::Mirror::RemoteCalls::RemoteCallType const ClientRpc;

/// @brief Field Command value: I32(0)
static ::Mirror::RemoteCalls::RemoteCallType const Command;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18392};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::RemoteCalls::RemoteCallType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::RemoteCalls::RemoteCallType) == 0x4, "Size mismatch!");

} // namespace end def Mirror::RemoteCalls
