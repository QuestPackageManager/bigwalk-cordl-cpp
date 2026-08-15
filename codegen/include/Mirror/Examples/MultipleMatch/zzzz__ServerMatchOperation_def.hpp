#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/ServerMatchOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServerMatchOperation)
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
struct ServerMatchOperation;
}
// Write type traits
MARK_VAL_T(::Mirror::Examples::MultipleMatch::ServerMatchOperation);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::ServerMatchOperation, "Mirror.Examples.MultipleMatch", "ServerMatchOperation");
// Dependencies 
namespace Mirror::Examples::MultipleMatch {
// Is value type: true
// CS Name: Mirror.Examples.MultipleMatch.ServerMatchOperation
struct CORDL_TYPE ServerMatchOperation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ServerMatchOperation_Unwrapped
enum struct __ServerMatchOperation_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_Create = static_cast<uint8_t>(0x1u),
__E_Cancel = static_cast<uint8_t>(0x2u),
__E_Start = static_cast<uint8_t>(0x3u),
__E_Join = static_cast<uint8_t>(0x4u),
__E_Leave = static_cast<uint8_t>(0x5u),
__E_Ready = static_cast<uint8_t>(0x6u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ServerMatchOperation_Unwrapped () const noexcept {
return static_cast<__ServerMatchOperation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ServerMatchOperation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ServerMatchOperation(uint8_t  value__) noexcept;

/// @brief Field Cancel value: U8(2)
static ::Mirror::Examples::MultipleMatch::ServerMatchOperation const Cancel;

/// @brief Field Create value: U8(1)
static ::Mirror::Examples::MultipleMatch::ServerMatchOperation const Create;

/// @brief Field Join value: U8(4)
static ::Mirror::Examples::MultipleMatch::ServerMatchOperation const Join;

/// @brief Field Leave value: U8(5)
static ::Mirror::Examples::MultipleMatch::ServerMatchOperation const Leave;

/// @brief Field None value: U8(0)
static ::Mirror::Examples::MultipleMatch::ServerMatchOperation const None;

/// @brief Field Ready value: U8(6)
static ::Mirror::Examples::MultipleMatch::ServerMatchOperation const Ready;

/// @brief Field Start value: U8(3)
static ::Mirror::Examples::MultipleMatch::ServerMatchOperation const Start;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19307};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::ServerMatchOperation, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::ServerMatchOperation) == 0x1, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch
