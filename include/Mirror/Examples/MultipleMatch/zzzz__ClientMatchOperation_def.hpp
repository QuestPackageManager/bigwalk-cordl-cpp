#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/ClientMatchOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientMatchOperation)
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
struct ClientMatchOperation;
}
// Write type traits
MARK_VAL_T(::Mirror::Examples::MultipleMatch::ClientMatchOperation);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::ClientMatchOperation, "Mirror.Examples.MultipleMatch", "ClientMatchOperation");
// Dependencies 
namespace Mirror::Examples::MultipleMatch {
// Is value type: true
// CS Name: Mirror.Examples.MultipleMatch.ClientMatchOperation
struct CORDL_TYPE ClientMatchOperation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ClientMatchOperation_Unwrapped
enum struct __ClientMatchOperation_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_List = static_cast<uint8_t>(0x1u),
__E_Created = static_cast<uint8_t>(0x2u),
__E_Cancelled = static_cast<uint8_t>(0x3u),
__E_Joined = static_cast<uint8_t>(0x4u),
__E_Departed = static_cast<uint8_t>(0x5u),
__E_UpdateRoom = static_cast<uint8_t>(0x6u),
__E_Started = static_cast<uint8_t>(0x7u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClientMatchOperation_Unwrapped () const noexcept {
return static_cast<__ClientMatchOperation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ClientMatchOperation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ClientMatchOperation(uint8_t  value__) noexcept;

/// @brief Field Cancelled value: U8(3)
static ::Mirror::Examples::MultipleMatch::ClientMatchOperation const Cancelled;

/// @brief Field Created value: U8(2)
static ::Mirror::Examples::MultipleMatch::ClientMatchOperation const Created;

/// @brief Field Departed value: U8(5)
static ::Mirror::Examples::MultipleMatch::ClientMatchOperation const Departed;

/// @brief Field Joined value: U8(4)
static ::Mirror::Examples::MultipleMatch::ClientMatchOperation const Joined;

/// @brief Field List value: U8(1)
static ::Mirror::Examples::MultipleMatch::ClientMatchOperation const List;

/// @brief Field None value: U8(0)
static ::Mirror::Examples::MultipleMatch::ClientMatchOperation const None;

/// @brief Field Started value: U8(7)
static ::Mirror::Examples::MultipleMatch::ClientMatchOperation const Started;

/// @brief Field UpdateRoom value: U8(6)
static ::Mirror::Examples::MultipleMatch::ClientMatchOperation const UpdateRoom;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19308};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::ClientMatchOperation, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::ClientMatchOperation) == 0x1, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch
